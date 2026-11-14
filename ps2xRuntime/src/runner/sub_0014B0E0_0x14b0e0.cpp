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

// Function: sub_0014B0E0
// Address: 0x14b0e0 - 0x14b3b0
void sub_0014B0E0_0x14b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B0E0_0x14b0e0");
#endif

    switch (ctx->pc) {
        case 0x14b100u: goto label_14b100;
        case 0x14b114u: goto label_14b114;
        case 0x14b124u: goto label_14b124;
        case 0x14b12cu: goto label_14b12c;
        case 0x14b138u: goto label_14b138;
        case 0x14b150u: goto label_14b150;
        case 0x14b164u: goto label_14b164;
        case 0x14b174u: goto label_14b174;
        case 0x14b188u: goto label_14b188;
        case 0x14b198u: goto label_14b198;
        case 0x14b1acu: goto label_14b1ac;
        case 0x14b1c0u: goto label_14b1c0;
        case 0x14b1e0u: goto label_14b1e0;
        case 0x14b1f4u: goto label_14b1f4;
        case 0x14b204u: goto label_14b204;
        case 0x14b220u: goto label_14b220;
        case 0x14b230u: goto label_14b230;
        case 0x14b238u: goto label_14b238;
        case 0x14b244u: goto label_14b244;
        case 0x14b258u: goto label_14b258;
        case 0x14b26cu: goto label_14b26c;
        case 0x14b27cu: goto label_14b27c;
        case 0x14b290u: goto label_14b290;
        case 0x14b2a4u: goto label_14b2a4;
        case 0x14b2b4u: goto label_14b2b4;
        case 0x14b2bcu: goto label_14b2bc;
        case 0x14b2c8u: goto label_14b2c8;
        case 0x14b2e4u: goto label_14b2e4;
        case 0x14b300u: goto label_14b300;
        case 0x14b318u: goto label_14b318;
        case 0x14b32cu: goto label_14b32c;
        case 0x14b33cu: goto label_14b33c;
        case 0x14b350u: goto label_14b350;
        case 0x14b364u: goto label_14b364;
        case 0x14b378u: goto label_14b378;
        case 0x14b388u: goto label_14b388;
        default: break;
    }

    ctx->pc = 0x14b0e0u;

    // 0x14b0e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14b0e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14b0e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14b0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14b0ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14b0f0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x14b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x14b0f4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b0f8: 0xc052e0c  jal         func_14B830
    ctx->pc = 0x14B0F8u;
    SET_GPR_U32(ctx, 31, 0x14B100u);
    ctx->pc = 0x14B830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B830u, 0x14B0F8u, 0x14B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B100u;
label_14b100:
    // 0x14b100: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b104: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x14b104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x14b108: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x14b108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14b10c: 0xc047038  jal         func_11C0E0
    ctx->pc = 0x14B10Cu;
    SET_GPR_U32(ctx, 31, 0x14B114u);
    ctx->pc = 0x11C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0E0u, 0x14B10Cu, 0x14B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B114u;
label_14b114:
    // 0x14b114: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b118: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x14b118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x14b11c: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14B11Cu;
    SET_GPR_U32(ctx, 31, 0x14B124u);
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14B11Cu, 0x14B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B124u;
label_14b124:
    // 0x14b124: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14B124u;
    {
        const bool branch_taken_0x14b124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b124) {
            ctx->pc = 0x14B1E0u;
            goto label_14b1e0;
        }
    }
    ctx->pc = 0x14B12Cu;
label_14b12c:
    // 0x14b12c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b130: 0xc052e00  jal         func_14B800
    ctx->pc = 0x14B130u;
    SET_GPR_U32(ctx, 31, 0x14B138u);
    ctx->pc = 0x14B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B800u, 0x14B130u, 0x14B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B138u;
label_14b138:
    // 0x14b138: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x14b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b13c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x14b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b140: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x14b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14b144: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14b144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b148: 0xc052d98  jal         func_14B660
    ctx->pc = 0x14B148u;
    SET_GPR_U32(ctx, 31, 0x14B150u);
    ctx->pc = 0x14B660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B660u, 0x14B148u, 0x14B150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B150u;
