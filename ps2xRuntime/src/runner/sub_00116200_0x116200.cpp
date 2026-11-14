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

// Function: sub_00116200
// Address: 0x116200 - 0x116510
void sub_00116200_0x116200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116200_0x116200");
#endif

    switch (ctx->pc) {
        case 0x116234u: goto label_116234;
        case 0x116240u: goto label_116240;
        case 0x11624cu: goto label_11624c;
        case 0x116260u: goto label_116260;
        case 0x116280u: goto label_116280;
        case 0x11628cu: goto label_11628c;
        case 0x11629cu: goto label_11629c;
        case 0x1162bcu: goto label_1162bc;
        case 0x1162c8u: goto label_1162c8;
        case 0x1162d8u: goto label_1162d8;
        case 0x1162e8u: goto label_1162e8;
        case 0x1162fcu: goto label_1162fc;
        case 0x11630cu: goto label_11630c;
        case 0x11631cu: goto label_11631c;
        case 0x116328u: goto label_116328;
        case 0x116344u: goto label_116344;
        case 0x116354u: goto label_116354;
        case 0x11636cu: goto label_11636c;
        case 0x116380u: goto label_116380;
        case 0x116390u: goto label_116390;
        case 0x1163a8u: goto label_1163a8;
        case 0x1163c4u: goto label_1163c4;
        case 0x1163e0u: goto label_1163e0;
        case 0x1163fcu: goto label_1163fc;
        case 0x116420u: goto label_116420;
        case 0x11642cu: goto label_11642c;
        case 0x116444u: goto label_116444;
        case 0x116450u: goto label_116450;
        case 0x116464u: goto label_116464;
        case 0x116480u: goto label_116480;
        case 0x1164a4u: goto label_1164a4;
        case 0x1164b4u: goto label_1164b4;
        case 0x1164d4u: goto label_1164d4;
        case 0x1164e4u: goto label_1164e4;
        default: break;
    }

    ctx->pc = 0x116200u;

    // 0x116200: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x116200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x116204: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x116204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x116208: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x116208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11620c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11620cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x116210: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x116210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x116214: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x116214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x116218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x116218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11621c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11621cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x116220: 0xafa40170  sw          $a0, 0x170($sp)
    ctx->pc = 0x116220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 4));
    // 0x116224: 0xafa50180  sw          $a1, 0x180($sp)
    ctx->pc = 0x116224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 5));
    // 0x116228: 0x8fa40180  lw          $a0, 0x180($sp)
    ctx->pc = 0x116228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x11622c: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x11622Cu;
    SET_GPR_U32(ctx, 31, 0x116234u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x11622Cu, 0x116234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116234u;
label_116234:
    // 0x116234: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x116234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x116238: 0xc08dea4  jal         func_237A90
    ctx->pc = 0x116238u;
    SET_GPR_U32(ctx, 31, 0x116240u);
    ctx->pc = 0x237A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237A90u, 0x116238u, 0x116240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116240u;
label_116240:
    // 0x116240: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x116240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x116244: 0xc041b48  jal         func_106D20
    ctx->pc = 0x116244u;
    SET_GPR_U32(ctx, 31, 0x11624Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x116244u, 0x11624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11624Cu;
label_11624c:
    // 0x11624c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x11624cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x116250: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x116250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x116254: 0x24a51b80  addiu       $a1, $a1, 0x1B80
    ctx->pc = 0x116254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7040));
    // 0x116258: 0xc08ded4  jal         func_237B50
    ctx->pc = 0x116258u;
    SET_GPR_U32(ctx, 31, 0x116260u);
    ctx->pc = 0x237B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B50u, 0x116258u, 0x116260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116260u;
label_116260:
    // 0x116260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116268: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x116268u;
    {
        const bool branch_taken_0x116268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x116268) {
            ctx->pc = 0x1164C0u;
            goto label_1164c0;
        }
    }
    ctx->pc = 0x116270u;
    // 0x116270: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x116270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116274: 0xafa0016c  sw          $zero, 0x16C($sp)
    ctx->pc = 0x116274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 0));
    // 0x116278: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x116278u;
    {
        const bool branch_taken_0x116278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116278) {
            ctx->pc = 0x11646Cu;
            goto label_11646c;
        }
    }
    ctx->pc = 0x116280u;
