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

// Function: sub_003FBA10
// Address: 0x3fba10 - 0x3fbc08
void sub_003FBA10_0x3fba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FBA10_0x3fba10");
#endif

    switch (ctx->pc) {
        case 0x3fbaf4u: goto label_3fbaf4;
        case 0x3fbb10u: goto label_3fbb10;
        case 0x3fbb1cu: goto label_3fbb1c;
        case 0x3fbb40u: goto label_3fbb40;
        case 0x3fbba8u: goto label_3fbba8;
        default: break;
    }

    ctx->pc = 0x3fba10u;

    // 0x3fba10: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FBA10u;
    {
        const bool branch_taken_0x3fba10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fba10) {
            ctx->pc = 0x3FBA38u;
            goto label_3fba38;
        }
    }
    ctx->pc = 0x3FBA18u;
    // 0x3fba18: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FBA18u;
    {
        const bool branch_taken_0x3fba18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA18u;
        // 0x3fba1c: 0x24034000  addiu       $v1, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba18) {
            ctx->pc = 0x3FBA38u;
            goto label_3fba38;
        }
    }
    ctx->pc = 0x3FBA20u;
    // 0x3fba20: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x3fba20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3fba24: 0xa0a60120  sb          $a2, 0x120($a1)
    ctx->pc = 0x3fba24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 288), (uint8_t)GPR_U32(ctx, 6));
    // 0x3fba28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fba2c: 0xfca70128  sd          $a3, 0x128($a1)
    ctx->pc = 0x3fba2cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 296), GPR_U64(ctx, 7));
    // 0x3fba30: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x3fba30u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
    // 0x3fba34: 0xfca80130  sd          $t0, 0x130($a1)
    ctx->pc = 0x3fba34u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 304), GPR_U64(ctx, 8));
label_3fba38:
    // 0x3fba38: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBA40u;
    // 0x3fba40: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3fba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3fba44: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3fba44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3fba48: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3fba48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3fba4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3fba4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fba50: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3fba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3fba54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3fba54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fba58: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3fba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3fba5c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3fba5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fba60: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3fba60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3fba64: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3fba64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fba68: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3fba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3fba6c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3fba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3fba70: 0x16600019  bnez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3FBA70u;
    {
        const bool branch_taken_0x3fba70 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA70u;
        // 0x3fba74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba70) {
            ctx->pc = 0x3FBAD8u;
            goto label_3fbad8;
        }
    }
    ctx->pc = 0x3FBA78u;
    // 0x3fba78: 0x2642fffe  addiu       $v0, $s2, -0x2
    ctx->pc = 0x3fba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x3fba7c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3fba7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3fba80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FBA80u;
    {
        const bool branch_taken_0x3fba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA80u;
        // 0x3fba84: 0x34038000  ori         $v1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba80) {
            ctx->pc = 0x3FBA94u;
            goto label_3fba94;
        }
    }
    ctx->pc = 0x3FBA88u;
    // 0x3fba88: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3fba88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3fba8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3FBA8Cu;
    {
        const bool branch_taken_0x3fba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBA8Cu;
        // 0x3fba90: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fba8c) {
            ctx->pc = 0x3FBAA4u;
            goto label_3fbaa4;
        }
    }
    ctx->pc = 0x3FBA94u;
label_3fba94:
    // 0x3fba94: 0xde020100  ld          $v0, 0x100($s0)
    ctx->pc = 0x3fba94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x3fba98: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3fba98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3fba9c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x3fba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x3fbaa0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fbaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fbaa4:
    // 0x3fbaa4: 0xfe020100  sd          $v0, 0x100($s0)
    ctx->pc = 0x3fbaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
    // 0x3fbaa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3fbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fbaac: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FBAACu;
    {
        const bool branch_taken_0x3fbaac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x3FBAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAACu;
        // 0x3fbab0: 0xde020100  ld          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbaac) {
            ctx->pc = 0x3FBAC4u;
            goto label_3fbac4;
        }
    }
    ctx->pc = 0x3FBAB4u;
    // 0x3fbab4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3fbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3fbab8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fbab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fbabc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x3FBABCu;
    {
        const bool branch_taken_0x3fbabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBABCu;
        // 0x3fbac0: 0xfe020100  sd          $v0, 0x100($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbabc) {
            ctx->pc = 0x3FBBDCu;
            goto label_3fbbdc;
        }
    }
    ctx->pc = 0x3FBAC4u;
