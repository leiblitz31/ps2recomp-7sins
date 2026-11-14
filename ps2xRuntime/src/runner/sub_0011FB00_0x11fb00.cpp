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

// Function: sub_0011FB00
// Address: 0x11fb00 - 0x120010
void sub_0011FB00_0x11fb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011FB00_0x11fb00");
#endif

    switch (ctx->pc) {
        case 0x11fb4cu: goto label_11fb4c;
        case 0x11fb58u: goto label_11fb58;
        case 0x11fb68u: goto label_11fb68;
        case 0x11fb84u: goto label_11fb84;
        case 0x11fbb4u: goto label_11fbb4;
        case 0x11fbc0u: goto label_11fbc0;
        case 0x11fbd8u: goto label_11fbd8;
        case 0x11fbf4u: goto label_11fbf4;
        case 0x11fc08u: goto label_11fc08;
        case 0x11fc18u: goto label_11fc18;
        case 0x11fc30u: goto label_11fc30;
        case 0x11fc44u: goto label_11fc44;
        case 0x11fc58u: goto label_11fc58;
        case 0x11fc70u: goto label_11fc70;
        case 0x11fc84u: goto label_11fc84;
        case 0x11fc94u: goto label_11fc94;
        case 0x11fca8u: goto label_11fca8;
        case 0x11fcc4u: goto label_11fcc4;
        case 0x11fcccu: goto label_11fccc;
        case 0x11fce8u: goto label_11fce8;
        case 0x11fd14u: goto label_11fd14;
        case 0x11fd2cu: goto label_11fd2c;
        case 0x11fd40u: goto label_11fd40;
        case 0x11fd58u: goto label_11fd58;
        case 0x11fd64u: goto label_11fd64;
        case 0x11fd70u: goto label_11fd70;
        case 0x11fd80u: goto label_11fd80;
        case 0x11fd90u: goto label_11fd90;
        case 0x11fda4u: goto label_11fda4;
        case 0x11fdbcu: goto label_11fdbc;
        case 0x11fdd8u: goto label_11fdd8;
        case 0x11fdf8u: goto label_11fdf8;
        case 0x11fe10u: goto label_11fe10;
        case 0x11fe20u: goto label_11fe20;
        case 0x11fe30u: goto label_11fe30;
        case 0x11fe40u: goto label_11fe40;
        case 0x11fe4cu: goto label_11fe4c;
        case 0x11fe58u: goto label_11fe58;
        case 0x11fe6cu: goto label_11fe6c;
        case 0x11fe98u: goto label_11fe98;
        case 0x11fed0u: goto label_11fed0;
        case 0x11fef4u: goto label_11fef4;
        case 0x11ff10u: goto label_11ff10;
        case 0x11ff4cu: goto label_11ff4c;
        case 0x11ff64u: goto label_11ff64;
        case 0x11ff70u: goto label_11ff70;
        case 0x11ff84u: goto label_11ff84;
        case 0x11ff98u: goto label_11ff98;
        case 0x11ffa4u: goto label_11ffa4;
        case 0x11ffb8u: goto label_11ffb8;
        case 0x11ffc8u: goto label_11ffc8;
        case 0x11ffd4u: goto label_11ffd4;
        default: break;
    }

    ctx->pc = 0x11fb00u;

    // 0x11fb00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x11fb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x11fb04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x11fb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x11fb08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x11fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x11fb0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x11fb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x11fb10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x11fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x11fb14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x11fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x11fb18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11fb1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x11fb20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11fb24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11fb28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11fb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11fb2c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x11fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x11fb30: 0x90420028  lbu         $v0, 0x28($v0)
    ctx->pc = 0x11fb30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11fb34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11fb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11fb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fb3c: 0x1462005c  bne         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x11FB3Cu;
    {
        const bool branch_taken_0x11fb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fb3c) {
            ctx->pc = 0x11FCB0u;
            goto label_11fcb0;
        }
    }
    ctx->pc = 0x11FB44u;
    // 0x11fb44: 0xc090864  jal         func_242190
    ctx->pc = 0x11FB44u;
    SET_GPR_U32(ctx, 31, 0x11FB4Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x11FB44u, 0x11FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB4Cu;
label_11fb4c:
    // 0x11fb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb50: 0xc090590  jal         func_241640
    ctx->pc = 0x11FB50u;
    SET_GPR_U32(ctx, 31, 0x11FB58u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x11FB50u, 0x11FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB58u;
label_11fb58:
    // 0x11fb58: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x11fb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x11fb5c: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x11fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x11fb60: 0xc091574  jal         func_2455D0
    ctx->pc = 0x11FB60u;
    SET_GPR_U32(ctx, 31, 0x11FB68u);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x11FB60u, 0x11FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB68u;
label_11fb68:
    // 0x11fb68: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x11fb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x11fb6c: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x11fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x11fb70: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x11fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x11fb74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11fb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fb78: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fb7c: 0xc0529b8  jal         func_14A6E0
    ctx->pc = 0x11FB7Cu;
    SET_GPR_U32(ctx, 31, 0x11FB84u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x11FB7Cu, 0x11FB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FB84u;
label_11fb84:
    // 0x11fb84: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x11fb88: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11fb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fb8c: 0xa0430024  sb          $v1, 0x24($v0)
    ctx->pc = 0x11fb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 3));
    // 0x11fb90: 0x240300f4  addiu       $v1, $zero, 0xF4
    ctx->pc = 0x11fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x11fb94: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fb98: 0xa0430025  sb          $v1, 0x25($v0)
    ctx->pc = 0x11fb98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 37), (uint8_t)GPR_U32(ctx, 3));
    // 0x11fb9c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x11fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11fba0: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x11fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fba4: 0xa0430026  sb          $v1, 0x26($v0)
    ctx->pc = 0x11fba4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x11fba8: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x11fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x11fbac: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x11FBACu;
    SET_GPR_U32(ctx, 31, 0x11FBB4u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x11FBACu, 0x11FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBB4u;
label_11fbb4:
    // 0x11fbb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11fbb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fbb8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11FBB8u;
    {
        const bool branch_taken_0x11fbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fbb8) {
            ctx->pc = 0x11FC88u;
            goto label_11fc88;
        }
    }
    ctx->pc = 0x11FBC0u;
