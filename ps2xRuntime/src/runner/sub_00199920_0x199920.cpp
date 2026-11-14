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

// Function: sub_00199920
// Address: 0x199920 - 0x199c40
void sub_00199920_0x199920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199920_0x199920");
#endif

    switch (ctx->pc) {
        case 0x199954u: goto label_199954;
        case 0x199964u: goto label_199964;
        case 0x199978u: goto label_199978;
        case 0x199988u: goto label_199988;
        case 0x1999acu: goto label_1999ac;
        case 0x1999b8u: goto label_1999b8;
        case 0x1999d0u: goto label_1999d0;
        case 0x1999e4u: goto label_1999e4;
        case 0x1999f0u: goto label_1999f0;
        case 0x199a58u: goto label_199a58;
        case 0x199a60u: goto label_199a60;
        case 0x199a7cu: goto label_199a7c;
        case 0x199a88u: goto label_199a88;
        case 0x199aa4u: goto label_199aa4;
        case 0x199ab0u: goto label_199ab0;
        case 0x199ad4u: goto label_199ad4;
        case 0x199ae0u: goto label_199ae0;
        case 0x199b10u: goto label_199b10;
        case 0x199b24u: goto label_199b24;
        case 0x199b30u: goto label_199b30;
        case 0x199b60u: goto label_199b60;
        case 0x199b6cu: goto label_199b6c;
        case 0x199b88u: goto label_199b88;
        case 0x199b98u: goto label_199b98;
        case 0x199be0u: goto label_199be0;
        case 0x199becu: goto label_199bec;
        case 0x199c08u: goto label_199c08;
        case 0x199c18u: goto label_199c18;
        default: break;
    }

    ctx->pc = 0x199920u;

    // 0x199920: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x199920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x199924: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x199924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x199928: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x199928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19992c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x199930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x199930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x199934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x199938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19993c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x19993cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x199940: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x199940u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x199944: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199948: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19994c: 0xc06610c  jal         func_198430
    ctx->pc = 0x19994Cu;
    SET_GPR_U32(ctx, 31, 0x199954u);
    ctx->pc = 0x198430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198430u, 0x19994Cu, 0x199954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199954u;
label_199954:
    // 0x199954: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199954u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199958: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19995c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19995Cu;
    {
        const bool branch_taken_0x19995c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19995c) {
            ctx->pc = 0x19998Cu;
            goto label_19998c;
        }
    }
    ctx->pc = 0x199964u;
label_199964:
    // 0x199964: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199968: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19996c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199970: 0xc066004  jal         func_198010
    ctx->pc = 0x199970u;
    SET_GPR_U32(ctx, 31, 0x199978u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199970u, 0x199978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199978u;
label_199978:
    // 0x199978: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19997c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x19997cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x199980: 0xc0670d0  jal         func_19C340
    ctx->pc = 0x199980u;
    SET_GPR_U32(ctx, 31, 0x199988u);
    ctx->pc = 0x19C340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C340u, 0x199980u, 0x199988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199988u;
label_199988:
    // 0x199988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_19998c:
    // 0x19998c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x19998cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x199990: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x199990u;
    {
        const bool branch_taken_0x199990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199990) {
            ctx->pc = 0x199964u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199964;
        }
    }
    ctx->pc = 0x199998u;
    // 0x199998: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19999c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x1999a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1999a4: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x1999A4u;
    SET_GPR_U32(ctx, 31, 0x1999ACu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x1999A4u, 0x1999ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999ACu;
label_1999ac:
    // 0x1999ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1999acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999b0: 0xc067074  jal         func_19C1D0
    ctx->pc = 0x1999B0u;
    SET_GPR_U32(ctx, 31, 0x1999B8u);
    ctx->pc = 0x19C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1D0u, 0x1999B0u, 0x1999B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999B8u;
label_1999b8:
    // 0x1999b8: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1999B8u;
    {
        const bool branch_taken_0x1999b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1999b8) {
            ctx->pc = 0x199B04u;
            goto label_199b04;
        }
    }
    ctx->pc = 0x1999C0u;
    // 0x1999c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1999c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1999c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1999C8u;
    {
        const bool branch_taken_0x1999c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1999c8) {
            ctx->pc = 0x199A04u;
            goto label_199a04;
        }
    }
    ctx->pc = 0x1999D0u;