label_3fbac4:
    // 0x3fbac4: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x3fbac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x3fbac8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3fbac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3fbacc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fbaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3fbad0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3FBAD0u;
    {
        const bool branch_taken_0x3fbad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAD0u;
        // 0x3fbad4: 0xfe020100  sd          $v0, 0x100($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 256), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbad0) {
            ctx->pc = 0x3FBBDCu;
            goto label_3fbbdc;
        }
    }
    ctx->pc = 0x3FBAD8u;
label_3fbad8:
    // 0x3fbad8: 0x12c00040  beqz        $s6, . + 4 + (0x40 << 2)
    ctx->pc = 0x3FBAD8u;
    {
        const bool branch_taken_0x3fbad8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAD8u;
        // 0x3fbadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbad8) {
            ctx->pc = 0x3FBBDCu;
            goto label_3fbbdc;
        }
    }
    ctx->pc = 0x3FBAE0u;
    // 0x3fbae0: 0x8e1102c8  lw          $s1, 0x2C8($s0)
    ctx->pc = 0x3fbae0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x3fbae4: 0x271a021  addu        $s4, $s3, $s1
    ctx->pc = 0x3fbae4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x3fbae8: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x3fbae8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x3fbaec: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FBAECu;
    SET_GPR_U32(ctx, 31, 0x3FBAF4u);
    ctx->pc = 0x3FBAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBAECu;
    // 0x3fbaf0: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FBAECu, 0x3FBAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBAF4u;
label_3fbaf4:
    // 0x3fbaf4: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x3fbaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x3fbaf8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FBAF8u;
    {
        const bool branch_taken_0x3fbaf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBAF8u;
        // 0x3fbafc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbaf8) {
            ctx->pc = 0x3FBB20u;
            goto label_3fbb20;
        }
    }
    ctx->pc = 0x3FBB00u;
    // 0x3fbb00: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x3fbb00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3fbb04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3fbb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbb08: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FBB08u;
    SET_GPR_U32(ctx, 31, 0x3FBB10u);
    ctx->pc = 0x3FBB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB08u;
    // 0x3fbb0c: 0xd13021  addu        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FBB08u, 0x3FBB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB10u;
label_3fbb10:
    // 0x3fbb10: 0x8e0502cc  lw          $a1, 0x2CC($s0)
    ctx->pc = 0x3fbb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
    // 0x3fbb14: 0xc0f8b02  jal         func_3E2C08
    ctx->pc = 0x3FBB14u;
    SET_GPR_U32(ctx, 31, 0x3FBB1Cu);
    ctx->pc = 0x3FBB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB14u;
    // 0x3fbb18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2C08u, 0x3FBB14u, 0x3FBB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB1Cu;
label_3fbb1c:
    // 0x3fbb1c: 0xae0002cc  sw          $zero, 0x2CC($s0)
    ctx->pc = 0x3fbb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 0));
label_3fbb20:
    // 0x3fbb20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3fbb20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3fbb24: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x3fbb24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3fbb28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3fbb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3fbb2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3fbb2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbb30: 0x558821  addu        $s1, $v0, $s5
    ctx->pc = 0x3fbb30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3fbb34: 0xd33021  addu        $a2, $a2, $s3
    ctx->pc = 0x3fbb34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x3fbb38: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FBB38u;
    SET_GPR_U32(ctx, 31, 0x3FBB40u);
    ctx->pc = 0x3FBB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FBB38u;
    // 0x3fbb3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FBB38u, 0x3FBB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FBB40u;
