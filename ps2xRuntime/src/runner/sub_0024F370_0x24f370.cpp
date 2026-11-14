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

// Function: sub_0024F370
// Address: 0x24f370 - 0x24f580
void sub_0024F370_0x24f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F370_0x24f370");
#endif

    switch (ctx->pc) {
        case 0x24f3acu: goto label_24f3ac;
        case 0x24f3c0u: goto label_24f3c0;
        case 0x24f3d4u: goto label_24f3d4;
        case 0x24f3e4u: goto label_24f3e4;
        case 0x24f3fcu: goto label_24f3fc;
        case 0x24f414u: goto label_24f414;
        case 0x24f42cu: goto label_24f42c;
        case 0x24f44cu: goto label_24f44c;
        case 0x24f464u: goto label_24f464;
        case 0x24f474u: goto label_24f474;
        case 0x24f49cu: goto label_24f49c;
        case 0x24f4b0u: goto label_24f4b0;
        case 0x24f4c4u: goto label_24f4c4;
        case 0x24f4d0u: goto label_24f4d0;
        case 0x24f4e4u: goto label_24f4e4;
        case 0x24f4fcu: goto label_24f4fc;
        case 0x24f524u: goto label_24f524;
        case 0x24f538u: goto label_24f538;
        case 0x24f554u: goto label_24f554;
        default: break;
    }

    ctx->pc = 0x24f370u;

    // 0x24f370: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24f370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x24f374: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x24f374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x24f378: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x24f378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x24f37c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x24f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x24f380: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24f384: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24f388: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24f38c: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x24f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x24f390: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x24f390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x24f394: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x24f394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x24f398: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x24f398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f39c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x24f39cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f3a0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x24f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f3a4: 0xc091e50  jal         func_247940
    ctx->pc = 0x24F3A4u;
    SET_GPR_U32(ctx, 31, 0x24F3ACu);
    ctx->pc = 0x247940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247940u, 0x24F3A4u, 0x24F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F3ACu;
label_24f3ac:
    // 0x24f3ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24f3acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24f3b4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x24f3b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24f3b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x24F3B8u;
    {
        const bool branch_taken_0x24f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f3b8) {
            ctx->pc = 0x24F434u;
            goto label_24f434;
        }
    }
    ctx->pc = 0x24F3C0u;
label_24f3c0:
    // 0x24f3c0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x24f3c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f3c4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x24f3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x24f3c8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x24f3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24f3cc: 0xc093e08  jal         func_24F820
    ctx->pc = 0x24F3CCu;
    SET_GPR_U32(ctx, 31, 0x24F3D4u);
    ctx->pc = 0x24F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F820u, 0x24F3CCu, 0x24F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F3D4u;
label_24f3d4:
    // 0x24f3d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24f3d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f3d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f3dc: 0xc093df8  jal         func_24F7E0
    ctx->pc = 0x24F3DCu;
    SET_GPR_U32(ctx, 31, 0x24F3E4u);
    ctx->pc = 0x24F7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F7E0u, 0x24F3DCu, 0x24F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F3E4u;
label_24f3e4:
    // 0x24f3e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x24f3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f3e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x24f3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x24f3ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24f3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f3f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24f3f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f3f4: 0xc093dd4  jal         func_24F750
    ctx->pc = 0x24F3F4u;
    SET_GPR_U32(ctx, 31, 0x24F3FCu);
    ctx->pc = 0x24F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F750u, 0x24F3F4u, 0x24F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F3FCu;
label_24f3fc:
    // 0x24f3fc: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x24f3fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x24f400: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24F400u;
    {
        const bool branch_taken_0x24f400 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f400) {
            ctx->pc = 0x24F420u;
            goto label_24f420;
        }
    }
    ctx->pc = 0x24F408u;
    // 0x24f408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f40c: 0xc093dcc  jal         func_24F730
    ctx->pc = 0x24F40Cu;
    SET_GPR_U32(ctx, 31, 0x24F414u);
    ctx->pc = 0x24F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F730u, 0x24F40Cu, 0x24F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F414u;