label_14b150:
    // 0x14b150: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b154: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x14b154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x14b158: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x14b158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14b15c: 0xc046fcc  jal         func_11BF30
    ctx->pc = 0x14B15Cu;
    SET_GPR_U32(ctx, 31, 0x14B164u);
    ctx->pc = 0x11BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF30u, 0x14B15Cu, 0x14B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B164u;
label_14b164:
    // 0x14b164: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x14b164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b168: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x14b168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x14b16c: 0xc041998  jal         func_106660
    ctx->pc = 0x14B16Cu;
    SET_GPR_U32(ctx, 31, 0x14B174u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14B16Cu, 0x14B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B174u;
label_14b174:
    // 0x14b174: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x14B174u;
    {
        const bool branch_taken_0x14b174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b174) {
            ctx->pc = 0x14B1C8u;
            goto label_14b1c8;
        }
    }
    ctx->pc = 0x14B17Cu;
    // 0x14b17c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x14b17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b180: 0xc052e00  jal         func_14B800
    ctx->pc = 0x14B180u;
    SET_GPR_U32(ctx, 31, 0x14B188u);
    ctx->pc = 0x14B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B800u, 0x14B180u, 0x14B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B188u;
label_14b188:
    // 0x14b188: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x14b188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14b18c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b18cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b190: 0xc052e00  jal         func_14B800
    ctx->pc = 0x14B190u;
    SET_GPR_U32(ctx, 31, 0x14B198u);
    ctx->pc = 0x14B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B800u, 0x14B190u, 0x14B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B198u;
label_14b198:
    // 0x14b198: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x14b198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x14b19c: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x14b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x14b1a0: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x14b1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x14b1a4: 0xc052b1c  jal         func_14AC70
    ctx->pc = 0x14B1A4u;
    SET_GPR_U32(ctx, 31, 0x14B1ACu);
    ctx->pc = 0x14AC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AC70u, 0x14B1A4u, 0x14B1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1ACu;
label_14b1ac:
    // 0x14b1ac: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x14b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b1b0: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x14b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x14b1b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b1b8: 0xc052d5c  jal         func_14B570
    ctx->pc = 0x14B1B8u;
    SET_GPR_U32(ctx, 31, 0x14B1C0u);
    ctx->pc = 0x14B570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B570u, 0x14B1B8u, 0x14B1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1C0u;
label_14b1c0:
    // 0x14b1c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B1C0u;
    {
        const bool branch_taken_0x14b1c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b1c0) {
            ctx->pc = 0x14B1D4u;
            goto label_14b1d4;
        }
    }
    ctx->pc = 0x14B1C8u;
label_14b1c8:
    // 0x14b1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14b1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14b1cc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b1d0: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x14b1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_14b1d4:
    // 0x14b1d4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b1d8: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x14B1D8u;
    SET_GPR_U32(ctx, 31, 0x14B1E0u);
    ctx->pc = 0x14B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B530u, 0x14B1D8u, 0x14B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1E0u;
label_14b1e0:
    // 0x14b1e0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b1e4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14b1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14b1e8: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x14b1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x14b1ec: 0xc046fcc  jal         func_11BF30
    ctx->pc = 0x14B1ECu;
    SET_GPR_U32(ctx, 31, 0x14B1F4u);
    ctx->pc = 0x11BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF30u, 0x14B1ECu, 0x14B1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B1F4u;
label_14b1f4:
    // 0x14b1f4: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b1f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x14b1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14b1fc: 0xc041998  jal         func_106660
    ctx->pc = 0x14B1FCu;
    SET_GPR_U32(ctx, 31, 0x14B204u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14B1FCu, 0x14B204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B204u;
label_14b204:
    // 0x14b204: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x14B204u;
    {
        const bool branch_taken_0x14b204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b204) {
            ctx->pc = 0x14B12Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b12c;
        }
    }
    ctx->pc = 0x14B20Cu;
    // 0x14b20c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b210: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x14b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x14b214: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x14b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14b218: 0xc047038  jal         func_11C0E0
    ctx->pc = 0x14B218u;
    SET_GPR_U32(ctx, 31, 0x14B220u);
    ctx->pc = 0x11C0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0E0u, 0x14B218u, 0x14B220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B220u;
