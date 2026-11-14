#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CE930
// Address: 0x3ce930 - 0x3cef40
void sub_003CE930_0x3ce930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CE930_0x3ce930");
#endif

    switch (ctx->pc) {
        case 0x3ce968u: goto label_3ce968;
        case 0x3ce980u: goto label_3ce980;
        case 0x3ceac8u: goto label_3ceac8;
        case 0x3ced40u: goto label_3ced40;
        default: break;
    }

    ctx->pc = 0x3ce930u;

    // 0x3ce930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3ce930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3ce934: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ce934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ce938: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ce938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ce93c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ce93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ce940: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ce940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce944: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ce944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ce948: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3ce948u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3ce94c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ce94cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ce950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ce954: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3ce954u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x3ce958: 0xc7948100  lwc1        $f20, -0x7F00($gp)
    ctx->pc = 0x3ce958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3ce95c: 0xc66c0010  lwc1        $f12, 0x10($s3)
    ctx->pc = 0x3ce95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce960: 0xc0c38ba  jal         func_30E2E8
    ctx->pc = 0x3CE960u;
    SET_GPR_U32(ctx, 31, 0x3CE968u);
    ctx->pc = 0x3CE964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE960u;
    // 0x3ce964: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E2E8u, 0x3CE960u, 0x3CE968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE968u;
label_3ce968:
    // 0x3ce968: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x3ce968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3ce96c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce96cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ce970: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ce970u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ce974: 0x24520002  addiu       $s2, $v0, 0x2
    ctx->pc = 0x3ce974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3ce978: 0xc0c38ba  jal         func_30E2E8
    ctx->pc = 0x3CE978u;
    SET_GPR_U32(ctx, 31, 0x3CE980u);
    ctx->pc = 0x3CE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CE978u;
    // 0x3ce97c: 0x46146300  add.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E2E8u, 0x3CE978u, 0x3CE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CE980u;