label_11fbc0:
    // 0x11fbc0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x11fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11fbc4: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x11fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x11fbc8: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x11fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11fbcc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x11fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11fbd0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FBD0u;
    SET_GPR_U32(ctx, 31, 0x11FBD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FBD0u, 0x11FBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBD8u;
label_11fbd8:
    // 0x11fbd8: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x11fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x11fbdc: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x11fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x11fbe0: 0x10020028  beq         $zero, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x11FBE0u;
    {
        const bool branch_taken_0x11fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fbe0) {
            ctx->pc = 0x11FC84u;
            goto label_11fc84;
        }
    }
    ctx->pc = 0x11FBE8u;
    // 0x11fbe8: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x11fbec: 0xc094190  jal         func_250640
    ctx->pc = 0x11FBECu;
    SET_GPR_U32(ctx, 31, 0x11FBF4u);
    ctx->pc = 0x250640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250640u, 0x11FBECu, 0x11FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBF4u;
label_11fbf4:
    // 0x11fbf4: 0x10020023  beq         $zero, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x11FBF4u;
    {
        const bool branch_taken_0x11fbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fbf4) {
            ctx->pc = 0x11FC84u;
            goto label_11fc84;
        }
    }
    ctx->pc = 0x11FBFCu;
    // 0x11fbfc: 0x8fa400ec  lw          $a0, 0xEC($sp)
    ctx->pc = 0x11fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x11fc00: 0xc094190  jal         func_250640
    ctx->pc = 0x11FC00u;
    SET_GPR_U32(ctx, 31, 0x11FC08u);
    ctx->pc = 0x250640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250640u, 0x11FC00u, 0x11FC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC08u;