label_24f414:
    // 0x24f414: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24f414u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24f418: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24F418u;
    {
        const bool branch_taken_0x24f418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f418) {
            ctx->pc = 0x24F430u;
            goto label_24f430;
        }
    }
    ctx->pc = 0x24F420u;
label_24f420:
    // 0x24f420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f424: 0xc093dc4  jal         func_24F710
    ctx->pc = 0x24F424u;
    SET_GPR_U32(ctx, 31, 0x24F42Cu);
    ctx->pc = 0x24F710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F710u, 0x24F424u, 0x24F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F42Cu;
label_24f42c:
    // 0x24f42c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x24f42cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24f430:
    // 0x24f430: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x24f430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24f434:
    // 0x24f434: 0x1600ffe2  bnez        $s0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x24F434u;
    {
        const bool branch_taken_0x24f434 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24f434) {
            ctx->pc = 0x24F3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f3c0;
        }
    }
    ctx->pc = 0x24F43Cu;
    // 0x24f43c: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24f43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24f440: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24f440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f444: 0xc093db8  jal         func_24F6E0
    ctx->pc = 0x24F444u;
    SET_GPR_U32(ctx, 31, 0x24F44Cu);
    ctx->pc = 0x24F6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F6E0u, 0x24F444u, 0x24F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F44Cu;
label_24f44c:
    // 0x24f44c: 0x1240001d  beqz        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x24F44Cu;
    {
        const bool branch_taken_0x24f44c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f44c) {
            ctx->pc = 0x24F4C4u;
            goto label_24f4c4;
        }
    }
    ctx->pc = 0x24F454u;
    // 0x24f454: 0x27a40074  addiu       $a0, $sp, 0x74
    ctx->pc = 0x24f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x24f458: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x24f458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f45c: 0xc093da8  jal         func_24F6A0
    ctx->pc = 0x24F45Cu;
    SET_GPR_U32(ctx, 31, 0x24F464u);
    ctx->pc = 0x24F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F6A0u, 0x24F45Cu, 0x24F464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F464u;
label_24f464:
    // 0x24f464: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24f464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24f468: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x24f468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x24f46c: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x24F46Cu;
    SET_GPR_U32(ctx, 31, 0x24F474u);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x24F46Cu, 0x24F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F474u;
label_24f474:
    // 0x24f474: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F474u;
    {
        const bool branch_taken_0x24f474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f474) {
            ctx->pc = 0x24F4B8u;
            goto label_24f4b8;
        }
    }
    ctx->pc = 0x24F47Cu;
    // 0x24f47c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x24f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f480: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x24f480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f484: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24f484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f488: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24f488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f48c: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x24f48cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24f490: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f494: 0xc093f08  jal         func_24FC20
    ctx->pc = 0x24F494u;
    SET_GPR_U32(ctx, 31, 0x24F49Cu);
    ctx->pc = 0x24FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FC20u, 0x24F494u, 0x24F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F49Cu;
label_24f49c:
    // 0x24f49c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f4a0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x24f4a4: 0x27869e84  addiu       $a2, $gp, -0x617C
    ctx->pc = 0x24f4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942340));
    // 0x24f4a8: 0xc093d88  jal         func_24F620
    ctx->pc = 0x24F4A8u;
    SET_GPR_U32(ctx, 31, 0x24F4B0u);
    ctx->pc = 0x24F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F620u, 0x24F4A8u, 0x24F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4B0u;
label_24f4b0:
    // 0x24f4b0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x24F4B0u;
    {
        const bool branch_taken_0x24f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f4b0) {
            ctx->pc = 0x24F554u;
            goto label_24f554;
        }
    }
    ctx->pc = 0x24F4B8u;
