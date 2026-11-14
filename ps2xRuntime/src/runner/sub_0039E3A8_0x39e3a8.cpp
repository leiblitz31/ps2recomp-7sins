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

// Function: sub_0039E3A8
// Address: 0x39e3a8 - 0x39e528
void sub_0039E3A8_0x39e3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E3A8_0x39e3a8");
#endif

    switch (ctx->pc) {
        case 0x39e3a8u: goto label_39e3a8;
        case 0x39e3acu: goto label_39e3ac;
        case 0x39e3b0u: goto label_39e3b0;
        case 0x39e3b4u: goto label_39e3b4;
        case 0x39e3b8u: goto label_39e3b8;
        case 0x39e3bcu: goto label_39e3bc;
        case 0x39e3c0u: goto label_39e3c0;
        case 0x39e3c4u: goto label_39e3c4;
        case 0x39e3c8u: goto label_39e3c8;
        case 0x39e3ccu: goto label_39e3cc;
        case 0x39e3d0u: goto label_39e3d0;
        case 0x39e3d4u: goto label_39e3d4;
        case 0x39e3d8u: goto label_39e3d8;
        case 0x39e3dcu: goto label_39e3dc;
        case 0x39e3e0u: goto label_39e3e0;
        case 0x39e3e4u: goto label_39e3e4;
        case 0x39e3e8u: goto label_39e3e8;
        case 0x39e3ecu: goto label_39e3ec;
        case 0x39e3f0u: goto label_39e3f0;
        case 0x39e3f4u: goto label_39e3f4;
        case 0x39e3f8u: goto label_39e3f8;
        case 0x39e3fcu: goto label_39e3fc;
        case 0x39e400u: goto label_39e400;
        case 0x39e404u: goto label_39e404;
        case 0x39e408u: goto label_39e408;
        case 0x39e40cu: goto label_39e40c;
        case 0x39e410u: goto label_39e410;
        case 0x39e414u: goto label_39e414;
        case 0x39e418u: goto label_39e418;
        case 0x39e41cu: goto label_39e41c;
        case 0x39e420u: goto label_39e420;
        case 0x39e424u: goto label_39e424;
        case 0x39e428u: goto label_39e428;
        case 0x39e42cu: goto label_39e42c;
        case 0x39e430u: goto label_39e430;
        case 0x39e434u: goto label_39e434;
        case 0x39e438u: goto label_39e438;
        case 0x39e43cu: goto label_39e43c;
        case 0x39e440u: goto label_39e440;
        case 0x39e444u: goto label_39e444;
        case 0x39e448u: goto label_39e448;
        case 0x39e44cu: goto label_39e44c;
        case 0x39e450u: goto label_39e450;
        case 0x39e454u: goto label_39e454;
        case 0x39e458u: goto label_39e458;
        case 0x39e45cu: goto label_39e45c;
        case 0x39e460u: goto label_39e460;
        case 0x39e464u: goto label_39e464;
        case 0x39e468u: goto label_39e468;
        case 0x39e46cu: goto label_39e46c;
        case 0x39e470u: goto label_39e470;
        case 0x39e474u: goto label_39e474;
        case 0x39e478u: goto label_39e478;
        case 0x39e47cu: goto label_39e47c;
        case 0x39e480u: goto label_39e480;
        case 0x39e484u: goto label_39e484;
        case 0x39e488u: goto label_39e488;
        case 0x39e48cu: goto label_39e48c;
        case 0x39e490u: goto label_39e490;
        case 0x39e494u: goto label_39e494;
        case 0x39e498u: goto label_39e498;
        case 0x39e49cu: goto label_39e49c;
        case 0x39e4a0u: goto label_39e4a0;
        case 0x39e4a4u: goto label_39e4a4;
        case 0x39e4a8u: goto label_39e4a8;
        case 0x39e4acu: goto label_39e4ac;
        case 0x39e4b0u: goto label_39e4b0;
        case 0x39e4b4u: goto label_39e4b4;
        case 0x39e4b8u: goto label_39e4b8;
        case 0x39e4bcu: goto label_39e4bc;
        case 0x39e4c0u: goto label_39e4c0;
        case 0x39e4c4u: goto label_39e4c4;
        case 0x39e4c8u: goto label_39e4c8;
        case 0x39e4ccu: goto label_39e4cc;
        case 0x39e4d0u: goto label_39e4d0;
        case 0x39e4d4u: goto label_39e4d4;
        case 0x39e4d8u: goto label_39e4d8;
        case 0x39e4dcu: goto label_39e4dc;
        case 0x39e4e0u: goto label_39e4e0;
        case 0x39e4e4u: goto label_39e4e4;
        case 0x39e4e8u: goto label_39e4e8;
        case 0x39e4ecu: goto label_39e4ec;
        case 0x39e4f0u: goto label_39e4f0;
        case 0x39e4f4u: goto label_39e4f4;
        case 0x39e4f8u: goto label_39e4f8;
        case 0x39e4fcu: goto label_39e4fc;
        case 0x39e500u: goto label_39e500;
        case 0x39e504u: goto label_39e504;
        case 0x39e508u: goto label_39e508;
        case 0x39e50cu: goto label_39e50c;
        case 0x39e510u: goto label_39e510;
        case 0x39e514u: goto label_39e514;
        case 0x39e518u: goto label_39e518;
        case 0x39e51cu: goto label_39e51c;
        case 0x39e520u: goto label_39e520;
        case 0x39e524u: goto label_39e524;
        default: break;
    }

    ctx->pc = 0x39e3a8u;

