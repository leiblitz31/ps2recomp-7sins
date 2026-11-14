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

// Function: sub_00190C50
// Address: 0x190c50 - 0x190e60
void sub_00190C50_0x190c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190C50_0x190c50");
#endif

    switch (ctx->pc) {
        case 0x190c8cu: goto label_190c8c;
        case 0x190ca0u: goto label_190ca0;
        case 0x190cb4u: goto label_190cb4;
        case 0x190cc4u: goto label_190cc4;
        case 0x190cdcu: goto label_190cdc;
        case 0x190cf4u: goto label_190cf4;
        case 0x190d0cu: goto label_190d0c;
        case 0x190d2cu: goto label_190d2c;
        case 0x190d44u: goto label_190d44;
        case 0x190d54u: goto label_190d54;
        case 0x190d7cu: goto label_190d7c;
        case 0x190d90u: goto label_190d90;
        case 0x190da4u: goto label_190da4;
        case 0x190db0u: goto label_190db0;
        case 0x190dc4u: goto label_190dc4;
        case 0x190ddcu: goto label_190ddc;
        case 0x190e04u: goto label_190e04;
        case 0x190e18u: goto label_190e18;
        case 0x190e34u: goto label_190e34;
        default: break;
    }

    ctx->pc = 0x190c50u;

    // 0x190c50: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x190c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x190c54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x190c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x190c58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x190c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x190c5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x190c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x190c60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x190c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x190c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x190c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x190c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x190c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x190c6c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x190c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x190c70: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x190c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x190c74: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x190c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x190c78: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x190c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190c7c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x190c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190c80: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x190c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190c84: 0xc06412c  jal         func_1904B0
    ctx->pc = 0x190C84u;
    SET_GPR_U32(ctx, 31, 0x190C8Cu);
    ctx->pc = 0x1904B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904B0u, 0x190C84u, 0x190C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190C8Cu;
label_190c8c:
    // 0x190c8c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x190c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190c90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x190c94: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x190c94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190c98: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x190C98u;
    {
        const bool branch_taken_0x190c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190c98) {
            ctx->pc = 0x190D14u;
            goto label_190d14;
        }
    }
    ctx->pc = 0x190CA0u;
label_190ca0:
    // 0x190ca0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x190ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190ca4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x190ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x190ca8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x190ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190cac: 0xc064428  jal         func_1910A0
    ctx->pc = 0x190CACu;
    SET_GPR_U32(ctx, 31, 0x190CB4u);
    ctx->pc = 0x1910A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1910A0u, 0x190CACu, 0x190CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CB4u;
label_190cb4:
    // 0x190cb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x190cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190cb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cbc: 0xc064418  jal         func_191060
    ctx->pc = 0x190CBCu;
    SET_GPR_U32(ctx, 31, 0x190CC4u);
    ctx->pc = 0x191060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191060u, 0x190CBCu, 0x190CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CC4u;
label_190cc4:
    // 0x190cc4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x190cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190cc8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190ccc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x190cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x190cd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cd4: 0xc06440c  jal         func_191030
    ctx->pc = 0x190CD4u;
    SET_GPR_U32(ctx, 31, 0x190CDCu);
    ctx->pc = 0x191030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191030u, 0x190CD4u, 0x190CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CDCu;
label_190cdc:
    // 0x190cdc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x190cdcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190ce0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x190CE0u;
    {
        const bool branch_taken_0x190ce0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ce0) {
            ctx->pc = 0x190D00u;
            goto label_190d00;
        }
    }
    ctx->pc = 0x190CE8u;
    // 0x190ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190cec: 0xc064404  jal         func_191010
    ctx->pc = 0x190CECu;
    SET_GPR_U32(ctx, 31, 0x190CF4u);
    ctx->pc = 0x191010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191010u, 0x190CECu, 0x190CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190CF4u;
label_190cf4:
    // 0x190cf4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x190cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190cf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x190CF8u;
    {
        const bool branch_taken_0x190cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190cf8) {
            ctx->pc = 0x190D10u;
            goto label_190d10;
        }
    }
    ctx->pc = 0x190D00u;
label_190d00:
    // 0x190d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d04: 0xc0643fc  jal         func_190FF0
    ctx->pc = 0x190D04u;
    SET_GPR_U32(ctx, 31, 0x190D0Cu);
    ctx->pc = 0x190FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190FF0u, 0x190D04u, 0x190D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D0Cu;
label_190d0c:
    // 0x190d0c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x190d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_190d10:
    // 0x190d10: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x190d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_190d14:
    // 0x190d14: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x190D14u;
    {
        const bool branch_taken_0x190d14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190d14) {
            ctx->pc = 0x190CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190ca0;
        }
    }
    ctx->pc = 0x190D1Cu;
    // 0x190d1c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x190d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x190d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x190d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d24: 0xc0643f0  jal         func_190FC0
    ctx->pc = 0x190D24u;
    SET_GPR_U32(ctx, 31, 0x190D2Cu);
    ctx->pc = 0x190FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190FC0u, 0x190D24u, 0x190D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D2Cu;
label_190d2c:
    // 0x190d2c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x190D2Cu;
    {
        const bool branch_taken_0x190d2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d2c) {
            ctx->pc = 0x190DA4u;
            goto label_190da4;
        }
    }
    ctx->pc = 0x190D34u;
    // 0x190d34: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x190d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x190d38: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x190d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190d3c: 0xc0643e0  jal         func_190F80
    ctx->pc = 0x190D3Cu;
    SET_GPR_U32(ctx, 31, 0x190D44u);
    ctx->pc = 0x190F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F80u, 0x190D3Cu, 0x190D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D44u;