label_3ce980:
    // 0x3ce980: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ce980u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3ce984: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3ce984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3ce988: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3ce988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ce98c: 0x244e0002  addiu       $t6, $v0, 0x2
    ctx->pc = 0x3ce98cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x3ce990: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x3ce990u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ce994: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3ce994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3ce998: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x3CE998u;
    {
        const bool branch_taken_0x3ce998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE998u;
        // 0x3ce99c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce998) {
            ctx->pc = 0x3CEBECu;
            goto label_3cebec;
        }
    }
    ctx->pc = 0x3CE9A0u;
    // 0x3ce9a0: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3ce9a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce9a4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x3ce9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3ce9a8: 0x31430003  andi        $v1, $t2, 0x3
    ctx->pc = 0x3ce9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x3ce9ac: 0x1940002e  blez        $t2, . + 4 + (0x2E << 2)
    ctx->pc = 0x3CE9ACu;
    {
        const bool branch_taken_0x3ce9ac = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x3CE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9ACu;
        // 0x3ce9b0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9ac) {
            ctx->pc = 0x3CEA68u;
            goto label_3cea68;
        }
    }
    ctx->pc = 0x3CE9B4u;
    // 0x3ce9b4: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3CE9B4u;
    {
        const bool branch_taken_0x3ce9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9B4u;
        // 0x3ce9b8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9b4) {
            ctx->pc = 0x3CEABCu;
            goto label_3ceabc;
        }
    }
    ctx->pc = 0x3CE9BCu;
    // 0x3ce9bc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3CE9BCu;
    {
        const bool branch_taken_0x3ce9bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce9bc) {
            ctx->pc = 0x3CE9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE9BCu;
            // 0x3ce9c0: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA6Cu;
            goto label_3cea6c;
        }
    }
    ctx->pc = 0x3CE9C4u;
    // 0x3ce9c4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ce9c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ce9c8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x3CE9C8u;
    {
        const bool branch_taken_0x3ce9c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ce9c8) {
            ctx->pc = 0x3CE9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE9C8u;
            // 0x3ce9cc: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA20u;
            goto label_3cea20;
        }
    }
    ctx->pc = 0x3CE9D0u;
    // 0x3ce9d0: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x3ce9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x3ce9d4: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3ce9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ce9d8: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CE9D8u;
    {
        const bool branch_taken_0x3ce9d8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3ce9d8) {
            ctx->pc = 0x3CE9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CE9D8u;
            // 0x3ce9dc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA18u;
            goto label_3cea18;
        }
    }
    ctx->pc = 0x3CE9E0u;
    // 0x3ce9e0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3ce9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3ce9e4: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3ce9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3ce9e8: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CE9E8u;
    {
        const bool branch_taken_0x3ce9e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CE9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9E8u;
        // 0x3ce9ec: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9e8) {
            ctx->pc = 0x3CEA14u;
            goto label_3cea14;
        }
    }
    ctx->pc = 0x3CE9F0u;
    // 0x3ce9f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CE9F0u;
    {
        const bool branch_taken_0x3ce9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CE9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CE9F0u;
        // 0x3ce9f4: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ce9f0) {
            ctx->pc = 0x3CEA04u;
            goto label_3cea04;
        }
    }
    ctx->pc = 0x3CE9F8u;
    // 0x3ce9f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ce9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ce9fc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3ce9fcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea00: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3cea00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3cea04:
    // 0x3cea04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEA04u;
    {
        const bool branch_taken_0x3cea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cea04) {
            ctx->pc = 0x3CEA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEA04u;
            // 0x3cea08: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA18u;
            goto label_3cea18;
        }
    }
    ctx->pc = 0x3CEA0Cu;
    // 0x3cea0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3cea0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea10: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3cea10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cea14:
    // 0x3cea14: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3cea14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3cea18:
    // 0x3cea18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3cea18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3cea1c: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x3cea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_3cea20:
    // 0x3cea20: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3cea20u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3cea24: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CEA24u;
    {
        const bool branch_taken_0x3cea24 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3cea24) {
            ctx->pc = 0x3CEA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEA24u;
            // 0x3cea28: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA64u;
            goto label_3cea64;
        }
    }
    ctx->pc = 0x3CEA2Cu;
    // 0x3cea2c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3cea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3cea30: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3cea30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3cea34: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CEA34u;
    {
        const bool branch_taken_0x3cea34 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEA34u;
        // 0x3cea38: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea34) {
            ctx->pc = 0x3CEA60u;
            goto label_3cea60;
        }
    }
    ctx->pc = 0x3CEA3Cu;
    // 0x3cea3c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEA3Cu;
    {
        const bool branch_taken_0x3cea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEA3Cu;
        // 0x3cea40: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea3c) {
            ctx->pc = 0x3CEA50u;
            goto label_3cea50;
        }
    }
    ctx->pc = 0x3CEA44u;
    // 0x3cea44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cea44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea48: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3cea48u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea4c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3cea4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3cea50:
    // 0x3cea50: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEA50u;
    {
        const bool branch_taken_0x3cea50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cea50) {
            ctx->pc = 0x3CEA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEA50u;
            // 0x3cea54: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEA64u;
            goto label_3cea64;
        }
    }
    ctx->pc = 0x3CEA58u;
    // 0x3cea58: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3cea58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea5c: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3cea5cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3cea60:
    // 0x3cea60: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3cea60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3cea64:
    // 0x3cea64: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3cea64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3cea68:
    // 0x3cea68: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x3cea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_3cea6c:
    // 0x3cea6c: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3cea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3cea70: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CEA70u;
    {
        const bool branch_taken_0x3cea70 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3cea70) {
            ctx->pc = 0x3CEA74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEA70u;
            // 0x3cea74: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEAB0u;
            goto label_3ceab0;
        }
    }
    ctx->pc = 0x3CEA78u;
    // 0x3cea78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3cea78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3cea7c: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3cea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3cea80: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CEA80u;
    {
        const bool branch_taken_0x3cea80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CEA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEA80u;
        // 0x3cea84: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea80) {
            ctx->pc = 0x3CEAACu;
            goto label_3ceaac;
        }
    }
    ctx->pc = 0x3CEA88u;
    // 0x3cea88: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEA88u;
    {
        const bool branch_taken_0x3cea88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEA88u;
        // 0x3cea8c: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cea88) {
            ctx->pc = 0x3CEA9Cu;
            goto label_3cea9c;
        }
    }
    ctx->pc = 0x3CEA90u;
    // 0x3cea90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cea90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea94: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3cea94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cea98: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3cea98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3cea9c:
    // 0x3cea9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEA9Cu;
    {
        const bool branch_taken_0x3cea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cea9c) {
            ctx->pc = 0x3CEAA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEA9Cu;
            // 0x3ceaa0: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEAB0u;
            goto label_3ceab0;
        }
    }
    ctx->pc = 0x3CEAA4u;
    // 0x3ceaa4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ceaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceaa8: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3ceaa8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ceaac:
    // 0x3ceaac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3ceaacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_3ceab0:
    // 0x3ceab0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3ceab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3ceab4: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3CEAB4u;
    {
        const bool branch_taken_0x3ceab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEAB4u;
        // 0x3ceab8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceab4) {
            ctx->pc = 0x3CEBECu;
            goto label_3cebec;
        }
    }
    ctx->pc = 0x3CEABCu;
