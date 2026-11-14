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

// Function: sub_001CE790
// Address: 0x1ce790 - 0x1cecd0
void sub_001CE790_0x1ce790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE790_0x1ce790");
#endif

    switch (ctx->pc) {
        case 0x1ce7b4u: goto label_1ce7b4;
        case 0x1ce7d4u: goto label_1ce7d4;
        case 0x1ce7e4u: goto label_1ce7e4;
        case 0x1ce7fcu: goto label_1ce7fc;
        case 0x1ce814u: goto label_1ce814;
        case 0x1ce828u: goto label_1ce828;
        case 0x1ce83cu: goto label_1ce83c;
        case 0x1ce860u: goto label_1ce860;
        case 0x1ce870u: goto label_1ce870;
        case 0x1ce880u: goto label_1ce880;
        case 0x1ce894u: goto label_1ce894;
        case 0x1ce8a8u: goto label_1ce8a8;
        case 0x1ce8b4u: goto label_1ce8b4;
        case 0x1ce8ccu: goto label_1ce8cc;
        case 0x1ce8dcu: goto label_1ce8dc;
        case 0x1ce8f0u: goto label_1ce8f0;
        case 0x1ce90cu: goto label_1ce90c;
        case 0x1ce918u: goto label_1ce918;
        case 0x1ce924u: goto label_1ce924;
        case 0x1ce954u: goto label_1ce954;
        case 0x1ce964u: goto label_1ce964;
        case 0x1ce978u: goto label_1ce978;
        case 0x1ce994u: goto label_1ce994;
        case 0x1ce9a0u: goto label_1ce9a0;
        case 0x1ce9acu: goto label_1ce9ac;
        case 0x1ce9c4u: goto label_1ce9c4;
        case 0x1ce9d4u: goto label_1ce9d4;
        case 0x1ce9e8u: goto label_1ce9e8;
        case 0x1cea04u: goto label_1cea04;
        case 0x1cea10u: goto label_1cea10;
        case 0x1cea1cu: goto label_1cea1c;
        case 0x1cea34u: goto label_1cea34;
        case 0x1cea44u: goto label_1cea44;
        case 0x1cea58u: goto label_1cea58;
        case 0x1cea74u: goto label_1cea74;
        case 0x1cea80u: goto label_1cea80;
        case 0x1cea8cu: goto label_1cea8c;
        case 0x1ceabcu: goto label_1ceabc;
        case 0x1ceaccu: goto label_1ceacc;
        case 0x1ceae0u: goto label_1ceae0;
        case 0x1ceafcu: goto label_1ceafc;
        case 0x1ceb08u: goto label_1ceb08;
        case 0x1ceb14u: goto label_1ceb14;
        case 0x1ceb44u: goto label_1ceb44;
        case 0x1ceb5cu: goto label_1ceb5c;
        case 0x1cebd0u: goto label_1cebd0;
        case 0x1cebfcu: goto label_1cebfc;
        case 0x1cec14u: goto label_1cec14;
        case 0x1cec28u: goto label_1cec28;
        case 0x1cec3cu: goto label_1cec3c;
        case 0x1cec50u: goto label_1cec50;
        case 0x1cec64u: goto label_1cec64;
        case 0x1cec78u: goto label_1cec78;
        case 0x1cec8cu: goto label_1cec8c;
        case 0x1cec9cu: goto label_1cec9c;
        case 0x1cecbcu: goto label_1cecbc;
        default: break;
    }

    ctx->pc = 0x1ce790u;

    // 0x1ce790: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ce790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1ce794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ce794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ce798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ce798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ce79c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce7a0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x1ce7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
    // 0x1ce7a4: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1ce7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce7a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ce7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce7ac: 0xc064924  jal         func_192490
    ctx->pc = 0x1CE7ACu;
    SET_GPR_U32(ctx, 31, 0x1CE7B4u);
    ctx->pc = 0x192490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192490u, 0x1CE7ACu, 0x1CE7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7B4u;
label_1ce7b4:
    // 0x1ce7b4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ce7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ce7b8: 0x24634ac0  addiu       $v1, $v1, 0x4AC0
    ctx->pc = 0x1ce7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19136));
    // 0x1ce7bc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce7c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ce7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ce7c4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce7c8: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1ce7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1ce7cc: 0xc0acac4  jal         func_2B2B10
    ctx->pc = 0x1CE7CCu;
    SET_GPR_U32(ctx, 31, 0x1CE7D4u);
    ctx->pc = 0x2B2B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2B10u, 0x1CE7CCu, 0x1CE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7D4u;