label_14b220:
    // 0x14b220: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b224: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x14b224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x14b228: 0xc052ae4  jal         func_14AB90
    ctx->pc = 0x14B228u;
    SET_GPR_U32(ctx, 31, 0x14B230u);
    ctx->pc = 0x14AB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AB90u, 0x14B228u, 0x14B230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B230u;
label_14b230:
    // 0x14b230: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14B230u;
    {
        const bool branch_taken_0x14b230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b230) {
            ctx->pc = 0x14B258u;
            goto label_14b258;
        }
    }
    ctx->pc = 0x14B238u;
label_14b238:
    // 0x14b238: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b23c: 0xc052e00  jal         func_14B800
    ctx->pc = 0x14B23Cu;
    SET_GPR_U32(ctx, 31, 0x14B244u);
    ctx->pc = 0x14B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B800u, 0x14B23Cu, 0x14B244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B244u;
label_14b244:
    // 0x14b244: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14b244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14b248: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14b248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14b24c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b250: 0xc052d4c  jal         func_14B530
    ctx->pc = 0x14B250u;
    SET_GPR_U32(ctx, 31, 0x14B258u);
    ctx->pc = 0x14B530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B530u, 0x14B250u, 0x14B258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B258u;
label_14b258:
    // 0x14b258: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b25c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x14b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x14b260: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x14b260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14b264: 0xc046fcc  jal         func_11BF30
    ctx->pc = 0x14B264u;
    SET_GPR_U32(ctx, 31, 0x14B26Cu);
    ctx->pc = 0x11BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BF30u, 0x14B264u, 0x14B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B26Cu;
label_14b26c:
    // 0x14b26c: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x14b26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x14b270: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x14b270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x14b274: 0xc041998  jal         func_106660
    ctx->pc = 0x14B274u;
    SET_GPR_U32(ctx, 31, 0x14B27Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14B274u, 0x14B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B27Cu;
label_14b27c:
    // 0x14b27c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14B27Cu;
    {
        const bool branch_taken_0x14b27c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b27c) {
            ctx->pc = 0x14B238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b238;
        }
    }
    ctx->pc = 0x14B284u;
    // 0x14b284: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x14b284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b288: 0xc052a9c  jal         func_14AA70
    ctx->pc = 0x14B288u;
    SET_GPR_U32(ctx, 31, 0x14B290u);
    ctx->pc = 0x14AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AA70u, 0x14B288u, 0x14B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B290u;
label_14b290:
    // 0x14b290: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b294: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x14b294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x14b298: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14b298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14b29c: 0xc052a7c  jal         func_14A9F0
    ctx->pc = 0x14B29Cu;
    SET_GPR_U32(ctx, 31, 0x14B2A4u);
    ctx->pc = 0x14A9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9F0u, 0x14B29Cu, 0x14B2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2A4u;
label_14b2a4:
    // 0x14b2a4: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x14b2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b2a8: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x14b2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x14b2ac: 0xc052a6c  jal         func_14A9B0
    ctx->pc = 0x14B2ACu;
    SET_GPR_U32(ctx, 31, 0x14B2B4u);
    ctx->pc = 0x14A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9B0u, 0x14B2ACu, 0x14B2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2B4u;
label_14b2b4:
    // 0x14b2b4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14B2B4u;
    {
        const bool branch_taken_0x14b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b2b4) {
            ctx->pc = 0x14B364u;
            goto label_14b364;
        }
    }
    ctx->pc = 0x14B2BCu;
label_14b2bc:
    // 0x14b2bc: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x14b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b2c0: 0xc052a58  jal         func_14A960
    ctx->pc = 0x14B2C0u;
    SET_GPR_U32(ctx, 31, 0x14B2C8u);
    ctx->pc = 0x14A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A960u, 0x14B2C0u, 0x14B2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2C8u;
label_14b2c8:
    // 0x14b2c8: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x14b2c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x14b2cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14b2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14b2d0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14B2D0u;
    {
        const bool branch_taken_0x14b2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b2d0) {
            ctx->pc = 0x14B358u;
            goto label_14b358;
        }
    }
    ctx->pc = 0x14B2D8u;
    // 0x14b2d8: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x14b2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b2dc: 0xc052a58  jal         func_14A960
    ctx->pc = 0x14B2DCu;
    SET_GPR_U32(ctx, 31, 0x14B2E4u);
    ctx->pc = 0x14A960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A960u, 0x14B2DCu, 0x14B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B2E4u;