label_3ceabc:
    // 0x3ceabc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ceabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceac0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3ceac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceac4: 0x0  nop
    ctx->pc = 0x3ceac4u;
    // NOP
label_3ceac8:
    // 0x3ceac8: 0x8d02fffc  lw          $v0, -0x4($t0)
    ctx->pc = 0x3ceac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x3ceacc: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3ceaccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3cead0: 0x482000f  bltzl       $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x3CEAD0u;
    {
        const bool branch_taken_0x3cead0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3cead0) {
            ctx->pc = 0x3CEAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEAD0u;
            // 0x3cead4: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEB10u;
            goto label_3ceb10;
        }
    }
    ctx->pc = 0x3CEAD8u;
    // 0x3cead8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cead8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3ceadc: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3ceadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3ceae0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CEAE0u;
    {
        const bool branch_taken_0x3ceae0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CEAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEAE0u;
        // 0x3ceae4: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceae0) {
            ctx->pc = 0x3CEB0Cu;
            goto label_3ceb0c;
        }
    }
    ctx->pc = 0x3CEAE8u;
    // 0x3ceae8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEAE8u;
    {
        const bool branch_taken_0x3ceae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEAE8u;
        // 0x3ceaec: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceae8) {
            ctx->pc = 0x3CEAFCu;
            goto label_3ceafc;
        }
    }
    ctx->pc = 0x3CEAF0u;
    // 0x3ceaf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ceaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceaf4: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3ceaf4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceaf8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3ceaf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ceafc:
    // 0x3ceafc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEAFCu;
    {
        const bool branch_taken_0x3ceafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ceafc) {
            ctx->pc = 0x3CEB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEAFCu;
            // 0x3ceb00: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEB10u;
            goto label_3ceb10;
        }
    }
    ctx->pc = 0x3CEB04u;
    // 0x3ceb04: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ceb04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb08: 0x120682d  daddu       $t5, $t1, $zero
    ctx->pc = 0x3ceb08u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3ceb0c:
    // 0x3ceb0c: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3ceb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3ceb10:
    // 0x3ceb10: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3ceb10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ceb14: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3CEB14u;
    {
        const bool branch_taken_0x3ceb14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3CEB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB14u;
        // 0x3ceb18: 0x25260001  addiu       $a2, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb14) {
            ctx->pc = 0x3CEB50u;
            goto label_3ceb50;
        }
    }
    ctx->pc = 0x3CEB1Cu;
    // 0x3ceb1c: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3ceb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3ceb20: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3ceb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3ceb24: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CEB24u;
    {
        const bool branch_taken_0x3ceb24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB24u;
        // 0x3ceb28: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb24) {
            ctx->pc = 0x3CEB50u;
            goto label_3ceb50;
        }
    }
    ctx->pc = 0x3CEB2Cu;
    // 0x3ceb2c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEB2Cu;
    {
        const bool branch_taken_0x3ceb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB2Cu;
        // 0x3ceb30: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb2c) {
            ctx->pc = 0x3CEB40u;
            goto label_3ceb40;
        }
    }
    ctx->pc = 0x3CEB34u;
    // 0x3ceb34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ceb34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb38: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3ceb38u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb3c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3ceb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ceb40:
    // 0x3ceb40: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEB40u;
    {
        const bool branch_taken_0x3ceb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ceb40) {
            ctx->pc = 0x3CEB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEB40u;
            // 0x3ceb44: 0x8d02001c  lw          $v0, 0x1C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEB54u;
            goto label_3ceb54;
        }
    }
    ctx->pc = 0x3CEB48u;
    // 0x3ceb48: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ceb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb4c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3ceb4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ceb50:
    // 0x3ceb50: 0x8d02001c  lw          $v0, 0x1C($t0)
    ctx->pc = 0x3ceb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