label_1ce7d4:
    // 0x1ce7d4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce7d8: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1ce7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1ce7dc: 0xc06885c  jal         func_1A2170
    ctx->pc = 0x1CE7DCu;
    SET_GPR_U32(ctx, 31, 0x1CE7E4u);
    ctx->pc = 0x1A2170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2170u, 0x1CE7DCu, 0x1CE7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7E4u;
label_1ce7e4:
    // 0x1ce7e4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce7e8: 0xac400128  sw          $zero, 0x128($v0)
    ctx->pc = 0x1ce7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 0));
    // 0x1ce7ec: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce7f0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1ce7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x1ce7f4: 0xc0480a4  jal         func_120290
    ctx->pc = 0x1CE7F4u;
    SET_GPR_U32(ctx, 31, 0x1CE7FCu);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x1CE7F4u, 0x1CE7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE7FCu;
label_1ce7fc:
    // 0x1ce7fc: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce800: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1ce800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
    // 0x1ce804: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce808: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1ce808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x1ce80c: 0xc05ef10  jal         func_17BC40
    ctx->pc = 0x1CE80Cu;
    SET_GPR_U32(ctx, 31, 0x1CE814u);
    ctx->pc = 0x17BC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC40u, 0x1CE80Cu, 0x1CE814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE814u;
label_1ce814:
    // 0x1ce814: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1ce814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x1ce818: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1ce818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1ce81c: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x1ce81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x1ce820: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x1CE820u;
    SET_GPR_U32(ctx, 31, 0x1CE828u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1CE820u, 0x1CE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE828u;
label_1ce828:
    // 0x1ce828: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ce828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce82c: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x1ce82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ce830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ce830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce834: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x1CE834u;
    SET_GPR_U32(ctx, 31, 0x1CE83Cu);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x1CE834u, 0x1CE83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE83Cu;
label_1ce83c:
    // 0x1ce83c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ce83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ce840: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce844: 0xac430078  sw          $v1, 0x78($v0)
    ctx->pc = 0x1ce844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 3));
    // 0x1ce848: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce84c: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1ce84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
    // 0x1ce850: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce854: 0xac400154  sw          $zero, 0x154($v0)
    ctx->pc = 0x1ce854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 0));
    // 0x1ce858: 0xc107150  jal         func_41C540
    ctx->pc = 0x1CE858u;
    SET_GPR_U32(ctx, 31, 0x1CE860u);
    ctx->pc = 0x41C540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C540u, 0x1CE858u, 0x1CE860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE860u;
label_1ce860:
    // 0x1ce860: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ce860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ce864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ce864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce868: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CE868u;
    SET_GPR_U32(ctx, 31, 0x1CE870u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CE868u, 0x1CE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE870u;
label_1ce870:
    // 0x1ce870: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1ce870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1ce874: 0x24847a00  addiu       $a0, $a0, 0x7A00
    ctx->pc = 0x1ce874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31232));
    // 0x1ce878: 0xc107156  jal         func_41C558
    ctx->pc = 0x1CE878u;
    SET_GPR_U32(ctx, 31, 0x1CE880u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x1CE878u, 0x1CE880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE880u;
label_1ce880:
    // 0x1ce880: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1ce880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1ce884: 0x24847a20  addiu       $a0, $a0, 0x7A20
    ctx->pc = 0x1ce884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31264));
    // 0x1ce888: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ce888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce88c: 0xc107fa4  jal         func_41FE90
    ctx->pc = 0x1CE88Cu;
    SET_GPR_U32(ctx, 31, 0x1CE894u);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x1CE88Cu, 0x1CE894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE894u;
