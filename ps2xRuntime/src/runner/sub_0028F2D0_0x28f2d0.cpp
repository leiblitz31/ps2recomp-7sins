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

// Function: sub_0028F2D0
// Address: 0x28f2d0 - 0x28f4e0
void sub_0028F2D0_0x28f2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F2D0_0x28f2d0");
#endif

    switch (ctx->pc) {
        case 0x28f30cu: goto label_28f30c;
        case 0x28f320u: goto label_28f320;
        case 0x28f334u: goto label_28f334;
        case 0x28f344u: goto label_28f344;
        case 0x28f35cu: goto label_28f35c;
        case 0x28f374u: goto label_28f374;
        case 0x28f38cu: goto label_28f38c;
        case 0x28f3acu: goto label_28f3ac;
        case 0x28f3c4u: goto label_28f3c4;
        case 0x28f3d4u: goto label_28f3d4;
        case 0x28f3fcu: goto label_28f3fc;
        case 0x28f410u: goto label_28f410;
        case 0x28f424u: goto label_28f424;
        case 0x28f430u: goto label_28f430;
        case 0x28f444u: goto label_28f444;
        case 0x28f45cu: goto label_28f45c;
        case 0x28f484u: goto label_28f484;
        case 0x28f498u: goto label_28f498;
        case 0x28f4b4u: goto label_28f4b4;
        default: break;
    }

    ctx->pc = 0x28f2d0u;

    // 0x28f2d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x28f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x28f2d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28f2d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28f2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28f2dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28f2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28f2e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28f2e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f2e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f2ec: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x28f2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x28f2f0: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x28f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x28f2f4: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x28f2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x28f2f8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x28f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f2fc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x28f2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f300: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x28f300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f304: 0xc0a2aa4  jal         func_28AA90
    ctx->pc = 0x28F304u;
    SET_GPR_U32(ctx, 31, 0x28F30Cu);
    ctx->pc = 0x28AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA90u, 0x28F304u, 0x28F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F30Cu;
label_28f30c:
    // 0x28f30c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28f30cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f314: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x28f314u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f318: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x28F318u;
    {
        const bool branch_taken_0x28f318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f318) {
            ctx->pc = 0x28F394u;
            goto label_28f394;
        }
    }
    ctx->pc = 0x28F320u;
label_28f320:
    // 0x28f320: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28f320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f324: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x28f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x28f328: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28f328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f32c: 0xc0a3dcc  jal         func_28F730
    ctx->pc = 0x28F32Cu;
    SET_GPR_U32(ctx, 31, 0x28F334u);
    ctx->pc = 0x28F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F730u, 0x28F32Cu, 0x28F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F334u;
label_28f334:
    // 0x28f334: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28f334u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f33c: 0xc0a3dbc  jal         func_28F6F0
    ctx->pc = 0x28F33Cu;
    SET_GPR_U32(ctx, 31, 0x28F344u);
    ctx->pc = 0x28F6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6F0u, 0x28F33Cu, 0x28F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F344u;
label_28f344:
    // 0x28f344: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28f344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f348: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28f348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28f34c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28f34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f350: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28f350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f354: 0xc0a3dac  jal         func_28F6B0
    ctx->pc = 0x28F354u;
    SET_GPR_U32(ctx, 31, 0x28F35Cu);
    ctx->pc = 0x28F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6B0u, 0x28F354u, 0x28F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F35Cu;
label_28f35c:
    // 0x28f35c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x28f35cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f360: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F360u;
    {
        const bool branch_taken_0x28f360 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f360) {
            ctx->pc = 0x28F380u;
            goto label_28f380;
        }
    }
    ctx->pc = 0x28F368u;
    // 0x28f368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f36c: 0xc0a3da4  jal         func_28F690
    ctx->pc = 0x28F36Cu;
    SET_GPR_U32(ctx, 31, 0x28F374u);
    ctx->pc = 0x28F690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F690u, 0x28F36Cu, 0x28F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F374u;
label_28f374:
    // 0x28f374: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28f374u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f378: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F378u;
    {
        const bool branch_taken_0x28f378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f378) {
            ctx->pc = 0x28F390u;
            goto label_28f390;
        }
    }
    ctx->pc = 0x28F380u;
label_28f380:
    // 0x28f380: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f384: 0xc0a3d9c  jal         func_28F670
    ctx->pc = 0x28F384u;
    SET_GPR_U32(ctx, 31, 0x28F38Cu);
    ctx->pc = 0x28F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F670u, 0x28F384u, 0x28F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F38Cu;
label_28f38c:
    // 0x28f38c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x28f38cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28f390:
    // 0x28f390: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x28f390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28f394:
    // 0x28f394: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x28F394u;
    {
        const bool branch_taken_0x28f394 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f394) {
            ctx->pc = 0x28F320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28f320;
        }
    }
    ctx->pc = 0x28F39Cu;
    // 0x28f39c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28f3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3a4: 0xc0a3d90  jal         func_28F640
    ctx->pc = 0x28F3A4u;
    SET_GPR_U32(ctx, 31, 0x28F3ACu);
    ctx->pc = 0x28F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F640u, 0x28F3A4u, 0x28F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3ACu;
label_28f3ac:
    // 0x28f3ac: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x28F3ACu;
    {
        const bool branch_taken_0x28f3ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f3ac) {
            ctx->pc = 0x28F424u;
            goto label_28f424;
        }
    }
    ctx->pc = 0x28F3B4u;
    // 0x28f3b4: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x28f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28f3b8: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f3bc: 0xc0a3d80  jal         func_28F600
    ctx->pc = 0x28F3BCu;
    SET_GPR_U32(ctx, 31, 0x28F3C4u);
    ctx->pc = 0x28F600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F600u, 0x28F3BCu, 0x28F3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3C4u;