label_3ceb54:
    // 0x3ceb54: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3ceb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ceb58: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3CEB58u;
    {
        const bool branch_taken_0x3ceb58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3CEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB58u;
        // 0x3ceb5c: 0x25260002  addiu       $a2, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb58) {
            ctx->pc = 0x3CEB94u;
            goto label_3ceb94;
        }
    }
    ctx->pc = 0x3CEB60u;
    // 0x3ceb60: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3ceb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3ceb64: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3ceb64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3ceb68: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CEB68u;
    {
        const bool branch_taken_0x3ceb68 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB68u;
        // 0x3ceb6c: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb68) {
            ctx->pc = 0x3CEB94u;
            goto label_3ceb94;
        }
    }
    ctx->pc = 0x3CEB70u;
    // 0x3ceb70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEB70u;
    {
        const bool branch_taken_0x3ceb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB70u;
        // 0x3ceb74: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb70) {
            ctx->pc = 0x3CEB84u;
            goto label_3ceb84;
        }
    }
    ctx->pc = 0x3CEB78u;
    // 0x3ceb78: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ceb78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb7c: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3ceb7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb80: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3ceb80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ceb84:
    // 0x3ceb84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEB84u;
    {
        const bool branch_taken_0x3ceb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ceb84) {
            ctx->pc = 0x3CEB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEB84u;
            // 0x3ceb88: 0x8d02002c  lw          $v0, 0x2C($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEB98u;
            goto label_3ceb98;
        }
    }
    ctx->pc = 0x3CEB8Cu;
    // 0x3ceb8c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3ceb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ceb90: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3ceb90u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ceb94:
    // 0x3ceb94: 0x8d02002c  lw          $v0, 0x2C($t0)
    ctx->pc = 0x3ceb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
label_3ceb98:
    // 0x3ceb98: 0x522023  subu        $a0, $v0, $s2
    ctx->pc = 0x3ceb98u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ceb9c: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x3CEB9Cu;
    {
        const bool branch_taken_0x3ceb9c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3CEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEB9Cu;
        // 0x3ceba0: 0x25260003  addiu       $a2, $t1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceb9c) {
            ctx->pc = 0x3CEBD8u;
            goto label_3cebd8;
        }
    }
    ctx->pc = 0x3CEBA4u;
    // 0x3ceba4: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x3ceba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3ceba8: 0x4e1823  subu        $v1, $v0, $t6
    ctx->pc = 0x3ceba8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3cebac: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3CEBACu;
    {
        const bool branch_taken_0x3cebac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3CEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEBACu;
        // 0x3cebb0: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cebac) {
            ctx->pc = 0x3CEBD8u;
            goto label_3cebd8;
        }
    }
    ctx->pc = 0x3CEBB4u;
    // 0x3cebb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEBB4u;
    {
        const bool branch_taken_0x3cebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEBB4u;
        // 0x3cebb8: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cebb4) {
            ctx->pc = 0x3CEBC8u;
            goto label_3cebc8;
        }
    }
    ctx->pc = 0x3CEBBCu;
    // 0x3cebbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cebc0: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3cebc0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cebc4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x3cebc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3cebc8:
    // 0x3cebc8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEBC8u;
    {
        const bool branch_taken_0x3cebc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cebc8) {
            ctx->pc = 0x3CEBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEBC8u;
            // 0x3cebcc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEBDCu;
            goto label_3cebdc;
        }
    }
    ctx->pc = 0x3CEBD0u;
    // 0x3cebd0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3cebd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cebd4: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x3cebd4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cebd8:
    // 0x3cebd8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x3cebd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_3cebdc:
    // 0x3cebdc: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x3cebdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x3cebe0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x3cebe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3cebe4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x3CEBE4u;
    {
        const bool branch_taken_0x3cebe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CEBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEBE4u;
        // 0x3cebe8: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cebe4) {
            ctx->pc = 0x3CEAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ceac8;
        }
    }
    ctx->pc = 0x3CEBECu;