label_1999d0:
    // 0x1999d0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1999d4: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1999d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1999d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1999d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999dc: 0xc066004  jal         func_198010
    ctx->pc = 0x1999DCu;
    SET_GPR_U32(ctx, 31, 0x1999E4u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x1999DCu, 0x1999E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999E4u;
label_1999e4:
    // 0x1999e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1999e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1999e8: 0xc06672c  jal         func_199CB0
    ctx->pc = 0x1999E8u;
    SET_GPR_U32(ctx, 31, 0x1999F0u);
    ctx->pc = 0x199CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199CB0u, 0x1999E8u, 0x1999F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1999F0u;
label_1999f0:
    // 0x1999f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1999f4: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1999F4u;
    {
        const bool branch_taken_0x1999f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1999f4) {
            ctx->pc = 0x199A00u;
            goto label_199a00;
        }
    }
    ctx->pc = 0x1999FCu;
    // 0x1999fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1999fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_199a00:
    // 0x199a00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_199a04:
    // 0x199a04: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x199a04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x199a08: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x199A08u;
    {
        const bool branch_taken_0x199a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199a08) {
            ctx->pc = 0x1999D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1999d0;
        }
    }
    ctx->pc = 0x199A10u;
    // 0x199a10: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x199a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a14: 0x8c6300ec  lw          $v1, 0xEC($v1)
    ctx->pc = 0x199a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x199a18: 0x263082b  sltu        $at, $s3, $v1
    ctx->pc = 0x199a18u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x199a1c: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x199A1Cu;
    {
        const bool branch_taken_0x199a1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199a1c) {
            ctx->pc = 0x199B04u;
            goto label_199b04;
        }
    }
    ctx->pc = 0x199A24u;
    // 0x199a24: 0xc781baec  lwc1        $f1, -0x4514($gp)
    ctx->pc = 0x199a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a28: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x199a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a2c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x199a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x199a30: 0xe780baec  swc1        $f0, -0x4514($gp)
    ctx->pc = 0x199a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949612), bits); }
    // 0x199a34: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x199a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a38: 0xc46100f0  lwc1        $f1, 0xF0($v1)
    ctx->pc = 0x199a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199a3c: 0xc780baec  lwc1        $f0, -0x4514($gp)
    ctx->pc = 0x199a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199a40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x199a40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199a44: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x199A44u;
    {
        const bool branch_taken_0x199a44 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199a44) {
            ctx->pc = 0x199B04u;
            goto label_199b04;
        }
    }
    ctx->pc = 0x199A4Cu;
    // 0x199a4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x199a4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a50: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x199A50u;
    {
        const bool branch_taken_0x199a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199a50) {
            ctx->pc = 0x199AECu;
            goto label_199aec;
        }
    }
    ctx->pc = 0x199A58u;
