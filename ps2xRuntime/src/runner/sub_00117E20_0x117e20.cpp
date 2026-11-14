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

// Function: sub_00117E20
// Address: 0x117e20 - 0x118030
void sub_00117E20_0x117e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117E20_0x117e20");
#endif

    switch (ctx->pc) {
        case 0x117e5cu: goto label_117e5c;
        case 0x117e70u: goto label_117e70;
        case 0x117e84u: goto label_117e84;
        case 0x117e94u: goto label_117e94;
        case 0x117eacu: goto label_117eac;
        case 0x117ec4u: goto label_117ec4;
        case 0x117edcu: goto label_117edc;
        case 0x117efcu: goto label_117efc;
        case 0x117f14u: goto label_117f14;
        case 0x117f24u: goto label_117f24;
        case 0x117f4cu: goto label_117f4c;
        case 0x117f60u: goto label_117f60;
        case 0x117f74u: goto label_117f74;
        case 0x117f80u: goto label_117f80;
        case 0x117f94u: goto label_117f94;
        case 0x117facu: goto label_117fac;
        case 0x117fd4u: goto label_117fd4;
        case 0x117fe8u: goto label_117fe8;
        case 0x118004u: goto label_118004;
        default: break;
    }

    ctx->pc = 0x117e20u;

    // 0x117e20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x117e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x117e24: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x117e28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x117e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x117e2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x117e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x117e30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x117e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x117e34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x117e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x117e38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x117e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x117e3c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x117e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x117e40: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x117e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x117e44: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x117e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x117e48: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x117e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117e4c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x117e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117e50: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x117e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117e54: 0xc044cd4  jal         func_113350
    ctx->pc = 0x117E54u;
    SET_GPR_U32(ctx, 31, 0x117E5Cu);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x117E54u, 0x117E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E5Cu;
label_117e5c:
    // 0x117e5c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x117e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x117e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117e64: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x117e64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117e68: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x117E68u;
    {
        const bool branch_taken_0x117e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117e68) {
            ctx->pc = 0x117EE4u;
            goto label_117ee4;
        }
    }
    ctx->pc = 0x117E70u;
label_117e70:
    // 0x117e70: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x117e70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e74: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x117e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x117e78: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x117e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117e7c: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x117E7Cu;
    SET_GPR_U32(ctx, 31, 0x117E84u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x117E7Cu, 0x117E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E84u;
label_117e84:
    // 0x117e84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x117e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117e8c: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x117E8Cu;
    SET_GPR_U32(ctx, 31, 0x117E94u);
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x117E8Cu, 0x117E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117E94u;
label_117e94:
    // 0x117e94: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x117e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117e98: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x117e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x117e9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x117e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ea0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x117ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ea4: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x117EA4u;
    SET_GPR_U32(ctx, 31, 0x117EACu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x117EA4u, 0x117EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EACu;
label_117eac:
    // 0x117eac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x117eacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x117eb0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x117EB0u;
    {
        const bool branch_taken_0x117eb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117eb0) {
            ctx->pc = 0x117ED0u;
            goto label_117ed0;
        }
    }
    ctx->pc = 0x117EB8u;
    // 0x117eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ebc: 0xc044eac  jal         func_113AB0
    ctx->pc = 0x117EBCu;
    SET_GPR_U32(ctx, 31, 0x117EC4u);
    ctx->pc = 0x113AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AB0u, 0x117EBCu, 0x117EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EC4u;
label_117ec4:
    // 0x117ec4: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x117ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117ec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x117EC8u;
    {
        const bool branch_taken_0x117ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117ec8) {
            ctx->pc = 0x117EE0u;
            goto label_117ee0;
        }
    }
    ctx->pc = 0x117ED0u;
label_117ed0:
    // 0x117ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ed4: 0xc044ea4  jal         func_113A90
    ctx->pc = 0x117ED4u;
    SET_GPR_U32(ctx, 31, 0x117EDCu);
    ctx->pc = 0x113A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A90u, 0x117ED4u, 0x117EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EDCu;
label_117edc:
    // 0x117edc: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x117edcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_117ee0:
    // 0x117ee0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x117ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117ee4:
    // 0x117ee4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x117EE4u;
    {
        const bool branch_taken_0x117ee4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x117ee4) {
            ctx->pc = 0x117E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_117e70;
        }
    }
    ctx->pc = 0x117EECu;
    // 0x117eec: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x117eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x117ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ef4: 0xc044e14  jal         func_113850
    ctx->pc = 0x117EF4u;
    SET_GPR_U32(ctx, 31, 0x117EFCu);
    ctx->pc = 0x113850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113850u, 0x117EF4u, 0x117EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117EFCu;
label_117efc:
    // 0x117efc: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x117EFCu;
    {
        const bool branch_taken_0x117efc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x117efc) {
            ctx->pc = 0x117F74u;
            goto label_117f74;
        }
    }
    ctx->pc = 0x117F04u;
    // 0x117f04: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x117f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x117f08: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x117f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117f0c: 0xc044fbc  jal         func_113EF0
    ctx->pc = 0x117F0Cu;
    SET_GPR_U32(ctx, 31, 0x117F14u);
    ctx->pc = 0x113EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EF0u, 0x117F0Cu, 0x117F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F14u;