label_3cebec:
    // 0x3cebec: 0x5a000cc  bltz        $t5, . + 4 + (0xCC << 2)
    ctx->pc = 0x3CEBECu;
    {
        const bool branch_taken_0x3cebec = (GPR_S32(ctx, 13) < 0);
        ctx->pc = 0x3CEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEBECu;
        // 0x3cebf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cebec) {
            ctx->pc = 0x3CEF20u;
            goto label_3cef20;
        }
    }
    ctx->pc = 0x3CEBF4u;
    // 0x3cebf4: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x3cebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x3cebf8: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x3cebf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3cebfc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3cebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3cec00: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3cec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3cec04: 0x2d040020  sltiu       $a0, $t0, 0x20
    ctx->pc = 0x3cec04u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3cec08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cec0c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3cec0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3cec10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3cec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3cec14: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3cec14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3cec18: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3cec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3cec1c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3cec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3cec20: 0x52c023  subu        $t8, $v0, $s2
    ctx->pc = 0x3cec20u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3cec24: 0x1480008d  bnez        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3CEC24u;
    {
        const bool branch_taken_0x3cec24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC24u;
        // 0x3cec28: 0x6e8023  subu        $s0, $v1, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec24) {
            ctx->pc = 0x3CEE5Cu;
            goto label_3cee5c;
        }
    }
    ctx->pc = 0x3CEC2Cu;
    // 0x3cec2c: 0x2dac0001  sltiu       $t4, $t5, 0x1
    ctx->pc = 0x3cec2cu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3cec30: 0x26290018  addiu       $t1, $s1, 0x18
    ctx->pc = 0x3cec30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3cec34: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x3cec34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x3cec38: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x3cec38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3cec3c: 0x1222021  addu        $a0, $t1, $v0
    ctx->pc = 0x3cec3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x3cec40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cec40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec44: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3cec44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3cec48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3cec48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3cec4c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3cec4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3cec50: 0x1100006c  beqz        $t0, . + 4 + (0x6C << 2)
    ctx->pc = 0x3CEC50u;
    {
        const bool branch_taken_0x3cec50 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC50u;
        // 0x3cec54: 0x623818  mult        $a3, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec50) {
            ctx->pc = 0x3CEE04u;
            goto label_3cee04;
        }
    }
    ctx->pc = 0x3CEC58u;
    // 0x3cec58: 0x100782d  daddu       $t7, $t0, $zero
    ctx->pc = 0x3cec58u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec5c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3cec5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec60: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3cec60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cec64: 0x31e30003  andi        $v1, $t7, 0x3
    ctx->pc = 0x3cec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x3cec68: 0x19e00023  blez        $t7, . + 4 + (0x23 << 2)
    ctx->pc = 0x3CEC68u;
    {
        const bool branch_taken_0x3cec68 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x3CEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC68u;
        // 0x3cec6c: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec68) {
            ctx->pc = 0x3CECF8u;
            goto label_3cecf8;
        }
    }
    ctx->pc = 0x3CEC70u;
    // 0x3cec70: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3CEC70u;
    {
        const bool branch_taken_0x3cec70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC70u;
        // 0x3cec74: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec70) {
            ctx->pc = 0x3CED34u;
            goto label_3ced34;
        }
    }
    ctx->pc = 0x3CEC78u;
    // 0x3cec78: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3CEC78u;
    {
        const bool branch_taken_0x3cec78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cec78) {
            ctx->pc = 0x3CEC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEC78u;
            // 0x3cec7c: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CECFCu;
            goto label_3cecfc;
        }
    }
    ctx->pc = 0x3CEC80u;
    // 0x3cec80: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cec80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3cec84: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3CEC84u;
    {
        const bool branch_taken_0x3cec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cec84) {
            ctx->pc = 0x3CEC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEC84u;
            // 0x3cec88: 0x8d040000  lw          $a0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CECC4u;
            goto label_3cecc4;
        }
    }
    ctx->pc = 0x3CEC8Cu;
    // 0x3cec8c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x3cec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3cec90: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x3cec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3cec94: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3cec94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3cec98: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3cec98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3cec9c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CEC9Cu;
    {
        const bool branch_taken_0x3cec9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEC9Cu;
        // 0x3ceca0: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cec9c) {
            ctx->pc = 0x3CECB4u;
            goto label_3cecb4;
        }
    }
    ctx->pc = 0x3CECA4u;
    // 0x3ceca4: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CECA4u;
    {
        const bool branch_taken_0x3ceca4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ceca4) {
            ctx->pc = 0x3CECB4u;
            goto label_3cecb4;
        }
    }
    ctx->pc = 0x3CECACu;
    // 0x3cecac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3cecacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cecb0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3cecb0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cecb4:
    // 0x3cecb4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3cecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3cecb8: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3cecb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3cecbc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cecbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3cecc0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3cecc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3cecc4:
    // 0x3cecc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cecc8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3cecc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ceccc: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3cecccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3cecd0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CECD0u;
    {
        const bool branch_taken_0x3cecd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cecd0) {
            ctx->pc = 0x3CECD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CECD0u;
            // 0x3cecd4: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CECECu;
            goto label_3cecec;
        }
    }
    ctx->pc = 0x3CECD8u;
    // 0x3cecd8: 0x50cd0004  beql        $a2, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CECD8u;
    {
        const bool branch_taken_0x3cecd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        if (branch_taken_0x3cecd8) {
            ctx->pc = 0x3CECDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CECD8u;
            // 0x3cecdc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CECECu;
            goto label_3cecec;
        }
    }
    ctx->pc = 0x3CECE0u;
    // 0x3cece0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3cece0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cece4: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x3cece4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cece8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3cece8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_3cecec:
    // 0x3cecec: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3cececu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3cecf0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3cecf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x3cecf4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3cecf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3cecf8:
    // 0x3cecf8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3cecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3cecfc:
    // 0x3cecfc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ced00: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3ced00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ced04: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3ced04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ced08: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CED08u;
    {
        const bool branch_taken_0x3ced08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ced08) {
            ctx->pc = 0x3CED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CED08u;
            // 0x3ced0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CED20u;
            goto label_3ced20;
        }
    }
    ctx->pc = 0x3CED10u;
    // 0x3ced10: 0x10cd0003  beq         $a2, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CED10u;
    {
        const bool branch_taken_0x3ced10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        ctx->pc = 0x3CED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED10u;
        // 0x3ced14: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced10) {
            ctx->pc = 0x3CED20u;
            goto label_3ced20;
        }
    }
    ctx->pc = 0x3CED18u;
    // 0x3ced18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ced18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ced1c: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x3ced1cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3ced20:
    // 0x3ced20: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3ced20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3ced24: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3ced24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3ced28: 0xcf102b  sltu        $v0, $a2, $t7
    ctx->pc = 0x3ced28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x3ced2c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3CED2Cu;
    {
        const bool branch_taken_0x3ced2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED2Cu;
        // 0x3ced30: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced2c) {
            ctx->pc = 0x3CEE04u;
            goto label_3cee04;
        }
    }
    ctx->pc = 0x3CED34u;