label_199a58:
    // 0x199a58: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x199A58u;
    SET_GPR_U32(ctx, 31, 0x199A60u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x199A58u, 0x199A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A60u;
label_199a60:
    // 0x199a60: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x199a60u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x199a64: 0x8010  mfhi        $s0
    ctx->pc = 0x199a64u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x199a68: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a6c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199a70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a74: 0xc066004  jal         func_198010
    ctx->pc = 0x199A74u;
    SET_GPR_U32(ctx, 31, 0x199A7Cu);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199A74u, 0x199A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A7Cu;
label_199a7c:
    // 0x199a7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a80: 0xc06672c  jal         func_199CB0
    ctx->pc = 0x199A80u;
    SET_GPR_U32(ctx, 31, 0x199A88u);
    ctx->pc = 0x199CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199CB0u, 0x199A80u, 0x199A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199A88u;
label_199a88:
    // 0x199a88: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x199A88u;
    {
        const bool branch_taken_0x199a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199a88) {
            ctx->pc = 0x199AE8u;
            goto label_199ae8;
        }
    }
    ctx->pc = 0x199A90u;
    // 0x199a90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199a94: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199a98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a9c: 0xc066004  jal         func_198010
    ctx->pc = 0x199A9Cu;
    SET_GPR_U32(ctx, 31, 0x199AA4u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199A9Cu, 0x199AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AA4u;
label_199aa4:
    // 0x199aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199aa8: 0xc066724  jal         func_199C90
    ctx->pc = 0x199AA8u;
    SET_GPR_U32(ctx, 31, 0x199AB0u);
    ctx->pc = 0x199C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199C90u, 0x199AA8u, 0x199AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AB0u;
label_199ab0:
    // 0x199ab0: 0xc7818288  lwc1        $f1, -0x7D78($gp)
    ctx->pc = 0x199ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199ab4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x199ab4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199ab8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x199AB8u;
    {
        const bool branch_taken_0x199ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x199ab8) {
            ctx->pc = 0x199AE8u;
            goto label_199ae8;
        }
    }
    ctx->pc = 0x199AC0u;
    // 0x199ac0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199ac4: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199ac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199acc: 0xc066004  jal         func_198010
    ctx->pc = 0x199ACCu;
    SET_GPR_U32(ctx, 31, 0x199AD4u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199ACCu, 0x199AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AD4u;
label_199ad4:
    // 0x199ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ad8: 0xc06712c  jal         func_19C4B0
    ctx->pc = 0x199AD8u;
    SET_GPR_U32(ctx, 31, 0x199AE0u);
    ctx->pc = 0x19C4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C4B0u, 0x199AD8u, 0x199AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199AE0u;
label_199ae0:
    // 0x199ae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199AE0u;
    {
        const bool branch_taken_0x199ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199ae0) {
            ctx->pc = 0x199AF8u;
            goto label_199af8;
        }
    }
    ctx->pc = 0x199AE8u;
label_199ae8:
    // 0x199ae8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x199ae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_199aec:
    // 0x199aec: 0x2e430014  sltiu       $v1, $s2, 0x14
    ctx->pc = 0x199aecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x199af0: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x199AF0u;
    {
        const bool branch_taken_0x199af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199af0) {
            ctx->pc = 0x199A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199a58;
        }
    }
    ctx->pc = 0x199AF8u;
label_199af8:
    // 0x199af8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x199af8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x199afc: 0x0  nop
    ctx->pc = 0x199afcu;
    // NOP
    // 0x199b00: 0xe780baec  swc1        $f0, -0x4514($gp)
    ctx->pc = 0x199b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294949612), bits); }
label_199b04:
    // 0x199b04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x199b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b08: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x199B08u;
    {
        const bool branch_taken_0x199b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199b08) {
            ctx->pc = 0x199BA4u;
            goto label_199ba4;
        }
    }
    ctx->pc = 0x199B10u;
