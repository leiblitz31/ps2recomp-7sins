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

// Function: sub_001E9310
// Address: 0x1e9310 - 0x1e9470
void sub_001E9310_0x1e9310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9310_0x1e9310");
#endif

    switch (ctx->pc) {
        case 0x1e9344u: goto label_1e9344;
        case 0x1e9358u: goto label_1e9358;
        case 0x1e937cu: goto label_1e937c;
        case 0x1e93a4u: goto label_1e93a4;
        case 0x1e93c8u: goto label_1e93c8;
        case 0x1e93f0u: goto label_1e93f0;
        case 0x1e9420u: goto label_1e9420;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e944cu: goto label_1e944c;
        default: break;
    }

    ctx->pc = 0x1e9310u;

    // 0x1e9310: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e9310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e9314: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e9314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e9318: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e931c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9320: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9324: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1e9324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1e9328: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1e9328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1e932c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1e932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1e9330: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1e9330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1e9334: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1e9334u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1e9338: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e9338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e933c: 0xc078618  jal         func_1E1860
    ctx->pc = 0x1E933Cu;
    SET_GPR_U32(ctx, 31, 0x1E9344u);
    ctx->pc = 0x1E1860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1860u, 0x1E933Cu, 0x1E9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9344u;
label_1e9344:
    // 0x1e9344: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1e9344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1e9348: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1e9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1e934c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1e934cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e9350: 0xc041954  jal         func_106550
    ctx->pc = 0x1E9350u;
    SET_GPR_U32(ctx, 31, 0x1E9358u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1E9350u, 0x1E9358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9358u;
label_1e9358:
    // 0x1e9358: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1e9358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1e935c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e935cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9360: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1e9360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9364: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9368: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1e9368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1e936c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1e936cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e9370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9374: 0xc07a6bc  jal         func_1E9AF0
    ctx->pc = 0x1E9374u;
    SET_GPR_U32(ctx, 31, 0x1E937Cu);
    ctx->pc = 0x1E9AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9AF0u, 0x1E9374u, 0x1E937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E937Cu;
label_1e937c:
    // 0x1e937c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e937cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9380: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1e9380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9384: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9388: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x1e9388u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e938c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e938cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9390: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1e9390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e9394: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e9394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9398: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x1e9398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1e939c: 0xc07a5cc  jal         func_1E9730
    ctx->pc = 0x1E939Cu;
    SET_GPR_U32(ctx, 31, 0x1E93A4u);
    ctx->pc = 0x1E9730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9730u, 0x1E939Cu, 0x1E93A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E93A4u;
label_1e93a4:
    // 0x1e93a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e93a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93a8: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1e93a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e93ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e93acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e93b0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E93B0u;
    {
        const bool branch_taken_0x1e93b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e93b0) {
            ctx->pc = 0x1E93D4u;
            goto label_1e93d4;
        }
    }
    ctx->pc = 0x1E93B8u;
    // 0x1e93b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e93b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93bc: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1e93bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e93c0: 0xc07a3e4  jal         func_1E8F90
    ctx->pc = 0x1E93C0u;
    SET_GPR_U32(ctx, 31, 0x1E93C8u);
    ctx->pc = 0x1E8F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8F90u, 0x1E93C0u, 0x1E93C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E93C8u;
label_1e93c8:
    // 0x1e93c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1e93c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1e93cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E93CCu;
    {
        const bool branch_taken_0x1e93cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e93cc) {
            ctx->pc = 0x1E93F4u;
            goto label_1e93f4;
        }
    }
    ctx->pc = 0x1E93D4u;
label_1e93d4:
    // 0x1e93d4: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x1e93d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e93d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e93d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e93dc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e93e0: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1e93e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e93e4: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1e93e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1e93e8: 0xc07a550  jal         func_1E9540
    ctx->pc = 0x1E93E8u;
    SET_GPR_U32(ctx, 31, 0x1E93F0u);
    ctx->pc = 0x1E9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9540u, 0x1E93E8u, 0x1E93F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E93F0u;
label_1e93f0:
    // 0x1e93f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e93f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e93f4:
    // 0x1e93f4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1e93f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e93f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E93F8u;
    {
        const bool branch_taken_0x1e93f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e93f8) {
            ctx->pc = 0x1E9424u;
            goto label_1e9424;
        }
    }
    ctx->pc = 0x1E9400u;
    // 0x1e9400: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9404: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1e9404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e9408: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1e9408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e940c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1e940cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9410: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9414: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e9414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e9418: 0xc07a5cc  jal         func_1E9730
    ctx->pc = 0x1E9418u;
    SET_GPR_U32(ctx, 31, 0x1E9420u);
    ctx->pc = 0x1E9730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9730u, 0x1E9418u, 0x1E9420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9420u;
label_1e9420:
    // 0x1e9420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9424:
    // 0x1e9424: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e9424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9428: 0xc07a530  jal         func_1E94C0
    ctx->pc = 0x1E9428u;
    SET_GPR_U32(ctx, 31, 0x1E9430u);
    ctx->pc = 0x1E94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E94C0u, 0x1E9428u, 0x1E9430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9430u;
label_1e9430:
    // 0x1e9430: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1e9430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1e9434: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1e9434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e9438: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e943c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9440: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1e9440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9444: 0xc07a51c  jal         func_1E9470
    ctx->pc = 0x1E9444u;
    SET_GPR_U32(ctx, 31, 0x1E944Cu);
    ctx->pc = 0x1E9470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9470u, 0x1E9444u, 0x1E944Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E944Cu;
label_1e944c:
    // 0x1e944c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e944cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9450: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e9450u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9454: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9454u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9458: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9458u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e945c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1e945cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e9460: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9468u;
    // 0x1e9468: 0x0  nop
    ctx->pc = 0x1e9468u;
    // NOP
    // 0x1e946c: 0x0  nop
    ctx->pc = 0x1e946cu;
    // NOP
    ctx->pc = 0x1e9470u;
}
