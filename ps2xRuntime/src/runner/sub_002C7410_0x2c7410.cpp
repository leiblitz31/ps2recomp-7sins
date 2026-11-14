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

// Function: sub_002C7410
// Address: 0x2c7410 - 0x2c7520
void sub_002C7410_0x2c7410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7410_0x2c7410");
#endif

    switch (ctx->pc) {
        case 0x2c7444u: goto label_2c7444;
        case 0x2c7458u: goto label_2c7458;
        case 0x2c747cu: goto label_2c747c;
        case 0x2c7498u: goto label_2c7498;
        case 0x2c74b0u: goto label_2c74b0;
        case 0x2c74d8u: goto label_2c74d8;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c7504u: goto label_2c7504;
        default: break;
    }

    ctx->pc = 0x2c7410u;

    // 0x2c7410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c7410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c7414: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c7414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c7418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c741c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c741cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7424: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2c7424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2c7428: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2c7428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2c742c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2c742cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2c7430: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2c7430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2c7434: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2c7434u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2c7438: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c7438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c743c: 0xc0afca0  jal         func_2BF280
    ctx->pc = 0x2C743Cu;
    SET_GPR_U32(ctx, 31, 0x2C7444u);
    ctx->pc = 0x2BF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF280u, 0x2C743Cu, 0x2C7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7444u;
label_2c7444:
    // 0x2c7444: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2c7444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2c7448: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2c7448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2c744c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2c744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c7450: 0xc041954  jal         func_106550
    ctx->pc = 0x2C7450u;
    SET_GPR_U32(ctx, 31, 0x2C7458u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2C7450u, 0x2C7458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7458u;
label_2c7458:
    // 0x2c7458: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2c7458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2c745c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7460: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2c7460u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c7464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c7464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c7468: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2c7468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c746c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c746cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c7470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7474: 0xc0b2a00  jal         func_2CA800
    ctx->pc = 0x2C7474u;
    SET_GPR_U32(ctx, 31, 0x2C747Cu);
    ctx->pc = 0x2CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA800u, 0x2C7474u, 0x2C747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C747Cu;
label_2c747c:
    // 0x2c747c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c747cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7480: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c7480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c7484: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c7484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c7488: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2c7488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c748c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c748cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7490: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2C7490u;
    SET_GPR_U32(ctx, 31, 0x2C7498u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2C7490u, 0x2C7498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7498u;
label_2c7498:
    // 0x2c7498: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c7498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c749c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c749cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c74a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2c74a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c74a4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2c74a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c74a8: 0xc0b1d7c  jal         func_2C75F0
    ctx->pc = 0x2C74A8u;
    SET_GPR_U32(ctx, 31, 0x2C74B0u);
    ctx->pc = 0x2C75F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C75F0u, 0x2C74A8u, 0x2C74B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74B0u;
label_2c74b0:
    // 0x2c74b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c74b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c74b4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2c74b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c74b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C74B8u;
    {
        const bool branch_taken_0x2c74b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c74b8) {
            ctx->pc = 0x2C74DCu;
            goto label_2c74dc;
        }
    }
    ctx->pc = 0x2C74C0u;
    // 0x2c74c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2c74c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c74c4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2c74c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c74c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c74c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c74cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c74ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c74d0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2C74D0u;
    SET_GPR_U32(ctx, 31, 0x2C74D8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2C74D0u, 0x2C74D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74D8u;
label_2c74d8:
    // 0x2c74d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c74d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c74dc:
    // 0x2c74dc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c74dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c74e0: 0xc0b1d5c  jal         func_2C7570
    ctx->pc = 0x2C74E0u;
    SET_GPR_U32(ctx, 31, 0x2C74E8u);
    ctx->pc = 0x2C7570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7570u, 0x2C74E0u, 0x2C74E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74E8u;
label_2c74e8:
    // 0x2c74e8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2c74e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2c74ec: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2c74ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2c74f0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2c74f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c74f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c74f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c74f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c74f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c74fc: 0xc0b1d48  jal         func_2C7520
    ctx->pc = 0x2C74FCu;
    SET_GPR_U32(ctx, 31, 0x2C7504u);
    ctx->pc = 0x2C7520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7520u, 0x2C74FCu, 0x2C7504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7504u;
label_2c7504:
    // 0x2c7504: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c7504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7508: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c750c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c750cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7510: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7514: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2c7514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2c7518: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7520u;
}
