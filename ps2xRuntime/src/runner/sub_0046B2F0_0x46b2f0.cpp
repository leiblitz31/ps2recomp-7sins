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

// Function: sub_0046B2F0
// Address: 0x46b2f0 - 0x46b480
void sub_0046B2F0_0x46b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046B2F0_0x46b2f0");
#endif

    switch (ctx->pc) {
        case 0x46b328u: goto label_46b328;
        case 0x46b340u: goto label_46b340;
        case 0x46b360u: goto label_46b360;
        case 0x46b374u: goto label_46b374;
        case 0x46b38cu: goto label_46b38c;
        case 0x46b3acu: goto label_46b3ac;
        case 0x46b3f0u: goto label_46b3f0;
        case 0x46b408u: goto label_46b408;
        case 0x46b428u: goto label_46b428;
        case 0x46b43cu: goto label_46b43c;
        default: break;
    }

    ctx->pc = 0x46b2f0u;

    // 0x46b2f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x46b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x46b2f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x46b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x46b2f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x46b2fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46b2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x46b300: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46b304: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46b308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46b308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46b30c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46b30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46b310: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x46b310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x46b314: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x46b314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x46b318: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x46b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b31c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x46b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x46b320: 0xc11a658  jal         func_469960
    ctx->pc = 0x46B320u;
    SET_GPR_U32(ctx, 31, 0x46B328u);
    ctx->pc = 0x469960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469960u, 0x46B320u, 0x46B328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B328u;
label_46b328:
    // 0x46b328: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x46b328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b32c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b330: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b334: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46b334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b338: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B338u;
    SET_GPR_U32(ctx, 31, 0x46B340u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B338u, 0x46B340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B340u;
label_46b340:
    // 0x46b340: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x46b340u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46b344: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x46b344u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b348: 0x12400041  beqz        $s2, . + 4 + (0x41 << 2)
    ctx->pc = 0x46B348u;
    {
        const bool branch_taken_0x46b348 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b348) {
            ctx->pc = 0x46B450u;
            goto label_46b450;
        }
    }
    ctx->pc = 0x46B350u;
    // 0x46b350: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x46b350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b354: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x46b354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x46b358: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x46B358u;
    {
        const bool branch_taken_0x46b358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b358) {
            ctx->pc = 0x46B3D4u;
            goto label_46b3d4;
        }
    }
    ctx->pc = 0x46B360u;
label_46b360:
    // 0x46b360: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46b360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b364: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x46b364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x46b368: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x46b368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x46b36c: 0xc11a67c  jal         func_4699F0
    ctx->pc = 0x46B36Cu;
    SET_GPR_U32(ctx, 31, 0x46B374u);
    ctx->pc = 0x4699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699F0u, 0x46B36Cu, 0x46B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B374u;
label_46b374:
    // 0x46b374: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x46b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b378: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46b37c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46b37cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b380: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x46b380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x46b384: 0xc04ed6c  jal         func_13B5B0
    ctx->pc = 0x46B384u;
    SET_GPR_U32(ctx, 31, 0x46B38Cu);
    ctx->pc = 0x13B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B5B0u, 0x46B384u, 0x46B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B38Cu;
label_46b38c:
    // 0x46b38c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x46B38Cu;
    {
        const bool branch_taken_0x46b38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b38c) {
            ctx->pc = 0x46B3CCu;
            goto label_46b3cc;
        }
    }
    ctx->pc = 0x46B394u;
    // 0x46b394: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x46b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x46b398: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x46b398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x46b39c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x46b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b3a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46b3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b3a4: 0xc11ac9c  jal         func_46B270
    ctx->pc = 0x46B3A4u;
    SET_GPR_U32(ctx, 31, 0x46B3ACu);
    ctx->pc = 0x46B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B270u, 0x46B3A4u, 0x46B3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B3ACu;
label_46b3ac:
    // 0x46b3ac: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x46b3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x46b3b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x46b3b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x46b3b4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x46b3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b3b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x46b3bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x46b3c0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x46b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x46b3c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x46B3C4u;
    {
        const bool branch_taken_0x46b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b3c4) {
            ctx->pc = 0x46B3D4u;
            goto label_46b3d4;
        }
    }
    ctx->pc = 0x46B3CCu;
label_46b3cc:
    // 0x46b3cc: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x46b3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b3d0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x46b3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46b3d4:
    // 0x46b3d4: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x46B3D4u;
    {
        const bool branch_taken_0x46b3d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46b3d4) {
            ctx->pc = 0x46B360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46b360;
        }
    }
    ctx->pc = 0x46B3DCu;
    // 0x46b3dc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b3e0: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x46b3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x46b3e4: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x46b3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x46b3e8: 0xc11a67c  jal         func_4699F0
    ctx->pc = 0x46B3E8u;
    SET_GPR_U32(ctx, 31, 0x46B3F0u);
    ctx->pc = 0x4699F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4699F0u, 0x46B3E8u, 0x46B3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B3F0u;
label_46b3f0:
    // 0x46b3f0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x46b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b3f4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x46b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46b3f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46b3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b3fc: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x46b3fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x46b400: 0xc04ed6c  jal         func_13B5B0
    ctx->pc = 0x46B400u;
    SET_GPR_U32(ctx, 31, 0x46B408u);
    ctx->pc = 0x13B5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B5B0u, 0x46B400u, 0x46B408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B408u;
label_46b408:
    // 0x46b408: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x46B408u;
    {
        const bool branch_taken_0x46b408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46b408) {
            ctx->pc = 0x46B450u;
            goto label_46b450;
        }
    }
    ctx->pc = 0x46B410u;
    // 0x46b410: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x46b410u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x46b414: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b418: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x46b418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x46b41c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x46b41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b420: 0xc11a5cc  jal         func_469730
    ctx->pc = 0x46B420u;
    SET_GPR_U32(ctx, 31, 0x46B428u);
    ctx->pc = 0x469730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469730u, 0x46B420u, 0x46B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B428u;
label_46b428:
    // 0x46b428: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x46b428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x46b42c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x46b42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b430: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x46b430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b434: 0xc11ac9c  jal         func_46B270
    ctx->pc = 0x46B434u;
    SET_GPR_U32(ctx, 31, 0x46B43Cu);
    ctx->pc = 0x46B270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B270u, 0x46B434u, 0x46B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46B43Cu;
label_46b43c:
    // 0x46b43c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x46b43cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x46b440: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x46b440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46b444: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x46b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x46b448: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x46b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x46b44c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x46b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_46b450:
    // 0x46b450: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x46b450u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46b454: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x46b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46b458: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46b458u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46b45c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46b45cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46b460: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46b460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46b464: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46b464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46b468: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46b468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46b46c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46b46cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46b470: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x46b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46b474: 0x3e00008  jr          $ra
    ctx->pc = 0x46B474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46B474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46B47Cu;
    // 0x46b47c: 0x0  nop
    ctx->pc = 0x46b47cu;
    // NOP
    ctx->pc = 0x46b480u;
}