label_117f14:
    // 0x117f14: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x117f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x117f18: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x117f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x117f1c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x117F1Cu;
    SET_GPR_U32(ctx, 31, 0x117F24u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x117F1Cu, 0x117F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F24u;
label_117f24:
    // 0x117f24: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x117F24u;
    {
        const bool branch_taken_0x117f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f24) {
            ctx->pc = 0x117F68u;
            goto label_117f68;
        }
    }
    ctx->pc = 0x117F2Cu;
    // 0x117f2c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x117f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x117f30: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x117f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117f34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x117f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x117f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f3c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x117f3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117f40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117f40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f44: 0xc046020  jal         func_118080
    ctx->pc = 0x117F44u;
    SET_GPR_U32(ctx, 31, 0x117F4Cu);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x117F44u, 0x117F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F4Cu;
label_117f4c:
    // 0x117f4c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x117f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117f50: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x117f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x117f54: 0x278689b4  addiu       $a2, $gp, -0x764C
    ctx->pc = 0x117f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937012));
    // 0x117f58: 0xc04600c  jal         func_118030
    ctx->pc = 0x117F58u;
    SET_GPR_U32(ctx, 31, 0x117F60u);
    ctx->pc = 0x118030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118030u, 0x117F58u, 0x117F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F60u;
label_117f60:
    // 0x117f60: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x117F60u;
    {
        const bool branch_taken_0x117f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117f60) {
            ctx->pc = 0x118004u;
            goto label_118004;
        }
    }
    ctx->pc = 0x117F68u;
label_117f68:
    // 0x117f68: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x117f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x117f6c: 0xc045d94  jal         func_117650
    ctx->pc = 0x117F6Cu;
    SET_GPR_U32(ctx, 31, 0x117F74u);
    ctx->pc = 0x117650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117650u, 0x117F6Cu, 0x117F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F74u;
label_117f74:
    // 0x117f74: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x117f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x117f78: 0xc045dac  jal         func_1176B0
    ctx->pc = 0x117F78u;
    SET_GPR_U32(ctx, 31, 0x117F80u);
    ctx->pc = 0x1176B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1176B0u, 0x117F78u, 0x117F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F80u;
label_117f80:
    // 0x117f80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x117f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117f84: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x117f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x117f88: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x117f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117f8c: 0xc044ec4  jal         func_113B10
    ctx->pc = 0x117F8Cu;
    SET_GPR_U32(ctx, 31, 0x117F94u);
    ctx->pc = 0x113B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B10u, 0x117F8Cu, 0x117F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117F94u;
label_117f94:
    // 0x117f94: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x117f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117f98: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x117f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x117f9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x117f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x117fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fa4: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x117FA4u;
    SET_GPR_U32(ctx, 31, 0x117FACu);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x117FA4u, 0x117FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FACu;
label_117fac:
    // 0x117fac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x117FACu;
    {
        const bool branch_taken_0x117fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117fac) {
            ctx->pc = 0x117FF0u;
            goto label_117ff0;
        }
    }
    ctx->pc = 0x117FB4u;
    // 0x117fb4: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x117fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x117fb8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x117fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x117fbc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x117fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fc0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x117fc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fc4: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x117fc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x117fc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x117fc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fcc: 0xc046020  jal         func_118080
    ctx->pc = 0x117FCCu;
    SET_GPR_U32(ctx, 31, 0x117FD4u);
    ctx->pc = 0x118080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118080u, 0x117FCCu, 0x117FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FD4u;
label_117fd4:
    // 0x117fd4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x117fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117fd8: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x117fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x117fdc: 0x278689b8  addiu       $a2, $gp, -0x7648
    ctx->pc = 0x117fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937016));
    // 0x117fe0: 0xc04600c  jal         func_118030
    ctx->pc = 0x117FE0u;
    SET_GPR_U32(ctx, 31, 0x117FE8u);
    ctx->pc = 0x118030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118030u, 0x117FE0u, 0x117FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117FE8u;
label_117fe8:
    // 0x117fe8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x117FE8u;
    {
        const bool branch_taken_0x117fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117fe8) {
            ctx->pc = 0x118004u;
            goto label_118004;
        }
    }
    ctx->pc = 0x117FF0u;
label_117ff0:
    // 0x117ff0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x117ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x117ff4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x117ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x117ff8: 0x278689bc  addiu       $a2, $gp, -0x7644
    ctx->pc = 0x117ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937020));
    // 0x117ffc: 0xc04600c  jal         func_118030
    ctx->pc = 0x117FFCu;
    SET_GPR_U32(ctx, 31, 0x118004u);
    ctx->pc = 0x118030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118030u, 0x117FFCu, 0x118004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118004u;
label_118004:
    // 0x118004: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118008: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x118008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11800c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11800cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11801c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x11801cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x118020: 0x3e00008  jr          $ra
    ctx->pc = 0x118020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118028u;
    // 0x118028: 0x0  nop
    ctx->pc = 0x118028u;
    // NOP
    // 0x11802c: 0x0  nop
    ctx->pc = 0x11802cu;
    // NOP
    ctx->pc = 0x118030u;
}