label_39e3a8:
    // 0x39e3a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39e3ac:
    // 0x39e3ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39e3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e3b0:
    // 0x39e3b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_39e3b4:
    // 0x39e3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39e3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39e3b8:
    // 0x39e3b8: 0xc11110a  jal         func_444428
label_39e3bc:
    if (ctx->pc == 0x39E3BCu) {
        ctx->pc = 0x39E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3B8u;
        // 0x39e3bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3C0u;
        goto label_39e3c0;
    }
    ctx->pc = 0x39E3B8u;
    SET_GPR_U32(ctx, 31, 0x39E3C0u);
    ctx->pc = 0x39E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3B8u;
    // 0x39e3bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E3B8u, 0x39E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3C0u;
label_39e3c0:
    // 0x39e3c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39e3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e3c4:
    // 0x39e3c4: 0xc11110a  jal         func_444428
label_39e3c8:
    if (ctx->pc == 0x39E3C8u) {
        ctx->pc = 0x39E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3C4u;
        // 0x39e3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3CCu;
        goto label_39e3cc;
    }
    ctx->pc = 0x39E3C4u;
    SET_GPR_U32(ctx, 31, 0x39E3CCu);
    ctx->pc = 0x39E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3C4u;
    // 0x39e3c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E3C4u, 0x39E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3CCu;
label_39e3cc:
    // 0x39e3cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39e3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e3d0:
    // 0x39e3d0: 0xc11110a  jal         func_444428
label_39e3d4:
    if (ctx->pc == 0x39E3D4u) {
        ctx->pc = 0x39E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3D0u;
        // 0x39e3d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3D8u;
        goto label_39e3d8;
    }
    ctx->pc = 0x39E3D0u;
    SET_GPR_U32(ctx, 31, 0x39E3D8u);
    ctx->pc = 0x39E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3D0u;
    // 0x39e3d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E3D0u, 0x39E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3D8u;
label_39e3d8:
    // 0x39e3d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39e3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39e3dc:
    // 0x39e3dc: 0xc11110a  jal         func_444428
label_39e3e0:
    if (ctx->pc == 0x39E3E0u) {
        ctx->pc = 0x39E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3DCu;
        // 0x39e3e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3E4u;
        goto label_39e3e4;
    }
    ctx->pc = 0x39E3DCu;
    SET_GPR_U32(ctx, 31, 0x39E3E4u);
    ctx->pc = 0x39E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3DCu;
    // 0x39e3e0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E3DCu, 0x39E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3E4u;