label_116280:
    // 0x116280: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x116280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x116284: 0xc0bc65a  jal         func_2F1968
    ctx->pc = 0x116284u;
    SET_GPR_U32(ctx, 31, 0x11628Cu);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x116284u, 0x11628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11628Cu;
label_11628c:
    // 0x11628c: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x11628cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x116290: 0x8fa50180  lw          $a1, 0x180($sp)
    ctx->pc = 0x116290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x116294: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x116294u;
    SET_GPR_U32(ctx, 31, 0x11629Cu);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x116294u, 0x11629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11629Cu;
label_11629c:
    // 0x11629c: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x11629Cu;
    {
        const bool branch_taken_0x11629c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11629c) {
            ctx->pc = 0x11646Cu;
            goto label_11646c;
        }
    }
    ctx->pc = 0x1162A4u;
    // 0x1162a4: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x1162a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1162a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1162a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1162ac: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0
    ctx->pc = 0x1162acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
    // 0x1162b0: 0x8fa6016c  lw          $a2, 0x16C($sp)
    ctx->pc = 0x1162b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1162b4: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x1162B4u;
    SET_GPR_U32(ctx, 31, 0x1162BCu);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x1162B4u, 0x1162BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162BCu;
label_1162bc:
    // 0x1162bc: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x1162bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1162c0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1162C0u;
    SET_GPR_U32(ctx, 31, 0x1162C8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1162C0u, 0x1162C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162C8u;
label_1162c8:
    // 0x1162c8: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x1162c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1162cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1162ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1162d0: 0xc040304  jal         func_100C10
    ctx->pc = 0x1162D0u;
    SET_GPR_U32(ctx, 31, 0x1162D8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1162D0u, 0x1162D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162D8u;
label_1162d8:
    // 0x1162d8: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x1162d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1162dc: 0x27858994  addiu       $a1, $gp, -0x766C
    ctx->pc = 0x1162dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936980));
    // 0x1162e0: 0xc040304  jal         func_100C10
    ctx->pc = 0x1162E0u;
    SET_GPR_U32(ctx, 31, 0x1162E8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1162E0u, 0x1162E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162E8u;
label_1162e8:
    // 0x1162e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1162e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1162ec: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x1162ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x1162f0: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x1162f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x1162f4: 0xc119d74  jal         func_4675D0
    ctx->pc = 0x1162F4u;
    SET_GPR_U32(ctx, 31, 0x1162FCu);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x1162F4u, 0x1162FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1162FCu;
label_1162fc:
    // 0x1162fc: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x1162fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x116300: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x116300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116304: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x116304u;
    SET_GPR_U32(ctx, 31, 0x11630Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x116304u, 0x11630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11630Cu;
label_11630c:
    // 0x11630c: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x11630cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x116310: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x116310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116314: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x116314u;
    SET_GPR_U32(ctx, 31, 0x11631Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x116314u, 0x11631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11631Cu;
label_11631c:
    // 0x11631c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x11631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x116320: 0xc119db4  jal         func_4676D0
    ctx->pc = 0x116320u;
    SET_GPR_U32(ctx, 31, 0x116328u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x116320u, 0x116328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116328u;
label_116328:
    // 0x116328: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x116328u;
    {
        const bool branch_taken_0x116328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116328) {
            ctx->pc = 0x116454u;
            goto label_116454;
        }
    }
    ctx->pc = 0x116330u;
    // 0x116330: 0x1410001f  bne         $zero, $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x116330u;
    {
        const bool branch_taken_0x116330 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 16));
        if (branch_taken_0x116330) {
            ctx->pc = 0x1163B0u;
            goto label_1163b0;
        }
    }
    ctx->pc = 0x116338u;
    // 0x116338: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x116338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x11633c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x11633Cu;
    SET_GPR_U32(ctx, 31, 0x116344u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x11633Cu, 0x116344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116344u;
label_116344:
    // 0x116344: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x116344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x116348: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11634c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x11634Cu;
    SET_GPR_U32(ctx, 31, 0x116354u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x11634Cu, 0x116354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116354u;
label_116354:
    // 0x116354: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116358: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x116358u;
    {
        const bool branch_taken_0x116358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x116358) {
            ctx->pc = 0x116370u;
            goto label_116370;
        }
    }
    ctx->pc = 0x116360u;
    // 0x116360: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x116360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116364: 0xc0457c4  jal         func_115F10
    ctx->pc = 0x116364u;
    SET_GPR_U32(ctx, 31, 0x11636Cu);
    ctx->pc = 0x115F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F10u, 0x116364u, 0x11636Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11636Cu;
label_11636c:
    // 0x11636c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11636cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_116370:
    // 0x116370: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x116370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116374: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x116378: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x116378u;
    SET_GPR_U32(ctx, 31, 0x116380u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x116378u, 0x116380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116380u;
label_116380:
    // 0x116380: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x116380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x116384: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116388: 0xc0400e0  jal         func_100380
    ctx->pc = 0x116388u;
    SET_GPR_U32(ctx, 31, 0x116390u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x116388u, 0x116390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116390u;
label_116390:
    // 0x116390: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116394: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x116394u;
    {
        const bool branch_taken_0x116394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x116394) {
            ctx->pc = 0x1163ACu;
            goto label_1163ac;
        }
    }
    ctx->pc = 0x11639Cu;
    // 0x11639c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163a0: 0xc088560  jal         func_221580
    ctx->pc = 0x1163A0u;
    SET_GPR_U32(ctx, 31, 0x1163A8u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x1163A0u, 0x1163A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163A8u;
label_1163a8:
    // 0x1163a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1163a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1163ac:
    // 0x1163ac: 0xae110034  sw          $s1, 0x34($s0)
    ctx->pc = 0x1163acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 17));
label_1163b0:
    // 0x1163b0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1163b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1163b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1163b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1163b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1163bc: 0xc0457fc  jal         func_115FF0
    ctx->pc = 0x1163BCu;
    SET_GPR_U32(ctx, 31, 0x1163C4u);
    ctx->pc = 0x115FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115FF0u, 0x1163BCu, 0x1163C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163C4u;
label_1163c4:
    // 0x1163c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1163c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1163c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1163c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1163cc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1163CCu;
    {
        const bool branch_taken_0x1163cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1163cc) {
            ctx->pc = 0x116408u;
            goto label_116408;
        }
    }
    ctx->pc = 0x1163D4u;
    // 0x1163d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1163d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163d8: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x1163D8u;
    SET_GPR_U32(ctx, 31, 0x1163E0u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x1163D8u, 0x1163E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163E0u;
label_1163e0:
    // 0x1163e0: 0xafa20168  sw          $v0, 0x168($sp)
    ctx->pc = 0x1163e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 2));
    // 0x1163e4: 0x27b30168  addiu       $s3, $sp, 0x168
    ctx->pc = 0x1163e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
    // 0x1163e8: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1163e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1163ec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1163ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1163f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1163f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163f4: 0xc045054  jal         func_114150
    ctx->pc = 0x1163F4u;
    SET_GPR_U32(ctx, 31, 0x1163FCu);
    ctx->pc = 0x114150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114150u, 0x1163F4u, 0x1163FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163FCu;