label_14b2e4:
    // 0x14b2e4: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x14b2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14b2e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b2ec: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B2ECu;
    {
        const bool branch_taken_0x14b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b2ec) {
            ctx->pc = 0x14B300u;
            goto label_14b300;
        }
    }
    ctx->pc = 0x14B2F4u;
    // 0x14b2f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14b2f8: 0xc0e20da  jal         func_388368
    ctx->pc = 0x14B2F8u;
    SET_GPR_U32(ctx, 31, 0x14B300u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x14B2F8u, 0x14B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B300u;
label_14b300:
    // 0x14b300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x14b300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14b304: 0x10020004  beq         $zero, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B304u;
    {
        const bool branch_taken_0x14b304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x14b304) {
            ctx->pc = 0x14B318u;
            goto label_14b318;
        }
    }
    ctx->pc = 0x14B30Cu;
    // 0x14b30c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14b310: 0xc0e20da  jal         func_388368
    ctx->pc = 0x14B310u;
    SET_GPR_U32(ctx, 31, 0x14B318u);
    ctx->pc = 0x388368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388368u, 0x14B310u, 0x14B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B318u;
label_14b318:
    // 0x14b318: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x14b318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b31c: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x14b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b320: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14b320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b324: 0xc052d34  jal         func_14B4D0
    ctx->pc = 0x14B324u;
    SET_GPR_U32(ctx, 31, 0x14B32Cu);
    ctx->pc = 0x14B4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4D0u, 0x14B324u, 0x14B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B32Cu;
label_14b32c:
    // 0x14b32c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14b330: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14b334: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x14B334u;
    SET_GPR_U32(ctx, 31, 0x14B33Cu);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x14B334u, 0x14B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B33Cu;
label_14b33c:
    // 0x14b33c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x14b33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b340: 0x24640028  addiu       $a0, $v1, 0x28
    ctx->pc = 0x14b340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x14b344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14b344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b348: 0xc052cec  jal         func_14B3B0
    ctx->pc = 0x14B348u;
    SET_GPR_U32(ctx, 31, 0x14B350u);
    ctx->pc = 0x14B3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B3B0u, 0x14B348u, 0x14B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B350u;
label_14b350:
    // 0x14b350: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14B350u;
    {
        const bool branch_taken_0x14b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b350) {
            ctx->pc = 0x14B364u;
            goto label_14b364;
        }
    }
    ctx->pc = 0x14B358u;
label_14b358:
    // 0x14b358: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x14b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b35c: 0xc052a48  jal         func_14A920
    ctx->pc = 0x14B35Cu;
    SET_GPR_U32(ctx, 31, 0x14B364u);
    ctx->pc = 0x14A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A920u, 0x14B35Cu, 0x14B364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B364u;
label_14b364:
    // 0x14b364: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x14b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14b368: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x14b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14b36c: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x14b36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x14b370: 0xc052a1c  jal         func_14A870
    ctx->pc = 0x14B370u;
    SET_GPR_U32(ctx, 31, 0x14B378u);
    ctx->pc = 0x14A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A870u, 0x14B370u, 0x14B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B378u;
label_14b378:
    // 0x14b378: 0x27a40064  addiu       $a0, $sp, 0x64
    ctx->pc = 0x14b378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x14b37c: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x14b37cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x14b380: 0xc041998  jal         func_106660
    ctx->pc = 0x14B380u;
    SET_GPR_U32(ctx, 31, 0x14B388u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x14B380u, 0x14B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B388u;
label_14b388:
    // 0x14b388: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x14B388u;
    {
        const bool branch_taken_0x14b388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b388) {
            ctx->pc = 0x14B2BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14b2bc;
        }
    }
    ctx->pc = 0x14B390u;
    // 0x14b390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14b390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14b398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14b398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b39c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x14b39cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14b3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x14B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B3A8u;
    // 0x14b3a8: 0x0  nop
    ctx->pc = 0x14b3a8u;
    // NOP
    // 0x14b3ac: 0x0  nop
    ctx->pc = 0x14b3acu;
    // NOP
    ctx->pc = 0x14b3b0u;
}
