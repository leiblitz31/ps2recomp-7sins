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

// Function: sub_001DD0E0
// Address: 0x1dd0e0 - 0x1dd2d0
void sub_001DD0E0_0x1dd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD0E0_0x1dd0e0");
#endif

    switch (ctx->pc) {
        case 0x1dd100u: goto label_1dd100;
        case 0x1dd110u: goto label_1dd110;
        case 0x1dd120u: goto label_1dd120;
        case 0x1dd144u: goto label_1dd144;
        case 0x1dd164u: goto label_1dd164;
        case 0x1dd184u: goto label_1dd184;
        case 0x1dd1a4u: goto label_1dd1a4;
        case 0x1dd1bcu: goto label_1dd1bc;
        case 0x1dd1d4u: goto label_1dd1d4;
        case 0x1dd1e4u: goto label_1dd1e4;
        case 0x1dd1fcu: goto label_1dd1fc;
        case 0x1dd20cu: goto label_1dd20c;
        case 0x1dd224u: goto label_1dd224;
        case 0x1dd234u: goto label_1dd234;
        case 0x1dd24cu: goto label_1dd24c;
        case 0x1dd25cu: goto label_1dd25c;
        case 0x1dd274u: goto label_1dd274;
        case 0x1dd28cu: goto label_1dd28c;
        default: break;
    }

    ctx->pc = 0x1dd0e0u;

    // 0x1dd0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dd0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dd0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dd0ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1dd0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1dd0f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0f4: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x1dd0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x1dd0f8: 0xc056254  jal         func_158950
    ctx->pc = 0x1DD0F8u;
    SET_GPR_U32(ctx, 31, 0x1DD100u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1DD0F8u, 0x1DD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD100u;
label_1dd100:
    // 0x1dd100: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd104: 0x24440084  addiu       $a0, $v0, 0x84
    ctx->pc = 0x1dd104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x1dd108: 0xc056254  jal         func_158950
    ctx->pc = 0x1DD108u;
    SET_GPR_U32(ctx, 31, 0x1DD110u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1DD108u, 0x1DD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD110u;
label_1dd110:
    // 0x1dd110: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd114: 0x24440090  addiu       $a0, $v0, 0x90
    ctx->pc = 0x1dd114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1dd118: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1DD118u;
    SET_GPR_U32(ctx, 31, 0x1DD120u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1DD118u, 0x1DD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD120u;
label_1dd120:
    // 0x1dd120: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1dd120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd124: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd128: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dd128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dd12c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd130: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd134: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dd134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dd138: 0x24a57f90  addiu       $a1, $a1, 0x7F90
    ctx->pc = 0x1dd138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32656));
    // 0x1dd13c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DD13Cu;
    SET_GPR_U32(ctx, 31, 0x1DD144u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DD13Cu, 0x1DD144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD144u;
label_1dd144:
    // 0x1dd144: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd148: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x1dd148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x1dd14c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd150: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd154: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dd154u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dd158: 0x24a57fa8  addiu       $a1, $a1, 0x7FA8
    ctx->pc = 0x1dd158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32680));
    // 0x1dd15c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DD15Cu;
    SET_GPR_U32(ctx, 31, 0x1DD164u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DD15Cu, 0x1DD164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD164u;
label_1dd164:
    // 0x1dd164: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd168: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1dd168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1dd16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd170: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd174: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dd174u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dd178: 0x24a57fc0  addiu       $a1, $a1, 0x7FC0
    ctx->pc = 0x1dd178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32704));
    // 0x1dd17c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DD17Cu;
    SET_GPR_U32(ctx, 31, 0x1DD184u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DD17Cu, 0x1DD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD184u;
label_1dd184:
    // 0x1dd184: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd188: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x1dd188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
    // 0x1dd18c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd190: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd194: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1dd194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1dd198: 0x24a57fd0  addiu       $a1, $a1, 0x7FD0
    ctx->pc = 0x1dd198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32720));
    // 0x1dd19c: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x1DD19Cu;
    SET_GPR_U32(ctx, 31, 0x1DD1A4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x1DD19Cu, 0x1DD1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1A4u;
label_1dd1a4:
    // 0x1dd1a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1a8: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1dd1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1dd1ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd1b4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD1B4u;
    SET_GPR_U32(ctx, 31, 0x1DD1BCu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD1B4u, 0x1DD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1BCu;
label_1dd1bc:
    // 0x1dd1bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1c0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dd1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dd1c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd1c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1cc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD1CCu;
    SET_GPR_U32(ctx, 31, 0x1DD1D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD1CCu, 0x1DD1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1D4u;
label_1dd1d4:
    // 0x1dd1d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1d8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd1dc: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD1DCu;
    SET_GPR_U32(ctx, 31, 0x1DD1E4u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD1DCu, 0x1DD1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1E4u;
label_1dd1e4:
    // 0x1dd1e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd1e8: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dd1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dd1ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd1f4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD1F4u;
    SET_GPR_U32(ctx, 31, 0x1DD1FCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD1F4u, 0x1DD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD1FCu;
label_1dd1fc:
    // 0x1dd1fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd200: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd204: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD204u;
    SET_GPR_U32(ctx, 31, 0x1DD20Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD204u, 0x1DD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD20Cu;
label_1dd20c:
    // 0x1dd20c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd210: 0x8c650020  lw          $a1, 0x20($v1)
    ctx->pc = 0x1dd210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1dd214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd21c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD21Cu;
    SET_GPR_U32(ctx, 31, 0x1DD224u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD21Cu, 0x1DD224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD224u;
label_1dd224:
    // 0x1dd224: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd228: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd22c: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD22Cu;
    SET_GPR_U32(ctx, 31, 0x1DD234u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD22Cu, 0x1DD234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD234u;
label_1dd234:
    // 0x1dd234: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd238: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x1dd238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1dd23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dd240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd244: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1DD244u;
    SET_GPR_U32(ctx, 31, 0x1DD24Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1DD244u, 0x1DD24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD24Cu;
label_1dd24c:
    // 0x1dd24c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd250: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dd250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dd254: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DD254u;
    SET_GPR_U32(ctx, 31, 0x1DD25Cu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DD254u, 0x1DD25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD25Cu;
label_1dd25c:
    // 0x1dd25c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd260: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x1dd260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1dd264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dd264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd268: 0xc78c81a0  lwc1        $f12, -0x7E60($gp)
    ctx->pc = 0x1dd268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1dd26c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1DD26Cu;
    SET_GPR_U32(ctx, 31, 0x1DD274u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1DD26Cu, 0x1DD274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD274u;
label_1dd274:
    // 0x1dd274: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd27c: 0x246400ac  addiu       $a0, $v1, 0xAC
    ctx->pc = 0x1dd27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
    // 0x1dd280: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x1dd280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1dd284: 0xc11c208  jal         func_470820
    ctx->pc = 0x1DD284u;
    SET_GPR_U32(ctx, 31, 0x1DD28Cu);
    ctx->pc = 0x470820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470820u, 0x1DD284u, 0x1DD28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD28Cu;
label_1dd28c:
    // 0x1dd28c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd290: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x1dd290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x1dd294: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd298: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1dd298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd29c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dd29cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dd2a0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1dd2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x1dd2a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dd2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd2a8: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1dd2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1dd2ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1dd2acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dd2b0: 0xc46000b0  lwc1        $f0, 0xB0($v1)
    ctx->pc = 0x1dd2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dd2b4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1dd2b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1dd2b8: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x1dd2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
    // 0x1dd2bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dd2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd2c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd2c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1dd2c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1dd2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD2D0u;
}