label_1ce894:
    // 0x1ce894: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ce894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce898: 0xac620158  sw          $v0, 0x158($v1)
    ctx->pc = 0x1ce898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 2));
    // 0x1ce89c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ce89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ce8a0: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CE8A0u;
    SET_GPR_U32(ctx, 31, 0x1CE8A8u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CE8A0u, 0x1CE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8A8u;
label_1ce8a8:
    // 0x1ce8a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8ac: 0xc107156  jal         func_41C558
    ctx->pc = 0x1CE8ACu;
    SET_GPR_U32(ctx, 31, 0x1CE8B4u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x1CE8ACu, 0x1CE8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8B4u;
label_1ce8b4:
    // 0x1ce8b4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1ce8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1ce8b8: 0x24510054  addiu       $s1, $v0, 0x54
    ctx->pc = 0x1ce8b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x1ce8bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ce8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce8c0: 0x278596d4  addiu       $a1, $gp, -0x692C
    ctx->pc = 0x1ce8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940372));
    // 0x1ce8c4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CE8C4u;
    SET_GPR_U32(ctx, 31, 0x1CE8CCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CE8C4u, 0x1CE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8CCu;
label_1ce8cc:
    // 0x1ce8cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1ce8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce8d4: 0xc05c618  jal         func_171860
    ctx->pc = 0x1CE8D4u;
    SET_GPR_U32(ctx, 31, 0x1CE8DCu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1CE8D4u, 0x1CE8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8DCu;
label_1ce8dc:
    // 0x1ce8dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce8dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce8e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1ce8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ce8e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ce8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce8e8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CE8E8u;
    SET_GPR_U32(ctx, 31, 0x1CE8F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CE8E8u, 0x1CE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE8F0u;
label_1ce8f0:
    // 0x1ce8f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce8f4: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE8F4u;
    {
        const bool branch_taken_0x1ce8f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce8f4) {
            ctx->pc = 0x1CE934u;
            goto label_1ce934;
        }
    }
    ctx->pc = 0x1CE8FCu;
    // 0x1ce8fc: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1ce8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1ce900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce904: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CE904u;
    SET_GPR_U32(ctx, 31, 0x1CE90Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CE904u, 0x1CE90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE90Cu;
label_1ce90c:
    // 0x1ce90c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1ce90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ce910: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CE910u;
    SET_GPR_U32(ctx, 31, 0x1CE918u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CE910u, 0x1CE918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE918u;
label_1ce918:
    // 0x1ce918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce91c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CE91Cu;
    SET_GPR_U32(ctx, 31, 0x1CE924u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CE91Cu, 0x1CE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE924u;
label_1ce924:
    // 0x1ce924: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce928: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1ce928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1ce92c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE92Cu;
    {
        const bool branch_taken_0x1ce92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce92c) {
            ctx->pc = 0x1CE944u;
            goto label_1ce944;
        }
    }
    ctx->pc = 0x1CE934u;
label_1ce934:
    // 0x1ce934: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x1ce934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x1ce938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ce938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce93c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce940: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1ce940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
label_1ce944:
    // 0x1ce944: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ce944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce948: 0x278596d8  addiu       $a1, $gp, -0x6928
    ctx->pc = 0x1ce948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940376));
    // 0x1ce94c: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CE94Cu;
    SET_GPR_U32(ctx, 31, 0x1CE954u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CE94Cu, 0x1CE954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE954u;
label_1ce954:
    // 0x1ce954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce958: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1ce958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce95c: 0xc05c618  jal         func_171860
    ctx->pc = 0x1CE95Cu;
    SET_GPR_U32(ctx, 31, 0x1CE964u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1CE95Cu, 0x1CE964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE964u;
label_1ce964:
    // 0x1ce964: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce968: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ce968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ce96c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ce96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce970: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CE970u;
    SET_GPR_U32(ctx, 31, 0x1CE978u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CE970u, 0x1CE978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE978u;
label_1ce978:
    // 0x1ce978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce97c: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE97Cu;
    {
        const bool branch_taken_0x1ce97c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce97c) {
            ctx->pc = 0x1CE9B4u;
            goto label_1ce9b4;
        }
    }
    ctx->pc = 0x1CE984u;
    // 0x1ce984: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1ce984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1ce988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce98c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CE98Cu;
    SET_GPR_U32(ctx, 31, 0x1CE994u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CE98Cu, 0x1CE994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE994u;
label_1ce994:
    // 0x1ce994: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1ce994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ce998: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CE998u;
    SET_GPR_U32(ctx, 31, 0x1CE9A0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CE998u, 0x1CE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9A0u;
label_1ce9a0:
    // 0x1ce9a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ce9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9a4: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CE9A4u;
    SET_GPR_U32(ctx, 31, 0x1CE9ACu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CE9A4u, 0x1CE9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9ACu;
label_1ce9ac:
    // 0x1ce9ac: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ce9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ce9b0: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1ce9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_1ce9b4:
    // 0x1ce9b4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce9b8: 0x278596dc  addiu       $a1, $gp, -0x6924
    ctx->pc = 0x1ce9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940380));
    // 0x1ce9bc: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CE9BCu;
    SET_GPR_U32(ctx, 31, 0x1CE9C4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CE9BCu, 0x1CE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9C4u;
label_1ce9c4:
    // 0x1ce9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9c8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ce9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce9cc: 0xc05c618  jal         func_171860
    ctx->pc = 0x1CE9CCu;
    SET_GPR_U32(ctx, 31, 0x1CE9D4u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1CE9CCu, 0x1CE9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9D4u;
label_1ce9d4:
    // 0x1ce9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ce9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9d8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ce9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ce9dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ce9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce9e0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CE9E0u;
    SET_GPR_U32(ctx, 31, 0x1CE9E8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CE9E0u, 0x1CE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE9E8u;
label_1ce9e8:
    // 0x1ce9e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ce9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ce9ec: 0x1202000d  beq         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1CE9ECu;
    {
        const bool branch_taken_0x1ce9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ce9ec) {
            ctx->pc = 0x1CEA24u;
            goto label_1cea24;
        }
    }
    ctx->pc = 0x1CE9F4u;
    // 0x1ce9f4: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1ce9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1ce9f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ce9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce9fc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CE9FCu;
    SET_GPR_U32(ctx, 31, 0x1CEA04u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CE9FCu, 0x1CEA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA04u;
label_1cea04:
    // 0x1cea04: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1cea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cea08: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CEA08u;
    SET_GPR_U32(ctx, 31, 0x1CEA10u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CEA08u, 0x1CEA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA10u;
label_1cea10:
    // 0x1cea10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea14: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CEA14u;
    SET_GPR_U32(ctx, 31, 0x1CEA1Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CEA14u, 0x1CEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA1Cu;
label_1cea1c:
    // 0x1cea1c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1cea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1cea20: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1cea20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1cea24:
    // 0x1cea24: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cea24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cea28: 0x278596e0  addiu       $a1, $gp, -0x6920
    ctx->pc = 0x1cea28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940384));
    // 0x1cea2c: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CEA2Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA34u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CEA2Cu, 0x1CEA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA34u;
label_1cea34:
    // 0x1cea34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1cea38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cea3c: 0xc05c618  jal         func_171860
    ctx->pc = 0x1CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA44u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1CEA3Cu, 0x1CEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA44u;
label_1cea44:
    // 0x1cea44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cea44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea48: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1cea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cea4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cea4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cea50: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CEA50u;
    SET_GPR_U32(ctx, 31, 0x1CEA58u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CEA50u, 0x1CEA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA58u;
label_1cea58:
    // 0x1cea58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cea58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cea5c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CEA5Cu;
    {
        const bool branch_taken_0x1cea5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cea5c) {
            ctx->pc = 0x1CEA9Cu;
            goto label_1cea9c;
        }
    }
    ctx->pc = 0x1CEA64u;
    // 0x1cea64: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1cea64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1cea68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cea68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea6c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CEA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CEA74u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CEA6Cu, 0x1CEA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA74u;
label_1cea74:
    // 0x1cea74: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1cea74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1cea78: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CEA78u;
    SET_GPR_U32(ctx, 31, 0x1CEA80u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CEA78u, 0x1CEA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA80u;
label_1cea80:
    // 0x1cea80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cea84: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CEA84u;
    SET_GPR_U32(ctx, 31, 0x1CEA8Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CEA84u, 0x1CEA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEA8Cu;
label_1cea8c:
    // 0x1cea8c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1cea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1cea90: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1cea90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1cea94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEA94u;
    {
        const bool branch_taken_0x1cea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cea94) {
            ctx->pc = 0x1CEAACu;
            goto label_1ceaac;
        }
    }
    ctx->pc = 0x1CEA9Cu;
label_1cea9c:
    // 0x1cea9c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1cea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1ceaa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ceaa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ceaa4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ceaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ceaa8: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1ceaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
label_1ceaac:
    // 0x1ceaac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1ceaacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ceab0: 0x278596e4  addiu       $a1, $gp, -0x691C
    ctx->pc = 0x1ceab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940388));
    // 0x1ceab4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1CEAB4u;
    SET_GPR_U32(ctx, 31, 0x1CEABCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1CEAB4u, 0x1CEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEABCu;
label_1ceabc:
    // 0x1ceabc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ceabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceac0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1ceac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ceac4: 0xc05c618  jal         func_171860
    ctx->pc = 0x1CEAC4u;
    SET_GPR_U32(ctx, 31, 0x1CEACCu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1CEAC4u, 0x1CEACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEACCu;
label_1ceacc:
    // 0x1ceacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ceaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cead0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1cead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cead4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cead8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CEAD8u;
    SET_GPR_U32(ctx, 31, 0x1CEAE0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CEAD8u, 0x1CEAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAE0u;
label_1ceae0:
    // 0x1ceae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ceae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ceae4: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CEAE4u;
    {
        const bool branch_taken_0x1ceae4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ceae4) {
            ctx->pc = 0x1CEB24u;
            goto label_1ceb24;
        }
    }
    ctx->pc = 0x1CEAECu;
    // 0x1ceaec: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x1ceaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1ceaf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ceaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceaf4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1CEAF4u;
    SET_GPR_U32(ctx, 31, 0x1CEAFCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1CEAF4u, 0x1CEAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEAFCu;
label_1ceafc:
    // 0x1ceafc: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1ceafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1ceb00: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1CEB00u;
    SET_GPR_U32(ctx, 31, 0x1CEB08u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1CEB00u, 0x1CEB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB08u;
label_1ceb08:
    // 0x1ceb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ceb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceb0c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1CEB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB14u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1CEB0Cu, 0x1CEB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB14u;
label_1ceb14:
    // 0x1ceb14: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ceb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ceb18: 0xe440013c  swc1        $f0, 0x13C($v0)
    ctx->pc = 0x1ceb18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 316), bits); }
    // 0x1ceb1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1CEB1Cu;
    {
        const bool branch_taken_0x1ceb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb1c) {
            ctx->pc = 0x1CEB34u;
            goto label_1ceb34;
        }
    }
    ctx->pc = 0x1CEB24u;
label_1ceb24:
    // 0x1ceb24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ceb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ceb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ceb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ceb2c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ceb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ceb30: 0xe440013c  swc1        $f0, 0x13C($v0)
    ctx->pc = 0x1ceb30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 316), bits); }
label_1ceb34:
    // 0x1ceb34: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1ceb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1ceb38: 0x24847a30  addiu       $a0, $a0, 0x7A30
    ctx->pc = 0x1ceb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31280));
    // 0x1ceb3c: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1CEB3Cu;
    SET_GPR_U32(ctx, 31, 0x1CEB44u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1CEB3Cu, 0x1CEB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB44u;
label_1ceb44:
    // 0x1ceb44: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x1ceb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ceb48: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1ceb48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1ceb4c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ceb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ceb50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ceb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ceb54: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1CEB54u;
    SET_GPR_U32(ctx, 31, 0x1CEB5Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1CEB54u, 0x1CEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEB5Cu;
label_1ceb5c:
    // 0x1ceb5c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1ceb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ceb60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ceb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceb64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ceb64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceb68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ceb68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ceb6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1ceb6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ceb70: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEB78u;
    // 0x1ceb78: 0x0  nop
    ctx->pc = 0x1ceb78u;
    // NOP
    // 0x1ceb7c: 0x0  nop
    ctx->pc = 0x1ceb7cu;
    // NOP
    // 0x1ceb80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ceb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ceb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ceb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ceb88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ceb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ceb8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1ceb8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1ceb90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ceb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceb94: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1CEB94u;
    {
        const bool branch_taken_0x1ceb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb94) {
            ctx->pc = 0x1CECBCu;
            goto label_1cecbc;
        }
    }
    ctx->pc = 0x1CEB9Cu;
    // 0x1ceb9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1ceba0: 0x24634ac0  addiu       $v1, $v1, 0x4AC0
    ctx->pc = 0x1ceba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19136));
    // 0x1ceba4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ceba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ceba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ceba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1cebac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebb0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1cebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1cebb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEBB4u;
    {
        const bool branch_taken_0x1cebb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebb4) {
            ctx->pc = 0x1CEBD8u;
            goto label_1cebd8;
        }
    }
    ctx->pc = 0x1CEBBCu;
    // 0x1cebbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebc0: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x1cebc4: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1cebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1cebc8: 0xc073b34  jal         func_1CECD0
    ctx->pc = 0x1CEBC8u;
    SET_GPR_U32(ctx, 31, 0x1CEBD0u);
    ctx->pc = 0x1CECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECD0u, 0x1CEBC8u, 0x1CEBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBD0u;