label_1163fc:
    // 0x1163fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1163fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x116400: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x116400u;
    {
        const bool branch_taken_0x116400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116400) {
            ctx->pc = 0x116454u;
            goto label_116454;
        }
    }
    ctx->pc = 0x116408u;
label_116408:
    // 0x116408: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x116408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11640c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11640Cu;
    {
        const bool branch_taken_0x11640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11640c) {
            ctx->pc = 0x116430u;
            goto label_116430;
        }
    }
    ctx->pc = 0x116414u;
    // 0x116414: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x116414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x116418: 0xc044f78  jal         func_113DE0
    ctx->pc = 0x116418u;
    SET_GPR_U32(ctx, 31, 0x116420u);
    ctx->pc = 0x113DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DE0u, 0x116418u, 0x116420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116420u;
label_116420:
    // 0x116420: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x116420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x116424: 0xc119c5c  jal         func_467170
    ctx->pc = 0x116424u;
    SET_GPR_U32(ctx, 31, 0x11642Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x116424u, 0x11642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11642Cu;
label_11642c:
    // 0x11642c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x11642cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_116430:
    // 0x116430: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116430u;
    {
        const bool branch_taken_0x116430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x116430) {
            ctx->pc = 0x116454u;
            goto label_116454;
        }
    }
    ctx->pc = 0x116438u;
    // 0x116438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11643c: 0xc044f70  jal         func_113DC0
    ctx->pc = 0x11643Cu;
    SET_GPR_U32(ctx, 31, 0x116444u);
    ctx->pc = 0x113DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113DC0u, 0x11643Cu, 0x116444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116444u;
