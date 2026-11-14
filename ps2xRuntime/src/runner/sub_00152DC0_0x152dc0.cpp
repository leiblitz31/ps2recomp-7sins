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

// Function: sub_00152DC0
// Address: 0x152dc0 - 0x152fd0
void sub_00152DC0_0x152dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152DC0_0x152dc0");
#endif

    switch (ctx->pc) {
        case 0x152e30u: goto label_152e30;
        case 0x152e40u: goto label_152e40;
        case 0x152e58u: goto label_152e58;
        case 0x152e70u: goto label_152e70;
        case 0x152e80u: goto label_152e80;
        case 0x152ea0u: goto label_152ea0;
        case 0x152eb0u: goto label_152eb0;
        case 0x152ec8u: goto label_152ec8;
        case 0x152ee0u: goto label_152ee0;
        case 0x152efcu: goto label_152efc;
        case 0x152f0cu: goto label_152f0c;
        case 0x152f1cu: goto label_152f1c;
        case 0x152f34u: goto label_152f34;
        case 0x152f44u: goto label_152f44;
        case 0x152f54u: goto label_152f54;
        case 0x152f64u: goto label_152f64;
        case 0x152f80u: goto label_152f80;
        case 0x152fa0u: goto label_152fa0;
        default: break;
    }

    ctx->pc = 0x152dc0u;

    // 0x152dc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x152dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x152dc4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x152dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x152dc8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x152dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x152dcc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x152dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x152dd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152dd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x152dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152ddc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x152ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x152de0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x152de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x152de4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x152de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x152de8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x152de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x152dec: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x152decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x152df0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x152df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x152df4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x152df4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x152df8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x152df8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x152dfc: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x152dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x152e00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x152e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152e04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152e08: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152E08u;
    {
        const bool branch_taken_0x152e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x152e08) {
            ctx->pc = 0x152E60u;
            goto label_152e60;
        }
    }
    ctx->pc = 0x152E10u;
    // 0x152e10: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x152E10u;
    {
        const bool branch_taken_0x152e10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x152e10) {
            ctx->pc = 0x152EECu;
            goto label_152eec;
        }
    }
    ctx->pc = 0x152E18u;
    // 0x152e18: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x152E18u;
    {
        const bool branch_taken_0x152e18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x152e18) {
            ctx->pc = 0x152E60u;
            goto label_152e60;
        }
    }
    ctx->pc = 0x152E20u;
    // 0x152e20: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x152e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x152e24: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152e24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152e28: 0xc052bcc  jal         func_14AF30
    ctx->pc = 0x152E28u;
    SET_GPR_U32(ctx, 31, 0x152E30u);
    ctx->pc = 0x14AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AF30u, 0x152E28u, 0x152E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E30u;
label_152e30:
    // 0x152e30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x152e30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e38: 0xc052bbc  jal         func_14AEF0
    ctx->pc = 0x152E38u;
    SET_GPR_U32(ctx, 31, 0x152E40u);
    ctx->pc = 0x14AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEF0u, 0x152E38u, 0x152E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E40u;
label_152e40:
    // 0x152e40: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x152e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152e44: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x152e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x152e48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x152e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x152e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e50: 0xc052b28  jal         func_14ACA0
    ctx->pc = 0x152E50u;
    SET_GPR_U32(ctx, 31, 0x152E58u);
    ctx->pc = 0x14ACA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ACA0u, 0x152E50u, 0x152E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E58u;
label_152e58:
    // 0x152e58: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x152E58u;
    {
        const bool branch_taken_0x152e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152e58) {
            ctx->pc = 0x152EECu;
            goto label_152eec;
        }
    }
    ctx->pc = 0x152E60u;
label_152e60:
    // 0x152e60: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152e64: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152e68: 0xc054bfc  jal         func_152FF0
    ctx->pc = 0x152E68u;
    SET_GPR_U32(ctx, 31, 0x152E70u);
    ctx->pc = 0x152FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FF0u, 0x152E68u, 0x152E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E70u;
label_152e70:
    // 0x152e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e78: 0xc052bb4  jal         func_14AED0
    ctx->pc = 0x152E78u;
    SET_GPR_U32(ctx, 31, 0x152E80u);
    ctx->pc = 0x14AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AED0u, 0x152E78u, 0x152E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E80u;
label_152e80:
    // 0x152e80: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152e84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x152e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152e88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152e8c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x152E8Cu;
    {
        const bool branch_taken_0x152e8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x152e8c) {
            ctx->pc = 0x152EBCu;
            goto label_152ebc;
        }
    }
    ctx->pc = 0x152E94u;
    // 0x152e94: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152e98: 0xc0528e8  jal         func_14A3A0
    ctx->pc = 0x152E98u;
    SET_GPR_U32(ctx, 31, 0x152EA0u);
    ctx->pc = 0x14A3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A3A0u, 0x152E98u, 0x152EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EA0u;