label_11fc08:
    // 0x11fc08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11fc10: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FC10u;
    SET_GPR_U32(ctx, 31, 0x11FC18u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FC10u, 0x11FC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC18u;
label_11fc18:
    // 0x11fc18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11fc18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc1c: 0x10110019  beq         $zero, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11FC1Cu;
    {
        const bool branch_taken_0x11fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x11fc1c) {
            ctx->pc = 0x11FC84u;
            goto label_11fc84;
        }
    }
    ctx->pc = 0x11FC24u;
    // 0x11fc24: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x11fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x11fc28: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x11FC28u;
    SET_GPR_U32(ctx, 31, 0x11FC30u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x11FC28u, 0x11FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC30u;
label_11fc30:
    // 0x11fc30: 0x10020014  beq         $zero, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11FC30u;
    {
        const bool branch_taken_0x11fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fc30) {
            ctx->pc = 0x11FC84u;
            goto label_11fc84;
        }
    }
    ctx->pc = 0x11FC38u;
    // 0x11fc38: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x11fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x11fc3c: 0xc0913ec  jal         func_244FB0
    ctx->pc = 0x11FC3Cu;
    SET_GPR_U32(ctx, 31, 0x11FC44u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x11FC3Cu, 0x11FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC44u;
label_11fc44:
    // 0x11fc44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc48: 0x24050562  addiu       $a1, $zero, 0x562
    ctx->pc = 0x11fc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1378));
    // 0x11fc4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fc4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc50: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x11FC50u;
    SET_GPR_U32(ctx, 31, 0x11FC58u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x11FC50u, 0x11FC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC58u;
label_11fc58:
    // 0x11fc58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc5c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FC5Cu;
    {
        const bool branch_taken_0x11fc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11fc5c) {
            ctx->pc = 0x11FC84u;
            goto label_11fc84;
        }
    }
    ctx->pc = 0x11FC64u;
    // 0x11fc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc68: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x11FC68u;
    SET_GPR_U32(ctx, 31, 0x11FC70u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x11FC68u, 0x11FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC70u;
label_11fc70:
    // 0x11fc70: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fc74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11fc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fc7c: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x11FC7Cu;
    SET_GPR_U32(ctx, 31, 0x11FC84u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x11FC7Cu, 0x11FC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC84u;
label_11fc84:
    // 0x11fc84: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x11fc84u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_11fc88:
    // 0x11fc88: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x11fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x11fc8c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x11FC8Cu;
    SET_GPR_U32(ctx, 31, 0x11FC94u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x11FC8Cu, 0x11FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FC94u;
label_11fc94:
    // 0x11fc94: 0x1682ffca  bne         $s4, $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x11FC94u;
    {
        const bool branch_taken_0x11fc94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fc94) {
            ctx->pc = 0x11FBC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FC9Cu;
    // 0x11fc9c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fca0: 0xc052c38  jal         func_14B0E0
    ctx->pc = 0x11FCA0u;
    SET_GPR_U32(ctx, 31, 0x11FCA8u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x11FCA0u, 0x11FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCA8u;
label_11fca8:
    // 0x11fca8: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x11FCA8u;
    {
        const bool branch_taken_0x11fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fca8) {
            ctx->pc = 0x11FFD4u;
            goto label_11ffd4;
        }
    }
    ctx->pc = 0x11FCB0u;
label_11fcb0:
    // 0x11fcb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x11fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x11fcb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x11fcb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11fcb8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11fcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11fcbc: 0xc0529b8  jal         func_14A6E0
    ctx->pc = 0x11FCBCu;
    SET_GPR_U32(ctx, 31, 0x11FCC4u);
    ctx->pc = 0x14A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A6E0u, 0x11FCBCu, 0x11FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCC4u;
label_11fcc4:
    // 0x11fcc4: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x11FCC4u;
    SET_GPR_U32(ctx, 31, 0x11FCCCu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x11FCC4u, 0x11FCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCCCu;
label_11fccc:
    // 0x11fccc: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x11fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x11fcd0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x11fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x11fcd4: 0x104000bc  beqz        $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x11FCD4u;
    {
        const bool branch_taken_0x11fcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fcd4) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FCDCu;
    // 0x11fcdc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x11fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x11fce0: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x11FCE0u;
    SET_GPR_U32(ctx, 31, 0x11FCE8u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x11FCE0u, 0x11FCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FCE8u;
label_11fce8:
    // 0x11fce8: 0x144000b7  bnez        $v0, . + 4 + (0xB7 << 2)
    ctx->pc = 0x11FCE8u;
    {
        const bool branch_taken_0x11fce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fce8) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FCF0u;
    // 0x11fcf0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x11fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x11fcf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11fcf8: 0x100200b3  beq         $zero, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x11FCF8u;
    {
        const bool branch_taken_0x11fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fcf8) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FD00u;
    // 0x11fd00: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x11fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x11fd04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11fd08: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11fd0c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FD0Cu;
    SET_GPR_U32(ctx, 31, 0x11FD14u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FD0Cu, 0x11FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD14u;
label_11fd14:
    // 0x11fd14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11fd14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd18: 0x101300ab  beq         $zero, $s3, . + 4 + (0xAB << 2)
    ctx->pc = 0x11FD18u;
    {
        const bool branch_taken_0x11fd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x11fd18) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FD20u;
    // 0x11fd20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd24: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x11FD24u;
    SET_GPR_U32(ctx, 31, 0x11FD2Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x11FD24u, 0x11FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD2Cu;
label_11fd2c:
    // 0x11fd2c: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x11FD2Cu;
    {
        const bool branch_taken_0x11fd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fd2c) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FD34u;
    // 0x11fd34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fd34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd38: 0xc0968bc  jal         func_25A2F0
    ctx->pc = 0x11FD38u;
    SET_GPR_U32(ctx, 31, 0x11FD40u);
    ctx->pc = 0x25A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2F0u, 0x11FD38u, 0x11FD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD40u;
label_11fd40:
    // 0x11fd40: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x11fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x11fd44: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x11fd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x11fd48: 0x10020024  beq         $zero, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x11FD48u;
    {
        const bool branch_taken_0x11fd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fd48) {
            ctx->pc = 0x11FDDCu;
            goto label_11fddc;
        }
    }
    ctx->pc = 0x11FD50u;
    // 0x11fd50: 0xc090864  jal         func_242190
    ctx->pc = 0x11FD50u;
    SET_GPR_U32(ctx, 31, 0x11FD58u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x11FD50u, 0x11FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD58u;
label_11fd58:
    // 0x11fd58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd5c: 0xc090590  jal         func_241640
    ctx->pc = 0x11FD5Cu;
    SET_GPR_U32(ctx, 31, 0x11FD64u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x11FD5Cu, 0x11FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD64u;
label_11fd64:
    // 0x11fd64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd68: 0xc091574  jal         func_2455D0
    ctx->pc = 0x11FD68u;
    SET_GPR_U32(ctx, 31, 0x11FD70u);
    ctx->pc = 0x2455D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455D0u, 0x11FD68u, 0x11FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD70u;
label_11fd70:
    // 0x11fd70: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x11fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x11fd74: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x11fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11fd78: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x11FD78u;
    SET_GPR_U32(ctx, 31, 0x11FD80u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x11FD78u, 0x11FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD80u;
label_11fd80:
    // 0x11fd80: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x11fd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x11fd84: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x11fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11fd88: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x11FD88u;
    SET_GPR_U32(ctx, 31, 0x11FD90u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x11FD88u, 0x11FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FD90u;
label_11fd90:
    // 0x11fd90: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x11fd90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11fd94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11fd94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fd98: 0x27a600e4  addiu       $a2, $sp, 0xE4
    ctx->pc = 0x11fd98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
    // 0x11fd9c: 0xc048118  jal         func_120460
    ctx->pc = 0x11FD9Cu;
    SET_GPR_U32(ctx, 31, 0x11FDA4u);
    ctx->pc = 0x120460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120460u, 0x11FD9Cu, 0x11FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDA4u;
label_11fda4:
    // 0x11fda4: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x11fda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x11fda8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x11fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x11fdac: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x11fdacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x11fdb0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x11fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11fdb4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x11FDB4u;
    SET_GPR_U32(ctx, 31, 0x11FDBCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x11FDB4u, 0x11FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDBCu;
label_11fdbc:
    // 0x11fdbc: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x11fdbcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11fdc0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FDC0u;
    {
        const bool branch_taken_0x11fdc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fdc0) {
            ctx->pc = 0x11FDDCu;
            goto label_11fddc;
        }
    }
    ctx->pc = 0x11FDC8u;
    // 0x11fdc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x11fdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11fdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdd0: 0xc0968b0  jal         func_25A2C0
    ctx->pc = 0x11FDD0u;
    SET_GPR_U32(ctx, 31, 0x11FDD8u);
    ctx->pc = 0x25A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2C0u, 0x11FDD0u, 0x11FDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDD8u;
label_11fdd8:
    // 0x11fdd8: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x11fdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_11fddc:
    // 0x11fddc: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x11fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x11fde0: 0x10020079  beq         $zero, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x11FDE0u;
    {
        const bool branch_taken_0x11fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fde0) {
            ctx->pc = 0x11FFC8u;
            goto label_11ffc8;
        }
    }
    ctx->pc = 0x11FDE8u;
    // 0x11fde8: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x11fde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x11fdec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x11fdecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x11fdf0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FDF0u;
    SET_GPR_U32(ctx, 31, 0x11FDF8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FDF0u, 0x11FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FDF8u;
label_11fdf8:
    // 0x11fdf8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x11fdf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fdfc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x11fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x11fe00: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11fe04: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x11fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11fe08: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FE08u;
    SET_GPR_U32(ctx, 31, 0x11FE10u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FE08u, 0x11FE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE10u;
label_11fe10:
    // 0x11fe10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11fe10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe14: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x11fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x11fe18: 0xc0480a4  jal         func_120290
    ctx->pc = 0x11FE18u;
    SET_GPR_U32(ctx, 31, 0x11FE20u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x11FE18u, 0x11FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE20u;
label_11fe20:
    // 0x11fe20: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11fe20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe24: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x11fe24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x11fe28: 0xc09adac  jal         func_26B6B0
    ctx->pc = 0x11FE28u;
    SET_GPR_U32(ctx, 31, 0x11FE30u);
    ctx->pc = 0x26B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B6B0u, 0x11FE28u, 0x11FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE30u;
label_11fe30:
    // 0x11fe30: 0xa3a000ff  sb          $zero, 0xFF($sp)
    ctx->pc = 0x11fe30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 0));
    // 0x11fe34: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x11fe34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x11fe38: 0xc04809c  jal         func_120270
    ctx->pc = 0x11FE38u;
    SET_GPR_U32(ctx, 31, 0x11FE40u);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x11FE38u, 0x11FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE40u;
label_11fe40:
    // 0x11fe40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11fe40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe44: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11FE44u;
    {
        const bool branch_taken_0x11fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fe44) {
            ctx->pc = 0x11FEBCu;
            goto label_11febc;
        }
    }
    ctx->pc = 0x11FE4Cu;
label_11fe4c:
    // 0x11fe4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fe50: 0xc048094  jal         func_120250
    ctx->pc = 0x11FE50u;
    SET_GPR_U32(ctx, 31, 0x11FE58u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x11FE50u, 0x11FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE58u;
label_11fe58:
    // 0x11fe58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11fe58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe5c: 0x24050477  addiu       $a1, $zero, 0x477
    ctx->pc = 0x11fe5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1143));
    // 0x11fe60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11fe60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe64: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x11FE64u;
    SET_GPR_U32(ctx, 31, 0x11FE6Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x11FE64u, 0x11FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE6Cu;
label_11fe6c:
    // 0x11fe6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11fe6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11fe70: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11FE70u;
    {
        const bool branch_taken_0x11fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fe70) {
            ctx->pc = 0x11FEB8u;
            goto label_11feb8;
        }
    }
    ctx->pc = 0x11FE78u;
    // 0x11fe78: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x11fe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x11fe7c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11fe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe80: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11fe84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11fe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fe88: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x11fe88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x11fe8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11fe8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fe90: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x11FE90u;
    SET_GPR_U32(ctx, 31, 0x11FE98u);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x11FE90u, 0x11FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FE98u;
label_11fe98:
    // 0x11fe98: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11fe9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fea0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FEA0u;
    {
        const bool branch_taken_0x11fea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fea0) {
            ctx->pc = 0x11FEB8u;
            goto label_11feb8;
        }
    }
    ctx->pc = 0x11FEA8u;
    // 0x11fea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11feac: 0xa3a200ff  sb          $v0, 0xFF($sp)
    ctx->pc = 0x11feacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 255), (uint8_t)GPR_U32(ctx, 2));
    // 0x11feb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11FEB0u;
    {
        const bool branch_taken_0x11feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11feb0) {
            ctx->pc = 0x11FED8u;
            goto label_11fed8;
        }
    }
    ctx->pc = 0x11FEB8u;
label_11feb8:
    // 0x11feb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x11feb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_11febc:
    // 0x11febc: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FEBCu;
    {
        const bool branch_taken_0x11febc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11febc) {
            ctx->pc = 0x11FED8u;
            goto label_11fed8;
        }
    }
    ctx->pc = 0x11FEC4u;
    // 0x11fec4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x11fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x11fec8: 0xc04808c  jal         func_120230
    ctx->pc = 0x11FEC8u;
    SET_GPR_U32(ctx, 31, 0x11FED0u);
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x11FEC8u, 0x11FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FED0u;
label_11fed0:
    // 0x11fed0: 0x1602ffde  bne         $s0, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x11FED0u;
    {
        const bool branch_taken_0x11fed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fed0) {
            ctx->pc = 0x11FE4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fe4c;
        }
    }
    ctx->pc = 0x11FED8u;
label_11fed8:
    // 0x11fed8: 0x93a200ff  lbu         $v0, 0xFF($sp)
    ctx->pc = 0x11fed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 255)));
    // 0x11fedc: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x11FEDCu;
    {
        const bool branch_taken_0x11fedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fedc) {
            ctx->pc = 0x11FFB8u;
            goto label_11ffb8;
        }
    }
    ctx->pc = 0x11FEE4u;
    // 0x11fee4: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x11fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x11fee8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11feec: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FEECu;
    SET_GPR_U32(ctx, 31, 0x11FEF4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FEECu, 0x11FEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FEF4u;
label_11fef4:
    // 0x11fef4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x11fef4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fef8: 0x1017002f  beq         $zero, $s7, . + 4 + (0x2F << 2)
    ctx->pc = 0x11FEF8u;
    {
        const bool branch_taken_0x11fef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 23));
        if (branch_taken_0x11fef8) {
            ctx->pc = 0x11FFB8u;
            goto label_11ffb8;
        }
    }
    ctx->pc = 0x11FF00u;
    // 0x11ff00: 0x8fa400e4  lw          $a0, 0xE4($sp)
    ctx->pc = 0x11ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x11ff04: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x11ff04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x11ff08: 0xc085538  jal         func_2154E0
    ctx->pc = 0x11FF08u;
    SET_GPR_U32(ctx, 31, 0x11FF10u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x11FF08u, 0x11FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF10u;
label_11ff10:
    // 0x11ff10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x11ff10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff14: 0x34158000  ori         $s5, $zero, 0x8000
    ctx->pc = 0x11ff14u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11ff18: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x11ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x11ff1c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11FF1Cu;
    {
        const bool branch_taken_0x11ff1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ff1c) {
            ctx->pc = 0x11FF8Cu;
            goto label_11ff8c;
        }
    }
    ctx->pc = 0x11FF24u;
    // 0x11ff24: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x11ff24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x11ff28: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x11FF28u;
    {
        const bool branch_taken_0x11ff28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ff28) {
            ctx->pc = 0x11FFB8u;
            goto label_11ffb8;
        }
    }
    ctx->pc = 0x11FF30u;
    // 0x11ff30: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff34: 0x8ec50034  lw          $a1, 0x34($s6)
    ctx->pc = 0x11ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x11ff38: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff3c: 0x27a700d4  addiu       $a3, $sp, 0xD4
    ctx->pc = 0x11ff3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
    // 0x11ff40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x11ff40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ff44: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x11FF44u;
    SET_GPR_U32(ctx, 31, 0x11FF4Cu);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x11FF44u, 0x11FF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF4Cu;