label_24f4b8:
    // 0x24f4b8: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x24f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24f4bc: 0xc093d78  jal         func_24F5E0
    ctx->pc = 0x24F4BCu;
    SET_GPR_U32(ctx, 31, 0x24F4C4u);
    ctx->pc = 0x24F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F5E0u, 0x24F4BCu, 0x24F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4C4u;
label_24f4c4:
    // 0x24f4c4: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x24f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x24f4c8: 0xc093d60  jal         func_24F580
    ctx->pc = 0x24F4C8u;
    SET_GPR_U32(ctx, 31, 0x24F4D0u);
    ctx->pc = 0x24F580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F580u, 0x24F4C8u, 0x24F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4D0u;
label_24f4d0:
    // 0x24f4d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x24f4d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4d4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x24f4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x24f4d8: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x24f4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24f4dc: 0xc093e08  jal         func_24F820
    ctx->pc = 0x24F4DCu;
    SET_GPR_U32(ctx, 31, 0x24F4E4u);
    ctx->pc = 0x24F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F820u, 0x24F4DCu, 0x24F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4E4u;
label_24f4e4:
    // 0x24f4e4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x24f4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f4e8: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x24f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x24f4ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x24f4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x24f4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f4f4: 0xc093dd4  jal         func_24F750
    ctx->pc = 0x24F4F4u;
    SET_GPR_U32(ctx, 31, 0x24F4FCu);
    ctx->pc = 0x24F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F750u, 0x24F4F4u, 0x24F4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F4FCu;
label_24f4fc:
    // 0x24f4fc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24F4FCu;
    {
        const bool branch_taken_0x24f4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f4fc) {
            ctx->pc = 0x24F540u;
            goto label_24f540;
        }
    }
    ctx->pc = 0x24F504u;
    // 0x24f504: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x24f504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x24f508: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x24f508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x24f50c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24f50cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f510: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x24f510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f514: 0x8fa800a0  lw          $t0, 0xA0($sp)
    ctx->pc = 0x24f514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24f518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24f518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f51c: 0xc093f08  jal         func_24FC20
    ctx->pc = 0x24F51Cu;
    SET_GPR_U32(ctx, 31, 0x24F524u);
    ctx->pc = 0x24FC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FC20u, 0x24F51Cu, 0x24F524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F524u;
label_24f524:
    // 0x24f524: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24f524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f528: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x24f528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x24f52c: 0x27869e88  addiu       $a2, $gp, -0x6178
    ctx->pc = 0x24f52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942344));
    // 0x24f530: 0xc093d88  jal         func_24F620
    ctx->pc = 0x24F530u;
    SET_GPR_U32(ctx, 31, 0x24F538u);
    ctx->pc = 0x24F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F620u, 0x24F530u, 0x24F538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F538u;
label_24f538:
    // 0x24f538: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24F538u;
    {
        const bool branch_taken_0x24f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24f538) {
            ctx->pc = 0x24F554u;
            goto label_24f554;
        }
    }
    ctx->pc = 0x24F540u;
label_24f540:
    // 0x24f540: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x24f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x24f544: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x24f544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x24f548: 0x27869e8c  addiu       $a2, $gp, -0x6174
    ctx->pc = 0x24f548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942348));
    // 0x24f54c: 0xc093d88  jal         func_24F620
    ctx->pc = 0x24F54Cu;
    SET_GPR_U32(ctx, 31, 0x24F554u);
    ctx->pc = 0x24F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24F620u, 0x24F54Cu, 0x24F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24F554u;
label_24f554:
    // 0x24f554: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x24f554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24f558: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24f558u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24f55c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24f55cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24f560: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24f560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24f564: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24f564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24f568: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24f568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24f56c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x24f56cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x24f570: 0x3e00008  jr          $ra
    ctx->pc = 0x24F570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F578u;
    // 0x24f578: 0x0  nop
    ctx->pc = 0x24f578u;
    // NOP
    // 0x24f57c: 0x0  nop
    ctx->pc = 0x24f57cu;
    // NOP
    ctx->pc = 0x24f580u;
}
