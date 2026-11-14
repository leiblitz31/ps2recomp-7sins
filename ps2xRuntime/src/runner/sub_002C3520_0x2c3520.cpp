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

// Function: sub_002C3520
// Address: 0x2c3520 - 0x2c37f0
void sub_002C3520_0x2c3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3520_0x2c3520");
#endif

    switch (ctx->pc) {
        case 0x2c357cu: goto label_2c357c;
        case 0x2c3590u: goto label_2c3590;
        case 0x2c35a4u: goto label_2c35a4;
        case 0x2c35b8u: goto label_2c35b8;
        case 0x2c35dcu: goto label_2c35dc;
        case 0x2c35ecu: goto label_2c35ec;
        case 0x2c3640u: goto label_2c3640;
        case 0x2c365cu: goto label_2c365c;
        case 0x2c3670u: goto label_2c3670;
        case 0x2c368cu: goto label_2c368c;
        case 0x2c36b4u: goto label_2c36b4;
        case 0x2c36c8u: goto label_2c36c8;
        case 0x2c36d8u: goto label_2c36d8;
        case 0x2c36ecu: goto label_2c36ec;
        case 0x2c36fcu: goto label_2c36fc;
        case 0x2c370cu: goto label_2c370c;
        case 0x2c3718u: goto label_2c3718;
        case 0x2c3774u: goto label_2c3774;
        case 0x2c3780u: goto label_2c3780;
        case 0x2c3794u: goto label_2c3794;
        case 0x2c37b0u: goto label_2c37b0;
        default: break;
    }

    ctx->pc = 0x2c3520u;

    // 0x2c3520: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2c3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2c3524: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c3528: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c3528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c352c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c352cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c3530: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c3530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c3534: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c3534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c3538: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c3538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c353c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c3540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c3540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c3544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c3544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c3548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c3548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c354c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2c354cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2c3550: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2c3550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x2c3554: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c3554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c3558: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2c3558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c355c: 0x8f82bca8  lw          $v0, -0x4358($gp)
    ctx->pc = 0x2c355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950056)));
    // 0x2c3560: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3560u;
    {
        const bool branch_taken_0x2c3560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3560) {
            ctx->pc = 0x2C356Cu;
            goto label_2c356c;
        }
    }
    ctx->pc = 0x2C3568u;
    // 0x2c3568: 0xaf80bca8  sw          $zero, -0x4358($gp)
    ctx->pc = 0x2c3568u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950056), GPR_U32(ctx, 0));
label_2c356c:
    // 0x2c356c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3570: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c3570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c3574: 0xc068ea0  jal         func_1A3A80
    ctx->pc = 0x2C3574u;
    SET_GPR_U32(ctx, 31, 0x2C357Cu);
    ctx->pc = 0x1A3A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A80u, 0x2C3574u, 0x2C357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C357Cu;
label_2c357c:
    // 0x2c357c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c357cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3580: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c3580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3584: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c3584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c3588: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2C3588u;
    SET_GPR_U32(ctx, 31, 0x2C3590u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2C3588u, 0x2C3590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3590u;
label_2c3590:
    // 0x2c3590: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c3594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3598: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x2c3598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c359c: 0xc0b2a50  jal         func_2CA940
    ctx->pc = 0x2C359Cu;
    SET_GPR_U32(ctx, 31, 0x2C35A4u);
    ctx->pc = 0x2CA940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA940u, 0x2C359Cu, 0x2C35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35A4u;
label_2c35a4:
    // 0x2c35a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c35a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35a8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c35a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c35ac: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c35acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c35b0: 0xc068e98  jal         func_1A3A60
    ctx->pc = 0x2C35B0u;
    SET_GPR_U32(ctx, 31, 0x2C35B8u);
    ctx->pc = 0x1A3A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3A60u, 0x2C35B0u, 0x2C35B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35B8u;
label_2c35b8:
    // 0x2c35b8: 0x12a2007f  beq         $s5, $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x2C35B8u;
    {
        const bool branch_taken_0x2c35b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c35b8) {
            ctx->pc = 0x2C37B8u;
            goto label_2c37b8;
        }
    }
    ctx->pc = 0x2C35C0u;
    // 0x2c35c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c35c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c35c4: 0x8c50002c  lw          $s0, 0x2C($v0)
    ctx->pc = 0x2c35c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c35c8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c35c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c35cc: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x2c35ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x2c35d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c35d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c35d4: 0xc0b0e3c  jal         func_2C38F0
    ctx->pc = 0x2C35D4u;
    SET_GPR_U32(ctx, 31, 0x2C35DCu);
    ctx->pc = 0x2C38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C38F0u, 0x2C35D4u, 0x2C35DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35DCu;