label_39e3e4:
    // 0x39e3e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x39e3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39e3e8:
    // 0x39e3e8: 0xc11110a  jal         func_444428
label_39e3ec:
    if (ctx->pc == 0x39E3ECu) {
        ctx->pc = 0x39E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3E8u;
        // 0x39e3ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3F0u;
        goto label_39e3f0;
    }
    ctx->pc = 0x39E3E8u;
    SET_GPR_U32(ctx, 31, 0x39E3F0u);
    ctx->pc = 0x39E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3E8u;
    // 0x39e3ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444428u, 0x39E3E8u, 0x39E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3F0u;
label_39e3f0:
    // 0x39e3f0: 0xc111306  jal         func_444C18
label_39e3f4:
    if (ctx->pc == 0x39E3F4u) {
        ctx->pc = 0x39E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E3F0u;
        // 0x39e3f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E3F8u;
        goto label_39e3f8;
    }
    ctx->pc = 0x39E3F0u;
    SET_GPR_U32(ctx, 31, 0x39E3F8u);
    ctx->pc = 0x39E3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3F0u;
    // 0x39e3f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444C18u, 0x39E3F0u, 0x39E3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3F8u;
label_39e3f8:
    // 0x39e3f8: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x39e3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
label_39e3fc:
    // 0x39e3fc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x39e3fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_39e400:
    // 0x39e400: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x39e400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_39e404:
    // 0x39e404: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39e404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_39e408:
    // 0x39e408: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x39e408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39e40c:
    // 0x39e40c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x39e40cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_39e410:
    // 0x39e410: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x39e410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
label_39e414:
    // 0x39e414: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x39e414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
label_39e418:
    // 0x39e418: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x39e418u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
label_39e41c:
    // 0x39e41c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x39e41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_39e420:
    // 0x39e420: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x39e420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
label_39e424:
    // 0x39e424: 0xc1116c6  jal         func_445B18
label_39e428:
    if (ctx->pc == 0x39E428u) {
        ctx->pc = 0x39E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E424u;
        // 0x39e428: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E42Cu;
        goto label_39e42c;
    }
    ctx->pc = 0x39E424u;
    SET_GPR_U32(ctx, 31, 0x39E42Cu);
    ctx->pc = 0x39E428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E424u;
    // 0x39e428: 0xac600020  sw          $zero, 0x20($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x39E424u, 0x39E42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E42Cu;
label_39e42c:
    // 0x39e42c: 0x8f82bf18  lw          $v0, -0x40E8($gp)
    ctx->pc = 0x39e42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
label_39e430:
    // 0x39e430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39e430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39e434:
    // 0x39e434: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39e434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_39e438:
    // 0x39e438: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39e438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39e43c:
    // 0x39e43c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x39e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_39e440:
    // 0x39e440: 0x3e00008  jr          $ra
label_39e444:
    if (ctx->pc == 0x39E444u) {
        ctx->pc = 0x39E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E440u;
        // 0x39e444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E448u;
        goto label_39e448;
    }
    ctx->pc = 0x39E440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E440u;
        // 0x39e444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E448u;
label_39e448:
    // 0x39e448: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39e448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39e44c:
    // 0x39e44c: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_39e450:
    if (ctx->pc == 0x39E450u) {
        ctx->pc = 0x39E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E44Cu;
        // 0x39e450: 0x8f83bf18  lw          $v1, -0x40E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E454u;
        goto label_39e454;
    }
    ctx->pc = 0x39E44Cu;
    {
        const bool branch_taken_0x39e44c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x39E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E44Cu;
        // 0x39e450: 0x8f83bf18  lw          $v1, -0x40E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e44c) {
            ctx->pc = 0x39E468u;
            goto label_39e468;
        }
    }
    ctx->pc = 0x39E454u;