label_116444:
    // 0x116444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116448: 0xc119c5c  jal         func_467170
    ctx->pc = 0x116448u;
    SET_GPR_U32(ctx, 31, 0x116450u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x116448u, 0x116450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116450u;
label_116450:
    // 0x116450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x116450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116454:
    // 0x116454: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x116454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x116458: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x116458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11645c: 0xc119d90  jal         func_467640
    ctx->pc = 0x11645Cu;
    SET_GPR_U32(ctx, 31, 0x116464u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x11645Cu, 0x116464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116464u;
label_116464:
    // 0x116464: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116464u;
    {
        const bool branch_taken_0x116464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x116464) {
            ctx->pc = 0x116490u;
            goto label_116490;
        }
    }
    ctx->pc = 0x11646Cu;
label_11646c:
    // 0x11646c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x11646cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x116470: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x116470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x116474: 0x27868998  addiu       $a2, $gp, -0x7668
    ctx->pc = 0x116474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936984));
    // 0x116478: 0xc08dee4  jal         func_237B90
    ctx->pc = 0x116478u;
    SET_GPR_U32(ctx, 31, 0x116480u);
    ctx->pc = 0x237B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237B90u, 0x116478u, 0x116480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116480u;
label_116480:
    // 0x116480: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x116480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x116484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116488: 0x1062ff7d  beq         $v1, $v0, . + 4 + (-0x83 << 2)
    ctx->pc = 0x116488u;
    {
        const bool branch_taken_0x116488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x116488) {
            ctx->pc = 0x116280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_116280;
        }
    }
    ctx->pc = 0x116490u;
label_116490:
    // 0x116490: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x116490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116494: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x116494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x116498: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x116498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11649c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x11649Cu;
    SET_GPR_U32(ctx, 31, 0x1164A4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x11649Cu, 0x1164A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164A4u;
label_1164a4:
    // 0x1164a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1164a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1164a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1164a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1164ac: 0xc08deb0  jal         func_237AC0
    ctx->pc = 0x1164ACu;
    SET_GPR_U32(ctx, 31, 0x1164B4u);
    ctx->pc = 0x237AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237AC0u, 0x1164ACu, 0x1164B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164B4u;
label_1164b4:
    // 0x1164b4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1164b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164b8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1164B8u;
    {
        const bool branch_taken_0x1164b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1164b8) {
            ctx->pc = 0x1164E8u;
            goto label_1164e8;
        }
    }
    ctx->pc = 0x1164C0u;
label_1164c0:
    // 0x1164c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1164c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1164c4: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x1164c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x1164c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1164c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1164cc: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1164CCu;
    SET_GPR_U32(ctx, 31, 0x1164D4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1164CCu, 0x1164D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164D4u;
label_1164d4:
    // 0x1164d4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1164d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1164d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1164d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1164dc: 0xc08deb0  jal         func_237AC0
    ctx->pc = 0x1164DCu;
    SET_GPR_U32(ctx, 31, 0x1164E4u);
    ctx->pc = 0x237AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237AC0u, 0x1164DCu, 0x1164E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1164E4u;
label_1164e4:
    // 0x1164e4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1164e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1164e8:
    // 0x1164e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1164e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1164ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1164ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1164f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1164f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1164f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1164f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1164f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1164f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1164fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1164fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x116500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x116504: 0x27bd0190  addiu       $sp, $sp, 0x190
    ctx->pc = 0x116504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x116508: 0x3e00008  jr          $ra
    ctx->pc = 0x116508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116510u;
}