label_28f3c4:
    // 0x28f3c4: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28f3c8: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x28f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x28f3cc: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x28F3CCu;
    SET_GPR_U32(ctx, 31, 0x28F3D4u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x28F3CCu, 0x28F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3D4u;
label_28f3d4:
    // 0x28f3d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28F3D4u;
    {
        const bool branch_taken_0x28f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f3d4) {
            ctx->pc = 0x28F418u;
            goto label_28f418;
        }
    }
    ctx->pc = 0x28F3DCu;
    // 0x28f3dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28f3e0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28f3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f3e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28f3e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3e8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28f3e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3ec: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28f3ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f3f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28f3f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3f4: 0xc0a3fd8  jal         func_28FF60
    ctx->pc = 0x28F3F4u;
    SET_GPR_U32(ctx, 31, 0x28F3FCu);
    ctx->pc = 0x28FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF60u, 0x28F3F4u, 0x28F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F3FCu;
label_28f3fc:
    // 0x28f3fc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f400: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x28f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28f404: 0x2786a2a0  addiu       $a2, $gp, -0x5D60
    ctx->pc = 0x28f404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943392));
    // 0x28f408: 0xc0a3d60  jal         func_28F580
    ctx->pc = 0x28F408u;
    SET_GPR_U32(ctx, 31, 0x28F410u);
    ctx->pc = 0x28F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F580u, 0x28F408u, 0x28F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F410u;
label_28f410:
    // 0x28f410: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x28F410u;
    {
        const bool branch_taken_0x28f410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f410) {
            ctx->pc = 0x28F4B4u;
            goto label_28f4b4;
        }
    }
    ctx->pc = 0x28F418u;
label_28f418:
    // 0x28f418: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x28f418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28f41c: 0xc0a3d50  jal         func_28F540
    ctx->pc = 0x28F41Cu;
    SET_GPR_U32(ctx, 31, 0x28F424u);
    ctx->pc = 0x28F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F540u, 0x28F41Cu, 0x28F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F424u;
label_28f424:
    // 0x28f424: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x28f424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x28f428: 0xc0a3d38  jal         func_28F4E0
    ctx->pc = 0x28F428u;
    SET_GPR_U32(ctx, 31, 0x28F430u);
    ctx->pc = 0x28F4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F4E0u, 0x28F428u, 0x28F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F430u;
label_28f430:
    // 0x28f430: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28f430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f434: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28f434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28f438: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x28f438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f43c: 0xc0a3dcc  jal         func_28F730
    ctx->pc = 0x28F43Cu;
    SET_GPR_U32(ctx, 31, 0x28F444u);
    ctx->pc = 0x28F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F730u, 0x28F43Cu, 0x28F444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F444u;
label_28f444:
    // 0x28f444: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x28f444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f448: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28f448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28f44c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28f44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f450: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28f450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f454: 0xc0a3dac  jal         func_28F6B0
    ctx->pc = 0x28F454u;
    SET_GPR_U32(ctx, 31, 0x28F45Cu);
    ctx->pc = 0x28F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F6B0u, 0x28F454u, 0x28F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F45Cu;
label_28f45c:
    // 0x28f45c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28F45Cu;
    {
        const bool branch_taken_0x28f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f45c) {
            ctx->pc = 0x28F4A0u;
            goto label_28f4a0;
        }
    }
    ctx->pc = 0x28F464u;
    // 0x28f464: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x28f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28f468: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x28f468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f46c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28f46cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f470: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28f470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f474: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x28f474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28f478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f47c: 0xc0a3fd8  jal         func_28FF60
    ctx->pc = 0x28F47Cu;
    SET_GPR_U32(ctx, 31, 0x28F484u);
    ctx->pc = 0x28FF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF60u, 0x28F47Cu, 0x28F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F484u;
label_28f484:
    // 0x28f484: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f488: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x28f488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x28f48c: 0x2786a2a4  addiu       $a2, $gp, -0x5D5C
    ctx->pc = 0x28f48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943396));
    // 0x28f490: 0xc0a3d60  jal         func_28F580
    ctx->pc = 0x28F490u;
    SET_GPR_U32(ctx, 31, 0x28F498u);
    ctx->pc = 0x28F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F580u, 0x28F490u, 0x28F498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F498u;
label_28f498:
    // 0x28f498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F498u;
    {
        const bool branch_taken_0x28f498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f498) {
            ctx->pc = 0x28F4B4u;
            goto label_28f4b4;
        }
    }
    ctx->pc = 0x28F4A0u;
label_28f4a0:
    // 0x28f4a0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f4a4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x28f4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x28f4a8: 0x2786a2a8  addiu       $a2, $gp, -0x5D58
    ctx->pc = 0x28f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943400));
    // 0x28f4ac: 0xc0a3d60  jal         func_28F580
    ctx->pc = 0x28F4ACu;
    SET_GPR_U32(ctx, 31, 0x28F4B4u);
    ctx->pc = 0x28F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F580u, 0x28F4ACu, 0x28F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F4B4u;
label_28f4b4:
    // 0x28f4b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28f4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f4b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28f4b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f4bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28f4bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f4c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28f4c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f4c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f4c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f4cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x28f4ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x28f4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x28F4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F4D8u;
    // 0x28f4d8: 0x0  nop
    ctx->pc = 0x28f4d8u;
    // NOP
    // 0x28f4dc: 0x0  nop
    ctx->pc = 0x28f4dcu;
    // NOP
    ctx->pc = 0x28f4e0u;
}