label_1cebd0:
    // 0x1cebd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebd4: 0xac4000a4  sw          $zero, 0xA4($v0)
    ctx->pc = 0x1cebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 0));
label_1cebd8:
    // 0x1cebd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebdc: 0x8c420154  lw          $v0, 0x154($v0)
    ctx->pc = 0x1cebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1cebe0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEBE0u;
    {
        const bool branch_taken_0x1cebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebe0) {
            ctx->pc = 0x1CEC04u;
            goto label_1cec04;
        }
    }
    ctx->pc = 0x1CEBE8u;
    // 0x1cebe8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cebec: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x1cebecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x1cebf0: 0x8c450154  lw          $a1, 0x154($v0)
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    // 0x1cebf4: 0xc073b34  jal         func_1CECD0
    ctx->pc = 0x1CEBF4u;
    SET_GPR_U32(ctx, 31, 0x1CEBFCu);
    ctx->pc = 0x1CECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECD0u, 0x1CEBF4u, 0x1CEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEBFCu;
label_1cebfc:
    // 0x1cebfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec00: 0xac400154  sw          $zero, 0x154($v0)
    ctx->pc = 0x1cec00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 0));
label_1cec04:
    // 0x1cec04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec08: 0x8c440158  lw          $a0, 0x158($v0)
    ctx->pc = 0x1cec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 344)));
    // 0x1cec0c: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x1CEC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC14u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x1CEC0Cu, 0x1CEC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC14u;