label_199b10:
    // 0x199b10: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199b14: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199b18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b1c: 0xc066004  jal         func_198010
    ctx->pc = 0x199B1Cu;
    SET_GPR_U32(ctx, 31, 0x199B24u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199B1Cu, 0x199B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B24u;
label_199b24:
    // 0x199b24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b28: 0xc067238  jal         func_19C8E0
    ctx->pc = 0x199B28u;
    SET_GPR_U32(ctx, 31, 0x199B30u);
    ctx->pc = 0x19C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C8E0u, 0x199B28u, 0x199B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B30u;
label_199b30:
    // 0x199b30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x199b30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b34: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x199b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199b38: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x199b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199b3c: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x199b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199b40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x199b40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x199b44: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199BA0u;
            goto label_199ba0;
        }
    }
    ctx->pc = 0x199B4Cu;
    // 0x199b4c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199b50: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199b54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b58: 0xc066004  jal         func_198010
    ctx->pc = 0x199B58u;
    SET_GPR_U32(ctx, 31, 0x199B60u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199B58u, 0x199B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B60u;
label_199b60:
    // 0x199b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b64: 0xc06671c  jal         func_199C70
    ctx->pc = 0x199B64u;
    SET_GPR_U32(ctx, 31, 0x199B6Cu);
    ctx->pc = 0x199C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199C70u, 0x199B64u, 0x199B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B6Cu;
label_199b6c:
    // 0x199b6c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199B6Cu;
    {
        const bool branch_taken_0x199b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199b6c) {
            ctx->pc = 0x199BA0u;
            goto label_199ba0;
        }
    }
    ctx->pc = 0x199B74u;
    // 0x199b74: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199b78: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x199b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x199b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b80: 0xc066004  jal         func_198010
    ctx->pc = 0x199B80u;
    SET_GPR_U32(ctx, 31, 0x199B88u);
    ctx->pc = 0x198010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198010u, 0x199B80u, 0x199B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B88u;
label_199b88:
    // 0x199b88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199b90: 0xc066710  jal         func_199C40
    ctx->pc = 0x199B90u;
    SET_GPR_U32(ctx, 31, 0x199B98u);
    ctx->pc = 0x199C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199C40u, 0x199B90u, 0x199B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B98u;
label_199b98:
    // 0x199b98: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x199b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199b9c: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x199b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_199ba0:
    // 0x199ba0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x199ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_199ba4:
    // 0x199ba4: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x199ba4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x199ba8: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x199BA8u;
    {
        const bool branch_taken_0x199ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199ba8) {
            ctx->pc = 0x199B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199b10;
        }
    }
    ctx->pc = 0x199BB0u;
    // 0x199bb0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199bb4: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x199bb8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199bbc: 0x8c6300f4  lw          $v1, 0xF4($v1)
    ctx->pc = 0x199bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x199bc0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x199bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x199bc4: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x199BC4u;
    {
        const bool branch_taken_0x199bc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x199bc4) {
            ctx->pc = 0x199C18u;
            goto label_199c18;
        }
    }
    ctx->pc = 0x199BCCu;
    // 0x199bcc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199bd0: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x199bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x199bd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199bd8: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x199BD8u;
    SET_GPR_U32(ctx, 31, 0x199BE0u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x199BD8u, 0x199BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199BE0u;
label_199be0:
    // 0x199be0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199be4: 0xc067074  jal         func_19C1D0
    ctx->pc = 0x199BE4u;
    SET_GPR_U32(ctx, 31, 0x199BECu);
    ctx->pc = 0x19C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1D0u, 0x199BE4u, 0x199BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199BECu;
label_199bec:
    // 0x199bec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x199BECu;
    {
        const bool branch_taken_0x199bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x199bec) {
            ctx->pc = 0x199C18u;
            goto label_199c18;
        }
    }
    ctx->pc = 0x199BF4u;
    // 0x199bf4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x199bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199bf8: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x199bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x199bfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c00: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x199C00u;
    SET_GPR_U32(ctx, 31, 0x199C08u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x199C00u, 0x199C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C08u;
label_199c08:
    // 0x199c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x199c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c10: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x199C10u;
    SET_GPR_U32(ctx, 31, 0x199C18u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x199C10u, 0x199C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C18u;
label_199c18:
    // 0x199c18: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x199c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199c1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x199c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199c20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x199c20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199c24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199c24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199c28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199c28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199c2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x199c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199c30: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x199c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x199c34: 0x3e00008  jr          $ra
    ctx->pc = 0x199C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199C3Cu;
    // 0x199c3c: 0x0  nop
    ctx->pc = 0x199c3cu;
    // NOP
    ctx->pc = 0x199c40u;
}