label_39e454:
    // 0x39e454: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39e454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39e458:
    // 0x39e458: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39e45c:
    // 0x39e45c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39e460:
    // 0x39e460: 0x3e00008  jr          $ra
label_39e464:
    if (ctx->pc == 0x39E464u) {
        ctx->pc = 0x39E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E460u;
        // 0x39e464: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E468u;
        goto label_39e468;
    }
    ctx->pc = 0x39E460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E460u;
        // 0x39e464: 0x8c620020  lw          $v0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E468u;
label_39e468:
    // 0x39e468: 0x3e00008  jr          $ra
label_39e46c:
    if (ctx->pc == 0x39E46Cu) {
        ctx->pc = 0x39E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E468u;
        // 0x39e46c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E470u;
        goto label_39e470;
    }
    ctx->pc = 0x39E468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E468u;
        // 0x39e46c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E470u;
label_39e470:
    // 0x39e470: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x39e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_39e474:
    // 0x39e474: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_39e478:
    if (ctx->pc == 0x39E478u) {
        ctx->pc = 0x39E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E474u;
        // 0x39e478: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E47Cu;
        goto label_39e47c;
    }
    ctx->pc = 0x39E474u;
    {
        const bool branch_taken_0x39e474 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x39E478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E474u;
        // 0x39e478: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e474) {
            ctx->pc = 0x39E484u;
            goto label_39e484;
        }
    }
    ctx->pc = 0x39E47Cu;
label_39e47c:
    // 0x39e47c: 0x3e00008  jr          $ra
label_39e480:
    if (ctx->pc == 0x39E480u) {
        ctx->pc = 0x39E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E47Cu;
        // 0x39e480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E484u;
        goto label_39e484;
    }
    ctx->pc = 0x39E47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E47Cu;
        // 0x39e480: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E47Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E484u;
label_39e484:
    // 0x39e484: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39e488:
    if (ctx->pc == 0x39E488u) {
        ctx->pc = 0x39E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E484u;
        // 0x39e488: 0x8f83bf18  lw          $v1, -0x40E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E48Cu;
        goto label_39e48c;
    }
    ctx->pc = 0x39E484u;
    {
        const bool branch_taken_0x39e484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E484u;
        // 0x39e488: 0x8f83bf18  lw          $v1, -0x40E8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e484) {
            ctx->pc = 0x39E4A0u;
            goto label_39e4a0;
        }
    }
    ctx->pc = 0x39E48Cu;
label_39e48c:
    // 0x39e48c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39e490:
    // 0x39e490: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39e494:
    // 0x39e494: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39e498:
    // 0x39e498: 0x3e00008  jr          $ra
label_39e49c:
    if (ctx->pc == 0x39E49Cu) {
        ctx->pc = 0x39E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E498u;
        // 0x39e49c: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4A0u;
        goto label_39e4a0;
    }
    ctx->pc = 0x39E498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E498u;
        // 0x39e49c: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E4A0u;
label_39e4a0:
    // 0x39e4a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39e4a4:
    // 0x39e4a4: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39e4a8:
    // 0x39e4a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39e4ac:
    // 0x39e4ac: 0x3e00008  jr          $ra
label_39e4b0:
    if (ctx->pc == 0x39E4B0u) {
        ctx->pc = 0x39E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4ACu;
        // 0x39e4b0: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4B4u;
        goto label_39e4b4;
    }
    ctx->pc = 0x39E4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4ACu;
        // 0x39e4b0: 0x8c62003c  lw          $v0, 0x3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E4B4u;
label_39e4b4:
    // 0x39e4b4: 0x0  nop
    ctx->pc = 0x39e4b4u;
    // NOP
label_39e4b8:
    // 0x39e4b8: 0x8f83bf18  lw          $v1, -0x40E8($gp)
    ctx->pc = 0x39e4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950680)));