label_152ea0:
    // 0x152ea0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152ea4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152ea8: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x152EA8u;
    SET_GPR_U32(ctx, 31, 0x152EB0u);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x152EA8u, 0x152EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EB0u;
label_152eb0:
    // 0x152eb0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152eb4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x152EB4u;
    {
        const bool branch_taken_0x152eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152eb4) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152EBCu;
label_152ebc:
    // 0x152ebc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152ec0: 0xc047058  jal         func_11C160
    ctx->pc = 0x152EC0u;
    SET_GPR_U32(ctx, 31, 0x152EC8u);
    ctx->pc = 0x11C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C160u, 0x152EC0u, 0x152EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EC8u;
label_152ec8:
    // 0x152ec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152ecc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x152ECCu;
    {
        const bool branch_taken_0x152ecc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x152ecc) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152ED4u;
    // 0x152ed4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152ed8: 0xc047058  jal         func_11C160
    ctx->pc = 0x152ED8u;
    SET_GPR_U32(ctx, 31, 0x152EE0u);
    ctx->pc = 0x11C160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C160u, 0x152ED8u, 0x152EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EE0u;
label_152ee0:
    // 0x152ee0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152ee4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x152EE4u;
    {
        const bool branch_taken_0x152ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ee4) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152EECu;
label_152eec:
    // 0x152eec: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152ef0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x152ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x152ef4: 0xc054bfc  jal         func_152FF0
    ctx->pc = 0x152EF4u;
    SET_GPR_U32(ctx, 31, 0x152EFCu);
    ctx->pc = 0x152FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FF0u, 0x152EF4u, 0x152EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152EFCu;
label_152efc:
    // 0x152efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x152efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x152f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f04: 0xc052bac  jal         func_14AEB0
    ctx->pc = 0x152F04u;
    SET_GPR_U32(ctx, 31, 0x152F0Cu);
    ctx->pc = 0x14AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEB0u, 0x152F04u, 0x152F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F0Cu;
label_152f0c:
    // 0x152f0c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x152f10: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152f14: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x152F14u;
    SET_GPR_U32(ctx, 31, 0x152F1Cu);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x152F14u, 0x152F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F1Cu;
label_152f1c:
    // 0x152f1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152f20: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x152F20u;
    {
        const bool branch_taken_0x152f20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x152f20) {
            ctx->pc = 0x152F38u;
            goto label_152f38;
        }
    }
    ctx->pc = 0x152F28u;
    // 0x152f28: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x152f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152f2c: 0xc0528e0  jal         func_14A380
    ctx->pc = 0x152F2Cu;
    SET_GPR_U32(ctx, 31, 0x152F34u);
    ctx->pc = 0x14A380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A380u, 0x152F2Cu, 0x152F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F34u;
label_152f34:
    // 0x152f34: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x152f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_152f38:
    // 0x152f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f3c: 0xc054bf4  jal         func_152FD0
    ctx->pc = 0x152F3Cu;
    SET_GPR_U32(ctx, 31, 0x152F44u);
    ctx->pc = 0x152FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FD0u, 0x152F3Cu, 0x152F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F44u;
label_152f44:
    // 0x152f44: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x152f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x152f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f4c: 0xc052bb4  jal         func_14AED0
    ctx->pc = 0x152F4Cu;
    SET_GPR_U32(ctx, 31, 0x152F54u);
    ctx->pc = 0x14AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AED0u, 0x152F4Cu, 0x152F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F54u;
label_152f54:
    // 0x152f54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x152f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x152f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f5c: 0xc052bac  jal         func_14AEB0
    ctx->pc = 0x152F5Cu;
    SET_GPR_U32(ctx, 31, 0x152F64u);
    ctx->pc = 0x14AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AEB0u, 0x152F5Cu, 0x152F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F64u;
label_152f64:
    // 0x152f64: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x152f64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x152f68: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x152f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152f6c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f74: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x152f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x152f78: 0xc042858  jal         func_10A160
    ctx->pc = 0x152F78u;
    SET_GPR_U32(ctx, 31, 0x152F80u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x152F78u, 0x152F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152F80u;
label_152f80:
    // 0x152f80: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x152f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x152f84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x152f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x152f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x152f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x152f8c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x152f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x152f90: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x152f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x152f94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x152f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152f98: 0xc046fec  jal         func_11BFB0
    ctx->pc = 0x152F98u;
    SET_GPR_U32(ctx, 31, 0x152FA0u);
    ctx->pc = 0x11BFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BFB0u, 0x152F98u, 0x152FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152FA0u;
label_152fa0:
    // 0x152fa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x152fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x152fa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x152fa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x152fa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x152fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x152fac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x152facu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152fb8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x152fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x152fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x152FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152FC4u;
    // 0x152fc4: 0x0  nop
    ctx->pc = 0x152fc4u;
    // NOP
    // 0x152fc8: 0x0  nop
    ctx->pc = 0x152fc8u;
    // NOP
    // 0x152fcc: 0x0  nop
    ctx->pc = 0x152fccu;
    // NOP
    ctx->pc = 0x152fd0u;
}