label_2c35dc:
    // 0x2c35dc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c35dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c35e0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2c35e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2c35e4: 0xc0b0e2c  jal         func_2C38B0
    ctx->pc = 0x2C35E4u;
    SET_GPR_U32(ctx, 31, 0x2C35ECu);
    ctx->pc = 0x2C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C38B0u, 0x2C35E4u, 0x2C35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C35ECu;
label_2c35ec:
    // 0x2c35ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c35ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c35f0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2c35f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c35f4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2c35f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2c35f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C35F8u;
    {
        const bool branch_taken_0x2c35f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c35f8) {
            ctx->pc = 0x2C362Cu;
            goto label_2c362c;
        }
    }
    ctx->pc = 0x2C3600u;
    // 0x2c3600: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c3600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3604: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2c3604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c3608: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2c3608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2c360c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2c360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c3610: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2c3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c3614: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2c3614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c3618: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C3618u;
    {
        const bool branch_taken_0x2c3618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3618) {
            ctx->pc = 0x2C362Cu;
            goto label_2c362c;
        }
    }
    ctx->pc = 0x2C3620u;
    // 0x2c3620: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c3620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3624: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2c3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2c3628: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2c3628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_2c362c:
    // 0x2c362c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c362cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3630: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c3630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c3634: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3638: 0xc0b4db0  jal         func_2D36C0
    ctx->pc = 0x2C3638u;
    SET_GPR_U32(ctx, 31, 0x2C3640u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C3638u, 0x2C3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3640u;
label_2c3640:
    // 0x2c3640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3640u;
    {
        const bool branch_taken_0x2c3640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3640) {
            ctx->pc = 0x2C365Cu;
            goto label_2c365c;
        }
    }
    ctx->pc = 0x2C3648u;
    // 0x2c3648: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c3648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c364c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c364cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c3650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3654: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2C3654u;
    SET_GPR_U32(ctx, 31, 0x2C365Cu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2C3654u, 0x2C365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C365Cu;
label_2c365c:
    // 0x2c365c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c365cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c3660: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c3660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c3664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3668: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2C3668u;
    SET_GPR_U32(ctx, 31, 0x2C3670u);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2C3668u, 0x2C3670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3670u;
label_2c3670:
    // 0x2c3670: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2C3670u;
    {
        const bool branch_taken_0x2c3670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3670) {
            ctx->pc = 0x2C36ECu;
            goto label_2c36ec;
        }
    }
    ctx->pc = 0x2C3678u;
    // 0x2c3678: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c3678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c367c: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c367cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c3680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c3680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3684: 0xc0b5b14  jal         func_2D6C50
    ctx->pc = 0x2C3684u;
    SET_GPR_U32(ctx, 31, 0x2C368Cu);
    ctx->pc = 0x2D6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6C50u, 0x2C3684u, 0x2C368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C368Cu;
label_2c368c:
    // 0x2c368c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c368cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c3690: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2c3690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c3694: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2c3694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2c3698: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2c3698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2c369c: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2c369cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c36a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c36a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c36a4: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c36a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x2c36a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c36a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36ac: 0xc0b4a64  jal         func_2D2990
    ctx->pc = 0x2C36ACu;
    SET_GPR_U32(ctx, 31, 0x2C36B4u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C36ACu, 0x2C36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36B4u;
label_2c36b4:
    // 0x2c36b4: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x2C36B4u;
    {
        const bool branch_taken_0x2c36b4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c36b4) {
            ctx->pc = 0x2C36ECu;
            goto label_2c36ec;
        }
    }
    ctx->pc = 0x2C36BCu;
    // 0x2c36bc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x2c36bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2c36c0: 0xc050ed8  jal         func_143B60
    ctx->pc = 0x2C36C0u;
    SET_GPR_U32(ctx, 31, 0x2C36C8u);
    ctx->pc = 0x143B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143B60u, 0x2C36C0u, 0x2C36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36C8u;