label_39e4bc:
    // 0x39e4bc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x39e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_39e4c0:
    // 0x39e4c0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x39e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_39e4c4:
    // 0x39e4c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39e4c8:
    // 0x39e4c8: 0x3e00008  jr          $ra
label_39e4cc:
    if (ctx->pc == 0x39E4CCu) {
        ctx->pc = 0x39E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4C8u;
        // 0x39e4cc: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4D0u;
        goto label_39e4d0;
    }
    ctx->pc = 0x39E4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4C8u;
        // 0x39e4cc: 0x8c62001c  lw          $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E4D0u;
label_39e4d0:
    // 0x39e4d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39e4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39e4d4:
    // 0x39e4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39e4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39e4d8:
    // 0x39e4d8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x39e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39e4dc:
    // 0x39e4dc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x39e4dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_39e4e0:
    // 0x39e4e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_39e4e4:
    if (ctx->pc == 0x39E4E4u) {
        ctx->pc = 0x39E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4E0u;
        // 0x39e4e4: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4E8u;
        goto label_39e4e8;
    }
    ctx->pc = 0x39E4E0u;
    {
        const bool branch_taken_0x39e4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e4e0) {
            ctx->pc = 0x39E4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E4E0u;
            // 0x39e4e4: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E4F0u;
            goto label_39e4f0;
        }
    }
    ctx->pc = 0x39E4E8u;
label_39e4e8:
    // 0x39e4e8: 0x1000000b  b           . + 4 + (0xB << 2)
label_39e4ec:
    if (ctx->pc == 0x39E4ECu) {
        ctx->pc = 0x39E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4E8u;
        // 0x39e4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E4F0u;
        goto label_39e4f0;
    }
    ctx->pc = 0x39E4E8u;
    {
        const bool branch_taken_0x39e4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4E8u;
        // 0x39e4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e4e8) {
            ctx->pc = 0x39E518u;
            goto label_39e518;
        }
    }
    ctx->pc = 0x39E4F0u;
label_39e4f0:
    // 0x39e4f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x39e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_39e4f4:
    // 0x39e4f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x39e4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_39e4f8:
    // 0x39e4f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39e4fc:
    if (ctx->pc == 0x39E4FCu) {
        ctx->pc = 0x39E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4F8u;
        // 0x39e4fc: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E500u;
        goto label_39e500;
    }
    ctx->pc = 0x39E4F8u;
    {
        const bool branch_taken_0x39e4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E4F8u;
        // 0x39e4fc: 0xaca30018  sw          $v1, 0x18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e4f8) {
            ctx->pc = 0x39E514u;
            goto label_39e514;
        }
    }
    ctx->pc = 0x39E500u;
label_39e500:
    // 0x39e500: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39e500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_39e504:
    // 0x39e504: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x39e504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e508:
    // 0x39e508: 0x8c62e8a0  lw          $v0, -0x1760($v1)
    ctx->pc = 0x39e508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961312)));
label_39e50c:
    // 0x39e50c: 0x40f809  jalr        $v0
label_39e510:
    if (ctx->pc == 0x39E510u) {
        ctx->pc = 0x39E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E50Cu;
        // 0x39e510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E514u;
        goto label_39e514;
    }
    ctx->pc = 0x39E50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39E514u);
        ctx->pc = 0x39E510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E50Cu;
        // 0x39e510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E50Cu, 0x39E514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39E514u;
label_39e514:
    // 0x39e514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39e518:
    // 0x39e518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39e518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39e51c:
    // 0x39e51c: 0x3e00008  jr          $ra
label_39e520:
    if (ctx->pc == 0x39E520u) {
        ctx->pc = 0x39E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E51Cu;
        // 0x39e520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39E524u;
        goto label_39e524;
    }
    ctx->pc = 0x39E51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E51Cu;
        // 0x39e520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E524u;
label_39e524:
    // 0x39e524: 0x0  nop
    ctx->pc = 0x39e524u;
    // NOP
    ctx->pc = 0x39e528u;
}