label_1cec14:
    // 0x1cec14: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1cec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1cec18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cec18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cec1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cec1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec20: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1CEC20u;
    SET_GPR_U32(ctx, 31, 0x1CEC28u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1CEC20u, 0x1CEC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC28u;
label_1cec28:
    // 0x1cec28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cec28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec2c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1cec2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cec30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cec30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cec34: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1CEC34u;
    SET_GPR_U32(ctx, 31, 0x1CEC3Cu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1CEC34u, 0x1CEC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC3Cu;
label_1cec3c:
    // 0x1cec3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec40: 0x24440148  addiu       $a0, $v0, 0x148
    ctx->pc = 0x1cec40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x1cec44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cec44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cec48: 0xc05ee30  jal         func_17B8C0
    ctx->pc = 0x1CEC48u;
    SET_GPR_U32(ctx, 31, 0x1CEC50u);
    ctx->pc = 0x17B8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8C0u, 0x1CEC48u, 0x1CEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC50u;
label_1cec50:
    // 0x1cec50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec54: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x1cec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x1cec58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cec58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cec5c: 0xc048004  jal         func_120010
    ctx->pc = 0x1CEC5Cu;
    SET_GPR_U32(ctx, 31, 0x1CEC64u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x1CEC5Cu, 0x1CEC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC64u;
label_1cec64:
    // 0x1cec64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec68: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x1cec6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cec6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cec70: 0xc06877c  jal         func_1A1DF0
    ctx->pc = 0x1CEC70u;
    SET_GPR_U32(ctx, 31, 0x1CEC78u);
    ctx->pc = 0x1A1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DF0u, 0x1CEC70u, 0x1CEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC78u;
label_1cec78:
    // 0x1cec78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec7c: 0x244400a8  addiu       $a0, $v0, 0xA8
    ctx->pc = 0x1cec7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 168));
    // 0x1cec80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cec80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cec84: 0xc0acafc  jal         func_2B2BF0
    ctx->pc = 0x1CEC84u;
    SET_GPR_U32(ctx, 31, 0x1CEC8Cu);
    ctx->pc = 0x2B2BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2BF0u, 0x1CEC84u, 0x1CEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC8Cu;
label_1cec8c:
    // 0x1cec8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cec90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cec94: 0xc064970  jal         func_1925C0
    ctx->pc = 0x1CEC94u;
    SET_GPR_U32(ctx, 31, 0x1CEC9Cu);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x1CEC94u, 0x1CEC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC9Cu;
label_1cec9c:
    // 0x1cec9c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1cec9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ceca0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ceca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ceca4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ceca4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ceca8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CECA8u;
    {
        const bool branch_taken_0x1ceca8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ceca8) {
            ctx->pc = 0x1CECBCu;
            goto label_1cecbc;
        }
    }
    ctx->pc = 0x1CECB0u;
    // 0x1cecb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cecb4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1CECB4u;
    SET_GPR_U32(ctx, 31, 0x1CECBCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1CECB4u, 0x1CECBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CECBCu;
label_1cecbc:
    // 0x1cecbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cecbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cecc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cecc4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cecc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cecc8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CECC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CECC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CECD0u;
}