label_3fbb40:
    // 0x3fbb40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3fbb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbb44: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x3FBB44u;
    {
        const bool branch_taken_0x3fbb44 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3FBB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB44u;
        // 0x3fbb48: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbb44) {
            ctx->pc = 0x3FBBC4u;
            goto label_3fbbc4;
        }
    }
    ctx->pc = 0x3FBB4Cu;
    // 0x3fbb4c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3fbb4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbb50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fbb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbb54: 0x71023  negu        $v0, $a3
    ctx->pc = 0x3fbb54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x3fbb58: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3fbb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3fbb5c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FBB5Cu;
    {
        const bool branch_taken_0x3fbb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB5Cu;
        // 0x3fbb60: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbb5c) {
            ctx->pc = 0x3FBBA8u;
            goto label_3fbba8;
        }
    }
    ctx->pc = 0x3FBB64u;
    // 0x3fbb64: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fbb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fbb68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FBB68u;
    {
        const bool branch_taken_0x3fbb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB68u;
        // 0x3fbb6c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbb68) {
            ctx->pc = 0x3FBB90u;
            goto label_3fbb90;
        }
    }
    ctx->pc = 0x3FBB70u;
    // 0x3fbb70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FBB70u;
    {
        const bool branch_taken_0x3fbb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fbb70) {
            ctx->pc = 0x3FBB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FBB70u;
            // 0x3fbb74: 0xa0920000  sb          $s2, 0x0($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FBB88u;
            goto label_3fbb88;
        }
    }
    ctx->pc = 0x3FBB78u;
    // 0x3fbb78: 0xa2320004  sb          $s2, 0x4($s1)
    ctx->pc = 0x3fbb78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fbb7c: 0x26240009  addiu       $a0, $s1, 0x9
    ctx->pc = 0x3fbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9));
    // 0x3fbb80: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3fbb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3fbb84: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x3fbb84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
label_3fbb88:
    // 0x3fbb88: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3fbb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3fbb8c: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x3fbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
label_3fbb90:
    // 0x3fbb90: 0xa0920000  sb          $s2, 0x0($a0)
    ctx->pc = 0x3fbb90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fbb94: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3fbb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3fbb98: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3FBB98u;
    {
        const bool branch_taken_0x3fbb98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FBB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBB98u;
        // 0x3fbb9c: 0x24840005  addiu       $a0, $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbb98) {
            ctx->pc = 0x3FBBC4u;
            goto label_3fbbc4;
        }
    }
    ctx->pc = 0x3FBBA0u;
    // 0x3fbba0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3fbba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fbba4: 0x0  nop
    ctx->pc = 0x3fbba4u;
    // NOP
label_3fbba8:
    // 0x3fbba8: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x3fbba8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fbbac: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x3fbbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x3fbbb0: 0xa0520005  sb          $s2, 0x5($v0)
    ctx->pc = 0x3fbbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fbbb4: 0xa052000a  sb          $s2, 0xA($v0)
    ctx->pc = 0x3fbbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fbbb8: 0xa052000f  sb          $s2, 0xF($v0)
    ctx->pc = 0x3fbbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15), (uint8_t)GPR_U32(ctx, 18));
    // 0x3fbbbc: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3FBBBCu;
    {
        const bool branch_taken_0x3fbbbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FBBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBBCu;
        // 0x3fbbc0: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fbbbc) {
            ctx->pc = 0x3FBBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fbba8;
        }
    }
    ctx->pc = 0x3FBBC4u;
label_3fbbc4:
    // 0x3fbbc4: 0xde0202b8  ld          $v0, 0x2B8($s0)
    ctx->pc = 0x3fbbc4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 696)));
    // 0x3fbbc8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3fbbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3fbbcc: 0xae0502c8  sw          $a1, 0x2C8($s0)
    ctx->pc = 0x3fbbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 5));
    // 0x3fbbd0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fbbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fbbd4: 0xae1502cc  sw          $s5, 0x2CC($s0)
    ctx->pc = 0x3fbbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 21));
    // 0x3fbbd8: 0xfe0202b8  sd          $v0, 0x2B8($s0)
    ctx->pc = 0x3fbbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 696), GPR_U64(ctx, 2));
label_3fbbdc:
    // 0x3fbbdc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3fbbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fbbe0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3fbbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fbbe4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3fbbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fbbe8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3fbbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fbbec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3fbbecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fbbf0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3fbbf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fbbf4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3fbbf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fbbf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fbbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fbbfc: 0x3e00008  jr          $ra
    ctx->pc = 0x3FBBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FBC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FBBFCu;
        // 0x3fbc00: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FBBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FBC04u;
    // 0x3fbc04: 0x0  nop
    ctx->pc = 0x3fbc04u;
    // NOP
    ctx->pc = 0x3fbc08u;
}
