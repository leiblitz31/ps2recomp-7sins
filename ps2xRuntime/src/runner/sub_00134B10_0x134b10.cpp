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

// Function: sub_00134B10
// Address: 0x134b10 - 0x134ca0
void sub_00134B10_0x134b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134B10_0x134b10");
#endif

    switch (ctx->pc) {
        case 0x134b44u: goto label_134b44;
        case 0x134b84u: goto label_134b84;
        case 0x134b98u: goto label_134b98;
        case 0x134bc0u: goto label_134bc0;
        case 0x134bd4u: goto label_134bd4;
        case 0x134bf4u: goto label_134bf4;
        case 0x134c40u: goto label_134c40;
        case 0x134c54u: goto label_134c54;
        default: break;
    }

    ctx->pc = 0x134b10u;

    // 0x134b10: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x134b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x134b14: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x134b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x134b18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x134b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x134b1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x134b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x134b20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134b2c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x134b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x134b30: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x134b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x134b34: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x134b38: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134B38u;
    {
        const bool branch_taken_0x134b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b38) {
            ctx->pc = 0x134B60u;
            goto label_134b60;
        }
    }
    ctx->pc = 0x134B40u;
    // 0x134b40: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_134b44:
    // 0x134b44: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x134b44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x134b48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x134b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x134b4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134b50: 0x0  nop
    ctx->pc = 0x134b50u;
    // NOP
    // 0x134b54: 0x0  nop
    ctx->pc = 0x134b54u;
    // NOP
    // 0x134b58: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134B58u;
    {
        const bool branch_taken_0x134b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134b58) {
            ctx->pc = 0x134B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134b44;
        }
    }
    ctx->pc = 0x134B60u;
label_134b60:
    // 0x134b60: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x134b64: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x134b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134b68: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x134b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x134b6c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x134b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x134b70: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x134b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134b74: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x134b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x134b78: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x134b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x134b7c: 0xc090864  jal         func_242190
    ctx->pc = 0x134B7Cu;
    SET_GPR_U32(ctx, 31, 0x134B84u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x134B7Cu, 0x134B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B84u;
label_134b84:
    // 0x134b84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b88: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x134b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x134b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x134b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b90: 0xc09088c  jal         func_242230
    ctx->pc = 0x134B90u;
    SET_GPR_U32(ctx, 31, 0x134B98u);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x134B90u, 0x134B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B98u;
label_134b98:
    // 0x134b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x134b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b9c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134B9Cu;
    {
        const bool branch_taken_0x134b9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x134b9c) {
            ctx->pc = 0x134BB0u;
            goto label_134bb0;
        }
    }
    ctx->pc = 0x134BA4u;
    // 0x134ba4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x134BA8u;
    {
        const bool branch_taken_0x134ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ba8) {
            ctx->pc = 0x134C70u;
            goto label_134c70;
        }
    }
    ctx->pc = 0x134BB0u;
label_134bb0:
    // 0x134bb0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x134bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x134bb4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x134bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x134bb8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x134BB8u;
    SET_GPR_U32(ctx, 31, 0x134BC0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x134BB8u, 0x134BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BC0u;
label_134bc0:
    // 0x134bc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bc4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x134bc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bcc: 0xc090f80  jal         func_243E00
    ctx->pc = 0x134BCCu;
    SET_GPR_U32(ctx, 31, 0x134BD4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x134BCCu, 0x134BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BD4u;
label_134bd4:
    // 0x134bd4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x134bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134bd8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x134bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134bdc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x134bdcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x134be0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x134be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x134be4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x134be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x134be8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x134be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134bec: 0xc090f80  jal         func_243E00
    ctx->pc = 0x134BECu;
    SET_GPR_U32(ctx, 31, 0x134BF4u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x134BECu, 0x134BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BF4u;
label_134bf4:
    // 0x134bf4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x134bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134bf8: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x134bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134bfc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x134bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x134c00: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x134c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x134c04: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x134c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134c08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134c08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134c0c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134c0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134c10: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x134c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x134c14: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x134c14u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x134c18: 0xa012  mflo        $s4
    ctx->pc = 0x134c18u;
    SET_GPR_U64(ctx, 20, ctx->lo);
    // 0x134c1c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x134c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134c20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x134c20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x134c24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x134c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x134c28: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x134c2c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x134c2cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x134c30: 0x9812  mflo        $s3
    ctx->pc = 0x134c30u;
    SET_GPR_U64(ctx, 19, ctx->lo);
    // 0x134c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x134c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c38: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x134C38u;
    SET_GPR_U32(ctx, 31, 0x134C40u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x134C38u, 0x134C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C40u;
label_134c40:
    // 0x134c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x134c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x134c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c4c: 0xc04d328  jal         func_134CA0
    ctx->pc = 0x134C4Cu;
    SET_GPR_U32(ctx, 31, 0x134C54u);
    ctx->pc = 0x134CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA0u, 0x134C4Cu, 0x134C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134C54u;
label_134c54:
    // 0x134c54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x134c54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c58: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x134C58u;
    {
        const bool branch_taken_0x134c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c58) {
            ctx->pc = 0x134C6Cu;
            goto label_134c6c;
        }
    }
    ctx->pc = 0x134C60u;
    // 0x134c60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134c64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x134C64u;
    {
        const bool branch_taken_0x134c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c64) {
            ctx->pc = 0x134C70u;
            goto label_134c70;
        }
    }
    ctx->pc = 0x134C6Cu;
label_134c6c:
    // 0x134c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x134c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_134c70:
    // 0x134c70: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x134c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134c74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x134c74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134c78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x134c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134c7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134c88: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x134c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x134c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x134C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134C94u;
    // 0x134c94: 0x0  nop
    ctx->pc = 0x134c94u;
    // NOP
    // 0x134c98: 0x0  nop
    ctx->pc = 0x134c98u;
    // NOP
    // 0x134c9c: 0x0  nop
    ctx->pc = 0x134c9cu;
    // NOP
    ctx->pc = 0x134ca0u;
}