label_2c36c8:
    // 0x2c36c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c36c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c36ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36d0: 0xc09138c  jal         func_244E30
    ctx->pc = 0x2C36D0u;
    SET_GPR_U32(ctx, 31, 0x2C36D8u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2C36D0u, 0x2C36D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36D8u;
label_2c36d8:
    // 0x2c36d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c36d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36dc: 0x2405054d  addiu       $a1, $zero, 0x54D
    ctx->pc = 0x2c36dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
    // 0x2c36e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c36e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c36e4: 0xc040924  jal         func_102490
    ctx->pc = 0x2C36E4u;
    SET_GPR_U32(ctx, 31, 0x2C36ECu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x2C36E4u, 0x2C36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36ECu;
label_2c36ec:
    // 0x2c36ec: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2c36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c36f0: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x2c36f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x2c36f4: 0xc090018  jal         func_240060
    ctx->pc = 0x2C36F4u;
    SET_GPR_U32(ctx, 31, 0x2C36FCu);
    ctx->pc = 0x240060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240060u, 0x2C36F4u, 0x2C36FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C36FCu;
label_2c36fc:
    // 0x2c36fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c36fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3700: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3704: 0xc08feb4  jal         func_23FAD0
    ctx->pc = 0x2C3704u;
    SET_GPR_U32(ctx, 31, 0x2C370Cu);
    ctx->pc = 0x23FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAD0u, 0x2C3704u, 0x2C370Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C370Cu;
label_2c370c:
    // 0x2c370c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c370cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3710: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2C3710u;
    {
        const bool branch_taken_0x2c3710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3710) {
            ctx->pc = 0x2C37A4u;
            goto label_2c37a4;
        }
    }
    ctx->pc = 0x2C3718u;
label_2c3718:
    // 0x2c3718: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2c3718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c371c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c3720: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C3720u;
    {
        const bool branch_taken_0x2c3720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2c3720) {
            ctx->pc = 0x2C374Cu;
            goto label_2c374c;
        }
    }
    ctx->pc = 0x2C3728u;
    // 0x2c3728: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c3728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c372c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c372cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c3730: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C3730u;
    {
        const bool branch_taken_0x2c3730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3730) {
            ctx->pc = 0x2C37A0u;
            goto label_2c37a0;
        }
    }
    ctx->pc = 0x2C3738u;
    // 0x2c3738: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2c3738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c373c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2c373cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2c3740: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2c3740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c3744: 0x14500016  bne         $v0, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C3744u;
    {
        const bool branch_taken_0x2c3744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2c3744) {
            ctx->pc = 0x2C37A0u;
            goto label_2c37a0;
        }
    }
    ctx->pc = 0x2C374Cu;
label_2c374c:
    // 0x2c374c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c3750: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c3750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2c3754: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C3754u;
    {
        const bool branch_taken_0x2c3754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c3754) {
            ctx->pc = 0x2C3784u;
            goto label_2c3784;
        }
    }
    ctx->pc = 0x2C375Cu;
    // 0x2c375c: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x2c375cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c3760: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C3760u;
    {
        const bool branch_taken_0x2c3760 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3760) {
            ctx->pc = 0x2C3784u;
            goto label_2c3784;
        }
    }
    ctx->pc = 0x2C3768u;
    // 0x2c3768: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c376c: 0xc0b0dfc  jal         func_2C37F0
    ctx->pc = 0x2C376Cu;
    SET_GPR_U32(ctx, 31, 0x2C3774u);
    ctx->pc = 0x2C37F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C37F0u, 0x2C376Cu, 0x2C3774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3774u;
label_2c3774:
    // 0x2c3774: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c3774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3778: 0xc119c5c  jal         func_467170
    ctx->pc = 0x2C3778u;
    SET_GPR_U32(ctx, 31, 0x2C3780u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2C3778u, 0x2C3780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3780u;
label_2c3780:
    // 0x2c3780: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c3780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3784:
    // 0x2c3784: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c3784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3788: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c3788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c378c: 0xc0add88  jal         func_2B7620
    ctx->pc = 0x2C378Cu;
    SET_GPR_U32(ctx, 31, 0x2C3794u);
    ctx->pc = 0x2B7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7620u, 0x2C378Cu, 0x2C3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3794u;
label_2c3794:
    // 0x2c3794: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c3794u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3798: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C3798u;
    {
        const bool branch_taken_0x2c3798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3798) {
            ctx->pc = 0x2C37A4u;
            goto label_2c37a4;
        }
    }
    ctx->pc = 0x2C37A0u;
label_2c37a0:
    // 0x2c37a0: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2c37a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2c37a4:
    // 0x2c37a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c37a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c37a8: 0xc08feac  jal         func_23FAB0
    ctx->pc = 0x2C37A8u;
    SET_GPR_U32(ctx, 31, 0x2C37B0u);
    ctx->pc = 0x23FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FAB0u, 0x2C37A8u, 0x2C37B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C37B0u;
label_2c37b0:
    // 0x2c37b0: 0x1642ffd9  bne         $s2, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2C37B0u;
    {
        const bool branch_taken_0x2c37b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c37b0) {
            ctx->pc = 0x2C3718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3718;
        }
    }
    ctx->pc = 0x2C37B8u;
label_2c37b8:
    // 0x2c37b8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c37b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c37bc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c37bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c37c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c37c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c37c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c37c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c37c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c37c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c37cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c37ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c37d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c37d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c37d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c37d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c37d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c37d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c37dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c37dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c37e0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2c37e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2c37e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C37E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C37E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C37ECu;
    // 0x2c37ec: 0x0  nop
    ctx->pc = 0x2c37ecu;
    // NOP
    ctx->pc = 0x2c37f0u;
}
