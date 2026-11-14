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

// Function: sub_0010E3A0
// Address: 0x10e3a0 - 0x10e550
void sub_0010E3A0_0x10e3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E3A0_0x10e3a0");
#endif

    switch (ctx->pc) {
        case 0x10e3e0u: goto label_10e3e0;
        case 0x10e3f0u: goto label_10e3f0;
        case 0x10e410u: goto label_10e410;
        case 0x10e448u: goto label_10e448;
        case 0x10e47cu: goto label_10e47c;
        case 0x10e490u: goto label_10e490;
        case 0x10e4a0u: goto label_10e4a0;
        case 0x10e4a8u: goto label_10e4a8;
        case 0x10e4b4u: goto label_10e4b4;
        case 0x10e4ccu: goto label_10e4cc;
        case 0x10e4d8u: goto label_10e4d8;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e4fcu: goto label_10e4fc;
        case 0x10e50cu: goto label_10e50c;
        case 0x10e524u: goto label_10e524;
        case 0x10e530u: goto label_10e530;
        default: break;
    }

    ctx->pc = 0x10e3a0u;

    // 0x10e3a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e3a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e3ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10e3acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10e3b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e3b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10E3B4u;
    {
        const bool branch_taken_0x10e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e3b4) {
            ctx->pc = 0x10E410u;
            goto label_10e410;
        }
    }
    ctx->pc = 0x10E3BCu;
    // 0x10e3bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10e3c0: 0x24633310  addiu       $v1, $v1, 0x3310
    ctx->pc = 0x10e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13072));
    // 0x10e3c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e3c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10e3cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e3d0: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x10e3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10e3d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10e3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10e3d8: 0xc04379c  jal         func_10DE70
    ctx->pc = 0x10E3D8u;
    SET_GPR_U32(ctx, 31, 0x10E3E0u);
    ctx->pc = 0x10DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DE70u, 0x10E3D8u, 0x10E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3E0u;
label_10e3e0:
    // 0x10e3e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10e3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e3e8: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x10E3E8u;
    SET_GPR_U32(ctx, 31, 0x10E3F0u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x10E3E8u, 0x10E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E3F0u;
label_10e3f0:
    // 0x10e3f0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10e3f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e3f4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10e3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10e3f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10e3f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10e3fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E3FCu;
    {
        const bool branch_taken_0x10e3fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10e3fc) {
            ctx->pc = 0x10E410u;
            goto label_10e410;
        }
    }
    ctx->pc = 0x10E404u;
    // 0x10e404: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e408: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10E408u;
    SET_GPR_U32(ctx, 31, 0x10E410u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10E408u, 0x10E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E410u;
label_10e410:
    // 0x10e410: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e418: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10e418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10e41c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E424u;
    // 0x10e424: 0x0  nop
    ctx->pc = 0x10e424u;
    // NOP
    // 0x10e428: 0x0  nop
    ctx->pc = 0x10e428u;
    // NOP
    // 0x10e42c: 0x0  nop
    ctx->pc = 0x10e42cu;
    // NOP
    // 0x10e430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e438: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e43c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e440: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x10E440u;
    SET_GPR_U32(ctx, 31, 0x10E448u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x10E440u, 0x10E448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E448u;
label_10e448:
    // 0x10e448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e44c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e44cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e450: 0x3e00008  jr          $ra
    ctx->pc = 0x10E450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E458u;
    // 0x10e458: 0x0  nop
    ctx->pc = 0x10e458u;
    // NOP
    // 0x10e45c: 0x0  nop
    ctx->pc = 0x10e45cu;
    // NOP
    // 0x10e460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10e460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10e464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10e464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10e468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10e468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10e46c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10e46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x10e470: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10e470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10e474: 0xc043a90  jal         func_10EA40
    ctx->pc = 0x10E474u;
    SET_GPR_U32(ctx, 31, 0x10E47Cu);
    ctx->pc = 0x10EA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EA40u, 0x10E474u, 0x10E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E47Cu;
label_10e47c:
    // 0x10e47c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e480: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x10e480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x10e484: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10e484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10e488: 0xc043a70  jal         func_10E9C0
    ctx->pc = 0x10E488u;
    SET_GPR_U32(ctx, 31, 0x10E490u);
    ctx->pc = 0x10E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E9C0u, 0x10E488u, 0x10E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E490u;
label_10e490:
    // 0x10e490: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10e490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10e494: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x10e494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x10e498: 0xc043a60  jal         func_10E980
    ctx->pc = 0x10E498u;
    SET_GPR_U32(ctx, 31, 0x10E4A0u);
    ctx->pc = 0x10E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E980u, 0x10E498u, 0x10E4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4A0u;
label_10e4a0:
    // 0x10e4a0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10E4A0u;
    {
        const bool branch_taken_0x10e4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e4a0) {
            ctx->pc = 0x10E4E8u;
            goto label_10e4e8;
        }
    }
    ctx->pc = 0x10E4A8u;
label_10e4a8:
    // 0x10e4a8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10e4ac: 0xc043a4c  jal         func_10E930
    ctx->pc = 0x10E4ACu;
    SET_GPR_U32(ctx, 31, 0x10E4B4u);
    ctx->pc = 0x10E930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E930u, 0x10E4ACu, 0x10E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4B4u;
label_10e4b4:
    // 0x10e4b4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x10e4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10e4b8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10E4B8u;
    {
        const bool branch_taken_0x10e4b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e4b8) {
            ctx->pc = 0x10E4DCu;
            goto label_10e4dc;
        }
    }
    ctx->pc = 0x10E4C0u;
    // 0x10e4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e4c4: 0xc04399c  jal         func_10E670
    ctx->pc = 0x10E4C4u;
    SET_GPR_U32(ctx, 31, 0x10E4CCu);
    ctx->pc = 0x10E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E670u, 0x10E4C4u, 0x10E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4CCu;