label_3ced34:
    // 0x3ced34: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3ced34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ced38: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3ced38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ced3c: 0x0  nop
    ctx->pc = 0x3ced3cu;
    // NOP
label_3ced40:
    // 0x3ced40: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x3ced40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3ced44: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3ced44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3ced48: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x3ced48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ced4c: 0x87182b  sltu        $v1, $a0, $a3
    ctx->pc = 0x3ced4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ced50: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3CED50u;
    {
        const bool branch_taken_0x3ced50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ced50) {
            ctx->pc = 0x3CED54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CED50u;
            // 0x3ced54: 0x8d440010  lw          $a0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CED6Cu;
            goto label_3ced6c;
        }
    }
    ctx->pc = 0x3CED58u;
    // 0x3ced58: 0x50cd0004  beql        $a2, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CED58u;
    {
        const bool branch_taken_0x3ced58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 13));
        if (branch_taken_0x3ced58) {
            ctx->pc = 0x3CED5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CED58u;
            // 0x3ced5c: 0x8d440010  lw          $a0, 0x10($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CED6Cu;
            goto label_3ced6c;
        }
    }
    ctx->pc = 0x3CED60u;
    // 0x3ced60: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ced60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ced64: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x3ced64u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ced68: 0x8d440010  lw          $a0, 0x10($t2)
    ctx->pc = 0x3ced68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