label_11ff4c:
    // 0x11ff4c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x11FF4Cu;
    {
        const bool branch_taken_0x11ff4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ff4c) {
            ctx->pc = 0x11FFB8u;
            goto label_11ffb8;
        }
    }
    ctx->pc = 0x11FF54u;
    // 0x11ff54: 0x36b50001  ori         $s5, $s5, 0x1
    ctx->pc = 0x11ff54u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
    // 0x11ff58: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11ff5c: 0xc052c00  jal         func_14B000
    ctx->pc = 0x11FF5Cu;
    SET_GPR_U32(ctx, 31, 0x11FF64u);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x11FF5Cu, 0x11FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF64u;
label_11ff64:
    // 0x11ff64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11ff64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff68: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x11FF68u;
    SET_GPR_U32(ctx, 31, 0x11FF70u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x11FF68u, 0x11FF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF70u;
label_11ff70:
    // 0x11ff70: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11ff74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff78: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x11ff78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff7c: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x11FF7Cu;
    SET_GPR_U32(ctx, 31, 0x11FF84u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x11FF7Cu, 0x11FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF84u;
label_11ff84:
    // 0x11ff84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11FF84u;
    {
        const bool branch_taken_0x11ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ff84) {
            ctx->pc = 0x11FFB8u;
            goto label_11ffb8;
        }
    }
    ctx->pc = 0x11FF8Cu;
label_11ff8c:
    // 0x11ff8c: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11ff90: 0xc052c00  jal         func_14B000
    ctx->pc = 0x11FF90u;
    SET_GPR_U32(ctx, 31, 0x11FF98u);
    ctx->pc = 0x14B000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B000u, 0x11FF90u, 0x11FF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FF98u;
label_11ff98:
    // 0x11ff98: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x11ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ff9c: 0xc0a535c  jal         func_294D70
    ctx->pc = 0x11FF9Cu;
    SET_GPR_U32(ctx, 31, 0x11FFA4u);
    ctx->pc = 0x294D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D70u, 0x11FF9Cu, 0x11FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFA4u;
label_11ffa4:
    // 0x11ffa4: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11ffa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffac: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x11ffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ffb0: 0xc052be8  jal         func_14AFA0
    ctx->pc = 0x11FFB0u;
    SET_GPR_U32(ctx, 31, 0x11FFB8u);
    ctx->pc = 0x14AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14AFA0u, 0x11FFB0u, 0x11FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFB8u;
label_11ffb8:
    // 0x11ffb8: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x11ffb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x11ffbc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x11ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ffc0: 0xc048004  jal         func_120010
    ctx->pc = 0x11FFC0u;
    SET_GPR_U32(ctx, 31, 0x11FFC8u);
    ctx->pc = 0x120010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120010u, 0x11FFC0u, 0x11FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFC8u;
label_11ffc8:
    // 0x11ffc8: 0x8f84ba9c  lw          $a0, -0x4564($gp)
    ctx->pc = 0x11ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x11ffcc: 0xc052c38  jal         func_14B0E0
    ctx->pc = 0x11FFCCu;
    SET_GPR_U32(ctx, 31, 0x11FFD4u);
    ctx->pc = 0x14B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B0E0u, 0x11FFCCu, 0x11FFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFD4u;
label_11ffd4:
    // 0x11ffd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x11ffd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11ffd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x11ffd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ffdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x11ffdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ffe0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x11ffe0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ffe4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x11ffe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ffe8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11ffe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ffec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11ffecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11fff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11fff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11fff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11fff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11fffc: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x11fffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x120000: 0x3e00008  jr          $ra
    ctx->pc = 0x120000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120008u;
    // 0x120008: 0x0  nop
    ctx->pc = 0x120008u;
    // NOP
    // 0x12000c: 0x0  nop
    ctx->pc = 0x12000cu;
    // NOP
    ctx->pc = 0x120010u;
}