label_10e4cc:
    // 0x10e4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e4d0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x10E4D0u;
    SET_GPR_U32(ctx, 31, 0x10E4D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10E4D0u, 0x10E4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4D8u;
label_10e4d8:
    // 0x10e4d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10e4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10e4dc:
    // 0x10e4dc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10e4e0: 0xc04398c  jal         func_10E630
    ctx->pc = 0x10E4E0u;
    SET_GPR_U32(ctx, 31, 0x10E4E8u);
    ctx->pc = 0x10E630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E630u, 0x10E4E0u, 0x10E4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4E8u;
label_10e4e8:
    // 0x10e4e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e4ec: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x10e4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x10e4f0: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10e4f4: 0xc043960  jal         func_10E580
    ctx->pc = 0x10E4F4u;
    SET_GPR_U32(ctx, 31, 0x10E4FCu);
    ctx->pc = 0x10E580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E580u, 0x10E4F4u, 0x10E4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4FCu;
label_10e4fc:
    // 0x10e4fc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10e500: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x10e500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x10e504: 0xc041998  jal         func_106660
    ctx->pc = 0x10E504u;
    SET_GPR_U32(ctx, 31, 0x10E50Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x10E504u, 0x10E50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E50Cu;
label_10e50c:
    // 0x10e50c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10E50Cu;
    {
        const bool branch_taken_0x10e50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10e50c) {
            ctx->pc = 0x10E4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e4a8;
        }
    }
    ctx->pc = 0x10E514u;
    // 0x10e514: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10e514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e518: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x10e518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10e51c: 0xc043954  jal         func_10E550
    ctx->pc = 0x10E51Cu;
    SET_GPR_U32(ctx, 31, 0x10E524u);
    ctx->pc = 0x10E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E550u, 0x10E51Cu, 0x10E524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E524u;
label_10e524:
    // 0x10e524: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10e524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e528: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x10E528u;
    SET_GPR_U32(ctx, 31, 0x10E530u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x10E528u, 0x10E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E530u;
label_10e530:
    // 0x10e530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10e534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e538: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10e538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10e53c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E544u;
    // 0x10e544: 0x0  nop
    ctx->pc = 0x10e544u;
    // NOP
    // 0x10e548: 0x0  nop
    ctx->pc = 0x10e548u;
    // NOP
    // 0x10e54c: 0x0  nop
    ctx->pc = 0x10e54cu;
    // NOP
    ctx->pc = 0x10e550u;
}