label_3ced6c:
    // 0x3ced6c: 0x25680001  addiu       $t0, $t3, 0x1
    ctx->pc = 0x3ced6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3ced70: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x3ced70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x3ced74: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3ced74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ced78: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3ced78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ced7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CED7Cu;
    {
        const bool branch_taken_0x3ced7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CED7Cu;
        // 0x3ced80: 0x24c50001  addiu       $a1, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ced7c) {
            ctx->pc = 0x3CED94u;
            goto label_3ced94;
        }
    }
    ctx->pc = 0x3CED84u;
    // 0x3ced84: 0x50ad0004  beql        $a1, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CED84u;
    {
        const bool branch_taken_0x3ced84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x3ced84) {
            ctx->pc = 0x3CED88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CED84u;
            // 0x3ced88: 0x8d440020  lw          $a0, 0x20($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CED98u;
            goto label_3ced98;
        }
    }
    ctx->pc = 0x3CED8Cu;
    // 0x3ced8c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3ced8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ced90: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x3ced90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ced94:
    // 0x3ced94: 0x8d440020  lw          $a0, 0x20($t2)
    ctx->pc = 0x3ced94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 32)));
label_3ced98:
    // 0x3ced98: 0x25680002  addiu       $t0, $t3, 0x2
    ctx->pc = 0x3ced98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x3ced9c: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x3ced9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x3ceda0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3ceda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ceda4: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3ceda4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3ceda8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CEDA8u;
    {
        const bool branch_taken_0x3ceda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEDA8u;
        // 0x3cedac: 0x24c50002  addiu       $a1, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceda8) {
            ctx->pc = 0x3CEDC0u;
            goto label_3cedc0;
        }
    }
    ctx->pc = 0x3CEDB0u;
    // 0x3cedb0: 0x50ad0004  beql        $a1, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEDB0u;
    {
        const bool branch_taken_0x3cedb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x3cedb0) {
            ctx->pc = 0x3CEDB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEDB0u;
            // 0x3cedb4: 0x8d440030  lw          $a0, 0x30($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEDC4u;
            goto label_3cedc4;
        }
    }
    ctx->pc = 0x3CEDB8u;
    // 0x3cedb8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3cedb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cedbc: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x3cedbcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cedc0:
    // 0x3cedc0: 0x8d440030  lw          $a0, 0x30($t2)
    ctx->pc = 0x3cedc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
label_3cedc4:
    // 0x3cedc4: 0x25680003  addiu       $t0, $t3, 0x3
    ctx->pc = 0x3cedc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 3));
    // 0x3cedc8: 0x8d230030  lw          $v1, 0x30($t1)
    ctx->pc = 0x3cedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x3cedcc: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x3cedccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3cedd0: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x3cedd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3cedd4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CEDD4u;
    {
        const bool branch_taken_0x3cedd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEDD4u;
        // 0x3cedd8: 0x24c50003  addiu       $a1, $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cedd4) {
            ctx->pc = 0x3CEDECu;
            goto label_3cedec;
        }
    }
    ctx->pc = 0x3CEDDCu;
    // 0x3ceddc: 0x50ad0004  beql        $a1, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CEDDCu;
    {
        const bool branch_taken_0x3ceddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 13));
        if (branch_taken_0x3ceddc) {
            ctx->pc = 0x3CEDE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CEDDCu;
            // 0x3cede0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CEDF0u;
            goto label_3cedf0;
        }
    }
    ctx->pc = 0x3CEDE4u;
    // 0x3cede4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3cede4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cede8: 0x100602d  daddu       $t4, $t0, $zero
    ctx->pc = 0x3cede8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cedec:
    // 0x3cedec: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3cedecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_3cedf0:
    // 0x3cedf0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3cedf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3cedf4: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x3cedf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x3cedf8: 0xcf102b  sltu        $v0, $a2, $t7
    ctx->pc = 0x3cedf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x3cedfc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3CEDFCu;
    {
        const bool branch_taken_0x3cedfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEDFCu;
        // 0x3cee00: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cedfc) {
            ctx->pc = 0x3CED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ced40;
        }
    }
    ctx->pc = 0x3CEE04u;