label_190d44:
    // 0x190d44: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x190d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x190d48: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x190d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x190d4c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x190D4Cu;
    SET_GPR_U32(ctx, 31, 0x190D54u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x190D4Cu, 0x190D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D54u;
label_190d54:
    // 0x190d54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x190D54u;
    {
        const bool branch_taken_0x190d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d54) {
            ctx->pc = 0x190D98u;
            goto label_190d98;
        }
    }
    ctx->pc = 0x190D5Cu;
    // 0x190d5c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x190d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190d60: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x190d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190d64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d68: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x190d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d6c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x190d6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190d70: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190d70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190d74: 0xc064454  jal         func_191150
    ctx->pc = 0x190D74u;
    SET_GPR_U32(ctx, 31, 0x190D7Cu);
    ctx->pc = 0x191150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191150u, 0x190D74u, 0x190D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D7Cu;
label_190d7c:
    // 0x190d7c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x190d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190d80: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x190d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x190d84: 0x278691f8  addiu       $a2, $gp, -0x6E08
    ctx->pc = 0x190d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939128));
    // 0x190d88: 0xc0643c0  jal         func_190F00
    ctx->pc = 0x190D88u;
    SET_GPR_U32(ctx, 31, 0x190D90u);
    ctx->pc = 0x190F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F00u, 0x190D88u, 0x190D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190D90u;
label_190d90:
    // 0x190d90: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x190D90u;
    {
        const bool branch_taken_0x190d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190d90) {
            ctx->pc = 0x190E34u;
            goto label_190e34;
        }
    }
    ctx->pc = 0x190D98u;
label_190d98:
    // 0x190d98: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x190d98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x190d9c: 0xc0643b0  jal         func_190EC0
    ctx->pc = 0x190D9Cu;
    SET_GPR_U32(ctx, 31, 0x190DA4u);
    ctx->pc = 0x190EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190EC0u, 0x190D9Cu, 0x190DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DA4u;
label_190da4:
    // 0x190da4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x190da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x190da8: 0xc064398  jal         func_190E60
    ctx->pc = 0x190DA8u;
    SET_GPR_U32(ctx, 31, 0x190DB0u);
    ctx->pc = 0x190E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190E60u, 0x190DA8u, 0x190DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DB0u;
label_190db0:
    // 0x190db0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x190db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190db4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x190db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x190db8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x190db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190dbc: 0xc064428  jal         func_1910A0
    ctx->pc = 0x190DBCu;
    SET_GPR_U32(ctx, 31, 0x190DC4u);
    ctx->pc = 0x1910A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1910A0u, 0x190DBCu, 0x190DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DC4u;
label_190dc4:
    // 0x190dc4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x190dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190dc8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x190dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x190dcc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x190dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x190dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dd4: 0xc06440c  jal         func_191030
    ctx->pc = 0x190DD4u;
    SET_GPR_U32(ctx, 31, 0x190DDCu);
    ctx->pc = 0x191030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191030u, 0x190DD4u, 0x190DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190DDCu;
label_190ddc:
    // 0x190ddc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x190DDCu;
    {
        const bool branch_taken_0x190ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190ddc) {
            ctx->pc = 0x190E20u;
            goto label_190e20;
        }
    }
    ctx->pc = 0x190DE4u;
    // 0x190de4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x190de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x190de8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x190de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190dec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x190decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190df0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x190df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190df4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x190df4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190df8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x190df8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190dfc: 0xc064454  jal         func_191150
    ctx->pc = 0x190DFCu;
    SET_GPR_U32(ctx, 31, 0x190E04u);
    ctx->pc = 0x191150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191150u, 0x190DFCu, 0x190E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E04u;
label_190e04:
    // 0x190e04: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x190e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190e08: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x190e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x190e0c: 0x278691fc  addiu       $a2, $gp, -0x6E04
    ctx->pc = 0x190e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939132));
    // 0x190e10: 0xc0643c0  jal         func_190F00
    ctx->pc = 0x190E10u;
    SET_GPR_U32(ctx, 31, 0x190E18u);
    ctx->pc = 0x190F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F00u, 0x190E10u, 0x190E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E18u;
label_190e18:
    // 0x190e18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x190E18u;
    {
        const bool branch_taken_0x190e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190e18) {
            ctx->pc = 0x190E34u;
            goto label_190e34;
        }
    }
    ctx->pc = 0x190E20u;
label_190e20:
    // 0x190e20: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x190e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190e24: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x190e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x190e28: 0x27869200  addiu       $a2, $gp, -0x6E00
    ctx->pc = 0x190e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939136));
    // 0x190e2c: 0xc0643c0  jal         func_190F00
    ctx->pc = 0x190E2Cu;
    SET_GPR_U32(ctx, 31, 0x190E34u);
    ctx->pc = 0x190F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F00u, 0x190E2Cu, 0x190E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190E34u;
label_190e34:
    // 0x190e34: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x190e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190e38: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x190e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190e3c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190e3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190e40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190e40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x190e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190e4c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x190e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190e50: 0x3e00008  jr          $ra
    ctx->pc = 0x190E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190E58u;
    // 0x190e58: 0x0  nop
    ctx->pc = 0x190e58u;
    // NOP
    // 0x190e5c: 0x0  nop
    ctx->pc = 0x190e5cu;
    // NOP
    ctx->pc = 0x190e60u;
}