label_3cee04:
    // 0x3cee04: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cee04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3cee08: 0xc2100  sll         $a0, $t4, 4
    ctx->pc = 0x3cee08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x3cee0c: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3cee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3cee10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3cee10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3cee14: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3cee14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3cee18: 0x1a21026  xor         $v0, $t5, $v0
    ctx->pc = 0x3cee18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) ^ GPR_U64(ctx, 2));
    // 0x3cee1c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3cee1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3cee20: 0x182680a  movz        $t5, $t4, $v0
    ctx->pc = 0x3cee20u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 12));
    // 0x3cee24: 0x68620013  ldl         $v0, 0x13($v1)
    ctx->pc = 0x3cee24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cee28: 0x6c62000c  ldr         $v0, 0xC($v1)
    ctx->pc = 0x3cee28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cee2c: 0x6865001b  ldl         $a1, 0x1B($v1)
    ctx->pc = 0x3cee2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3cee30: 0x6c650014  ldr         $a1, 0x14($v1)
    ctx->pc = 0x3cee30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3cee34: 0xb0820013  sdl         $v0, 0x13($a0)
    ctx->pc = 0x3cee34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee38: 0xb482000c  sdr         $v0, 0xC($a0)
    ctx->pc = 0x3cee38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee3c: 0xb085001b  sdl         $a1, 0x1B($a0)
    ctx->pc = 0x3cee3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee40: 0xb4850014  sdr         $a1, 0x14($a0)
    ctx->pc = 0x3cee40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee44: 0xd1100  sll         $v0, $t5, 4
    ctx->pc = 0x3cee44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x3cee48: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3cee48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3cee4c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3cee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3cee50: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x3cee50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3cee54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3cee54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3cee58: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3cee58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3cee5c:
    // 0x3cee5c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3cee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3cee60: 0x218182b  sltu        $v1, $s0, $t8
    ctx->pc = 0x3cee60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x3cee64: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3cee64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3cee68: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x3cee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x3cee6c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x3cee6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3cee70: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3cee70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3cee74: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3cee74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3cee78: 0x68a4000f  ldl         $a0, 0xF($a1)
    ctx->pc = 0x3cee78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3cee7c: 0x6ca40008  ldr         $a0, 0x8($a1)
    ctx->pc = 0x3cee7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3cee80: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x3cee80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee84: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x3cee84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee88: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x3cee88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3cee8c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3CEE8Cu;
    {
        const bool branch_taken_0x3cee8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEE8Cu;
        // 0x3cee90: 0xb6040008  sdr         $a0, 0x8($s0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cee8c) {
            ctx->pc = 0x3CEEB4u;
            goto label_3ceeb4;
        }
    }
    ctx->pc = 0x3CEE94u;
    // 0x3cee94: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cee94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3cee98: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3cee98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3cee9c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3cee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ceea0: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x3ceea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ceea4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3ceea4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3ceea8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3ceea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3ceeac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3CEEACu;
    {
        const bool branch_taken_0x3ceeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEEACu;
        // 0x3ceeb0: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ceeac) {
            ctx->pc = 0x3CEED0u;
            goto label_3ceed0;
        }
    }
    ctx->pc = 0x3CEEB4u;
label_3ceeb4:
    // 0x3ceeb4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ceeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ceeb8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ceeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ceebc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ceebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ceec0: 0xacae000c  sw          $t6, 0xC($a1)
    ctx->pc = 0x3ceec0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 14));
    // 0x3ceec4: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x3ceec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ceec8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3ceec8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3ceecc: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3ceeccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_3ceed0:
    // 0x3ceed0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3ceed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3ceed4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x3ceed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3ceed8: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3ceed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3ceedc: 0x6e1823  subu        $v1, $v1, $t6
    ctx->pc = 0x3ceedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x3ceee0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3ceee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x3ceee4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x3ceee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x3ceee8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3ceee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ceeec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ceeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ceef0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3ceef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3ceef4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3ceef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3ceef8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x3ceef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3ceefc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ceefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3cef00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3cef00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3cef04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cef04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3cef08: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3cef08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3cef0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3cef0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3cef10: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cef10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3cef14: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3cef14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3cef18: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x3cef18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x3cef1c: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x3cef1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_3cef20:
    // 0x3cef20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3cef20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3cef24: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3cef24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cef28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3cef28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cef2c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3cef2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cef30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cef30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cef34: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3cef34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3cef38: 0x3e00008  jr          $ra
    ctx->pc = 0x3CEF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CEF38u;
        // 0x3cef3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CEF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CEF40u;
}
