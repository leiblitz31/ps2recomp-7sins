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

// Function: sub_0048C020
// Address: 0x48c020 - 0x48c2f0
void sub_0048C020_0x48c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C020_0x48c020");
#endif

    switch (ctx->pc) {
        case 0x48c020u: goto label_48c020;
        case 0x48c024u: goto label_48c024;
        case 0x48c028u: goto label_48c028;
        case 0x48c02cu: goto label_48c02c;
        case 0x48c030u: goto label_48c030;
        case 0x48c034u: goto label_48c034;
        case 0x48c038u: goto label_48c038;
        case 0x48c03cu: goto label_48c03c;
        case 0x48c040u: goto label_48c040;
        case 0x48c044u: goto label_48c044;
        case 0x48c048u: goto label_48c048;
        case 0x48c04cu: goto label_48c04c;
        case 0x48c050u: goto label_48c050;
        case 0x48c054u: goto label_48c054;
        case 0x48c058u: goto label_48c058;
        case 0x48c05cu: goto label_48c05c;
        case 0x48c060u: goto label_48c060;
        case 0x48c064u: goto label_48c064;
        case 0x48c068u: goto label_48c068;
        case 0x48c06cu: goto label_48c06c;
        case 0x48c070u: goto label_48c070;
        case 0x48c074u: goto label_48c074;
        case 0x48c078u: goto label_48c078;
        case 0x48c07cu: goto label_48c07c;
        case 0x48c080u: goto label_48c080;
        case 0x48c084u: goto label_48c084;
        case 0x48c088u: goto label_48c088;
        case 0x48c08cu: goto label_48c08c;
        case 0x48c090u: goto label_48c090;
        case 0x48c094u: goto label_48c094;
        case 0x48c098u: goto label_48c098;
        case 0x48c09cu: goto label_48c09c;
        case 0x48c0a0u: goto label_48c0a0;
        case 0x48c0a4u: goto label_48c0a4;
        case 0x48c0a8u: goto label_48c0a8;
        case 0x48c0acu: goto label_48c0ac;
        case 0x48c0b0u: goto label_48c0b0;
        case 0x48c0b4u: goto label_48c0b4;
        case 0x48c0b8u: goto label_48c0b8;
        case 0x48c0bcu: goto label_48c0bc;
        case 0x48c0c0u: goto label_48c0c0;
        case 0x48c0c4u: goto label_48c0c4;
        case 0x48c0c8u: goto label_48c0c8;
        case 0x48c0ccu: goto label_48c0cc;
        case 0x48c0d0u: goto label_48c0d0;
        case 0x48c0d4u: goto label_48c0d4;
        case 0x48c0d8u: goto label_48c0d8;
        case 0x48c0dcu: goto label_48c0dc;
        case 0x48c0e0u: goto label_48c0e0;
        case 0x48c0e4u: goto label_48c0e4;
        case 0x48c0e8u: goto label_48c0e8;
        case 0x48c0ecu: goto label_48c0ec;
        case 0x48c0f0u: goto label_48c0f0;
        case 0x48c0f4u: goto label_48c0f4;
        case 0x48c0f8u: goto label_48c0f8;
        case 0x48c0fcu: goto label_48c0fc;
        case 0x48c100u: goto label_48c100;
        case 0x48c104u: goto label_48c104;
        case 0x48c108u: goto label_48c108;
        case 0x48c10cu: goto label_48c10c;
        case 0x48c110u: goto label_48c110;
        case 0x48c114u: goto label_48c114;
        case 0x48c118u: goto label_48c118;
        case 0x48c11cu: goto label_48c11c;
        case 0x48c120u: goto label_48c120;
        case 0x48c124u: goto label_48c124;
        case 0x48c128u: goto label_48c128;
        case 0x48c12cu: goto label_48c12c;
        case 0x48c130u: goto label_48c130;
        case 0x48c134u: goto label_48c134;
        case 0x48c138u: goto label_48c138;
        case 0x48c13cu: goto label_48c13c;
        case 0x48c140u: goto label_48c140;
        case 0x48c144u: goto label_48c144;
        case 0x48c148u: goto label_48c148;
        case 0x48c14cu: goto label_48c14c;
        case 0x48c150u: goto label_48c150;
        case 0x48c154u: goto label_48c154;
        case 0x48c158u: goto label_48c158;
        case 0x48c15cu: goto label_48c15c;
        case 0x48c160u: goto label_48c160;
        case 0x48c164u: goto label_48c164;
        case 0x48c168u: goto label_48c168;
        case 0x48c16cu: goto label_48c16c;
        case 0x48c170u: goto label_48c170;
        case 0x48c174u: goto label_48c174;
        case 0x48c178u: goto label_48c178;
        case 0x48c17cu: goto label_48c17c;
        case 0x48c180u: goto label_48c180;
        case 0x48c184u: goto label_48c184;
        case 0x48c188u: goto label_48c188;
        case 0x48c18cu: goto label_48c18c;
        case 0x48c190u: goto label_48c190;
        case 0x48c194u: goto label_48c194;
        case 0x48c198u: goto label_48c198;
        case 0x48c19cu: goto label_48c19c;
        case 0x48c1a0u: goto label_48c1a0;
        case 0x48c1a4u: goto label_48c1a4;
        case 0x48c1a8u: goto label_48c1a8;
        case 0x48c1acu: goto label_48c1ac;
        case 0x48c1b0u: goto label_48c1b0;
        case 0x48c1b4u: goto label_48c1b4;
        case 0x48c1b8u: goto label_48c1b8;
        case 0x48c1bcu: goto label_48c1bc;
        case 0x48c1c0u: goto label_48c1c0;
        case 0x48c1c4u: goto label_48c1c4;
        case 0x48c1c8u: goto label_48c1c8;
        case 0x48c1ccu: goto label_48c1cc;
        case 0x48c1d0u: goto label_48c1d0;
        case 0x48c1d4u: goto label_48c1d4;
        case 0x48c1d8u: goto label_48c1d8;
        case 0x48c1dcu: goto label_48c1dc;
        case 0x48c1e0u: goto label_48c1e0;
        case 0x48c1e4u: goto label_48c1e4;
        case 0x48c1e8u: goto label_48c1e8;
        case 0x48c1ecu: goto label_48c1ec;
        case 0x48c1f0u: goto label_48c1f0;
        case 0x48c1f4u: goto label_48c1f4;
        case 0x48c1f8u: goto label_48c1f8;
        case 0x48c1fcu: goto label_48c1fc;
        case 0x48c200u: goto label_48c200;
        case 0x48c204u: goto label_48c204;
        case 0x48c208u: goto label_48c208;
        case 0x48c20cu: goto label_48c20c;
        case 0x48c210u: goto label_48c210;
        case 0x48c214u: goto label_48c214;
        case 0x48c218u: goto label_48c218;
        case 0x48c21cu: goto label_48c21c;
        case 0x48c220u: goto label_48c220;
        case 0x48c224u: goto label_48c224;
        case 0x48c228u: goto label_48c228;
        case 0x48c22cu: goto label_48c22c;
        case 0x48c230u: goto label_48c230;
        case 0x48c234u: goto label_48c234;
        case 0x48c238u: goto label_48c238;
        case 0x48c23cu: goto label_48c23c;
        case 0x48c240u: goto label_48c240;
        case 0x48c244u: goto label_48c244;
        case 0x48c248u: goto label_48c248;
        case 0x48c24cu: goto label_48c24c;
        case 0x48c250u: goto label_48c250;
        case 0x48c254u: goto label_48c254;
        case 0x48c258u: goto label_48c258;
        case 0x48c25cu: goto label_48c25c;
        case 0x48c260u: goto label_48c260;
        case 0x48c264u: goto label_48c264;
        case 0x48c268u: goto label_48c268;
        case 0x48c26cu: goto label_48c26c;
        case 0x48c270u: goto label_48c270;
        case 0x48c274u: goto label_48c274;
        case 0x48c278u: goto label_48c278;
        case 0x48c27cu: goto label_48c27c;
        case 0x48c280u: goto label_48c280;
        case 0x48c284u: goto label_48c284;
        case 0x48c288u: goto label_48c288;
        case 0x48c28cu: goto label_48c28c;
        case 0x48c290u: goto label_48c290;
        case 0x48c294u: goto label_48c294;
        case 0x48c298u: goto label_48c298;
        case 0x48c29cu: goto label_48c29c;
        case 0x48c2a0u: goto label_48c2a0;
        case 0x48c2a4u: goto label_48c2a4;
        case 0x48c2a8u: goto label_48c2a8;
        case 0x48c2acu: goto label_48c2ac;
        case 0x48c2b0u: goto label_48c2b0;
        case 0x48c2b4u: goto label_48c2b4;
        case 0x48c2b8u: goto label_48c2b8;
        case 0x48c2bcu: goto label_48c2bc;
        case 0x48c2c0u: goto label_48c2c0;
        case 0x48c2c4u: goto label_48c2c4;
        case 0x48c2c8u: goto label_48c2c8;
        case 0x48c2ccu: goto label_48c2cc;
        case 0x48c2d0u: goto label_48c2d0;
        case 0x48c2d4u: goto label_48c2d4;
        case 0x48c2d8u: goto label_48c2d8;
        case 0x48c2dcu: goto label_48c2dc;
        case 0x48c2e0u: goto label_48c2e0;
        case 0x48c2e4u: goto label_48c2e4;
        case 0x48c2e8u: goto label_48c2e8;
        case 0x48c2ecu: goto label_48c2ec;
        default: break;
    }

    ctx->pc = 0x48c020u;

label_48c020:
    // 0x48c020: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x48c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_48c024:
    // 0x48c024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x48c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_48c028:
    // 0x48c028: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48c028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48c02c:
    // 0x48c02c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48c030:
    // 0x48c030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48c030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48c034:
    // 0x48c034: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c038:
    // 0x48c038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c03c:
    // 0x48c03c: 0xafa402c0  sw          $a0, 0x2C0($sp)
    ctx->pc = 0x48c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 4));
label_48c040:
    // 0x48c040: 0xafa502d0  sw          $a1, 0x2D0($sp)
    ctx->pc = 0x48c040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 5));
label_48c044:
    // 0x48c044: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x48c044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48c048:
    // 0x48c048: 0xc042514  jal         func_109450
label_48c04c:
    if (ctx->pc == 0x48C04Cu) {
        ctx->pc = 0x48C050u;
        goto label_48c050;
    }
    ctx->pc = 0x48C048u;
    SET_GPR_U32(ctx, 31, 0x48C050u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x48C048u, 0x48C050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C050u;
label_48c050:
    // 0x48c050: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48c050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c054:
    // 0x48c054: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x48c054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_48c058:
    // 0x48c058: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48c058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48c05c:
    // 0x48c05c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_48c060:
    if (ctx->pc == 0x48C060u) {
        ctx->pc = 0x48C064u;
        goto label_48c064;
    }
    ctx->pc = 0x48C05Cu;
    {
        const bool branch_taken_0x48c05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c05c) {
            ctx->pc = 0x48C10Cu;
            goto label_48c10c;
        }
    }
    ctx->pc = 0x48C064u;
label_48c064:
    // 0x48c064: 0x8f82b648  lw          $v0, -0x49B8($gp)
    ctx->pc = 0x48c064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948424)));
label_48c068:
    // 0x48c068: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48c06c:
    if (ctx->pc == 0x48C06Cu) {
        ctx->pc = 0x48C070u;
        goto label_48c070;
    }
    ctx->pc = 0x48C068u;
    {
        const bool branch_taken_0x48c068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c068) {
            ctx->pc = 0x48C10Cu;
            goto label_48c10c;
        }
    }
    ctx->pc = 0x48C070u;
label_48c070:
    // 0x48c070: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48c070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48c074:
    // 0x48c074: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c078:
    // 0x48c078: 0x27a602a8  addiu       $a2, $sp, 0x2A8
    ctx->pc = 0x48c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 680));
label_48c07c:
    // 0x48c07c: 0xc115ee8  jal         func_457BA0
label_48c080:
    if (ctx->pc == 0x48C080u) {
        ctx->pc = 0x48C084u;
        goto label_48c084;
    }
    ctx->pc = 0x48C07Cu;
    SET_GPR_U32(ctx, 31, 0x48C084u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48C07Cu, 0x48C084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C084u;
label_48c084:
    // 0x48c084: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_48c088:
    if (ctx->pc == 0x48C088u) {
        ctx->pc = 0x48C08Cu;
        goto label_48c08c;
    }
    ctx->pc = 0x48C084u;
    {
        const bool branch_taken_0x48c084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c084) {
            ctx->pc = 0x48C10Cu;
            goto label_48c10c;
        }
    }
    ctx->pc = 0x48C08Cu;
label_48c08c:
    // 0x48c08c: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x48c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48c090:
    // 0x48c090: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_48c094:
    if (ctx->pc == 0x48C094u) {
        ctx->pc = 0x48C098u;
        goto label_48c098;
    }
    ctx->pc = 0x48C090u;
    {
        const bool branch_taken_0x48c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c090) {
            ctx->pc = 0x48C10Cu;
            goto label_48c10c;
        }
    }
    ctx->pc = 0x48C098u;
label_48c098:
    // 0x48c098: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x48c098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_48c09c:
    // 0x48c09c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c0a0:
    // 0x48c0a0: 0x8fa602ac  lw          $a2, 0x2AC($sp)
    ctx->pc = 0x48c0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 684)));
label_48c0a4:
    // 0x48c0a4: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48c0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48c0a8:
    // 0x48c0a8: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48c0a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48c0ac:
    // 0x48c0ac: 0x24080066  addiu       $t0, $zero, 0x66
    ctx->pc = 0x48c0acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_48c0b0:
    // 0x48c0b0: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48c0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48c0b4:
    // 0x48c0b4: 0x25294900  addiu       $t1, $t1, 0x4900
    ctx->pc = 0x48c0b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18688));
label_48c0b8:
    // 0x48c0b8: 0xc113940  jal         func_44E500
label_48c0bc:
    if (ctx->pc == 0x48C0BCu) {
        ctx->pc = 0x48C0C0u;
        goto label_48c0c0;
    }
    ctx->pc = 0x48C0B8u;
    SET_GPR_U32(ctx, 31, 0x48C0C0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48C0B8u, 0x48C0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C0C0u;
label_48c0c0:
    // 0x48c0c0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x48c0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_48c0c4:
    // 0x48c0c4: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48c0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48c0c8:
    // 0x48c0c8: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x48c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
label_48c0cc:
    // 0x48c0cc: 0xc115c24  jal         func_457090
label_48c0d0:
    if (ctx->pc == 0x48C0D0u) {
        ctx->pc = 0x48C0D4u;
        goto label_48c0d4;
    }
    ctx->pc = 0x48C0CCu;
    SET_GPR_U32(ctx, 31, 0x48C0D4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48C0CCu, 0x48C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C0D4u;
label_48c0d4:
    // 0x48c0d4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x48c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_48c0d8:
    // 0x48c0d8: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x48c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_48c0dc:
    // 0x48c0dc: 0x40f809  jalr        $v0
label_48c0e0:
    if (ctx->pc == 0x48C0E0u) {
        ctx->pc = 0x48C0E4u;
        goto label_48c0e4;
    }
    ctx->pc = 0x48C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C0E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C0DCu, 0x48C0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C0E4u;
label_48c0e4:
    // 0x48c0e4: 0xaf82b648  sw          $v0, -0x49B8($gp)
    ctx->pc = 0x48c0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948424), GPR_U32(ctx, 2));
label_48c0e8:
    // 0x48c0e8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x48c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_48c0ec:
    // 0x48c0ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48c0f0:
    if (ctx->pc == 0x48C0F0u) {
        ctx->pc = 0x48C0F4u;
        goto label_48c0f4;
    }
    ctx->pc = 0x48C0ECu;
    {
        const bool branch_taken_0x48c0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c0ec) {
            ctx->pc = 0x48C0FCu;
            goto label_48c0fc;
        }
    }
    ctx->pc = 0x48C0F4u;
label_48c0f4:
    // 0x48c0f4: 0xd  break       0
    ctx->pc = 0x48c0f4u;
    runtime->handleBreak(rdram, ctx);
label_48c0f8:
    // 0x48c0f8: 0x0  nop
    ctx->pc = 0x48c0f8u;
    // NOP
label_48c0fc:
    // 0x48c0fc: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x48c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_48c100:
    // 0x48c100: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48c100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c104:
    // 0x48c104: 0xc11392c  jal         func_44E4B0
label_48c108:
    if (ctx->pc == 0x48C108u) {
        ctx->pc = 0x48C10Cu;
        goto label_48c10c;
    }
    ctx->pc = 0x48C104u;
    SET_GPR_U32(ctx, 31, 0x48C10Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48C104u, 0x48C10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C10Cu;
label_48c10c:
    // 0x48c10c: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_48c110:
    if (ctx->pc == 0x48C110u) {
        ctx->pc = 0x48C114u;
        goto label_48c114;
    }
    ctx->pc = 0x48C10Cu;
    {
        const bool branch_taken_0x48c10c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c10c) {
            ctx->pc = 0x48C120u;
            goto label_48c120;
        }
    }
    ctx->pc = 0x48C114u;
label_48c114:
    // 0x48c114: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48c114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c118:
    // 0x48c118: 0x1000006a  b           . + 4 + (0x6A << 2)
label_48c11c:
    if (ctx->pc == 0x48C11Cu) {
        ctx->pc = 0x48C120u;
        goto label_48c120;
    }
    ctx->pc = 0x48C118u;
    {
        const bool branch_taken_0x48c118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c118) {
            ctx->pc = 0x48C2C4u;
            goto label_48c2c4;
        }
    }
    ctx->pc = 0x48C120u;
label_48c120:
    // 0x48c120: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x48c120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c124:
    // 0x48c124: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x48c124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c128:
    // 0x48c128: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x48c128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48c12c:
    // 0x48c12c: 0xc041b38  jal         func_106CE0
label_48c130:
    if (ctx->pc == 0x48C130u) {
        ctx->pc = 0x48C134u;
        goto label_48c134;
    }
    ctx->pc = 0x48C12Cu;
    SET_GPR_U32(ctx, 31, 0x48C134u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48C12Cu, 0x48C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C134u;
label_48c134:
    // 0x48c134: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x48c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48c138:
    // 0x48c138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x48c138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c13c:
    // 0x48c13c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48c13cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c140:
    // 0x48c140: 0xc10493e  jal         func_4124F8
label_48c144:
    if (ctx->pc == 0x48C144u) {
        ctx->pc = 0x48C148u;
        goto label_48c148;
    }
    ctx->pc = 0x48C140u;
    SET_GPR_U32(ctx, 31, 0x48C148u);
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x48C140u, 0x48C148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C148u;
label_48c148:
    // 0x48c148: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48c148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c14c:
    // 0x48c14c: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x48c14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_48c150:
    // 0x48c150: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48c150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48c154:
    // 0x48c154: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_48c158:
    if (ctx->pc == 0x48C158u) {
        ctx->pc = 0x48C15Cu;
        goto label_48c15c;
    }
    ctx->pc = 0x48C154u;
    {
        const bool branch_taken_0x48c154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c154) {
            ctx->pc = 0x48C214u;
            goto label_48c214;
        }
    }
    ctx->pc = 0x48C15Cu;
label_48c15c:
    // 0x48c15c: 0x8f82b64c  lw          $v0, -0x49B4($gp)
    ctx->pc = 0x48c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948428)));
label_48c160:
    // 0x48c160: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_48c164:
    if (ctx->pc == 0x48C164u) {
        ctx->pc = 0x48C168u;
        goto label_48c168;
    }
    ctx->pc = 0x48C160u;
    {
        const bool branch_taken_0x48c160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c160) {
            ctx->pc = 0x48C214u;
            goto label_48c214;
        }
    }
    ctx->pc = 0x48C168u;
label_48c168:
    // 0x48c168: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48c168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48c16c:
    // 0x48c16c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c170:
    // 0x48c170: 0x27a60298  addiu       $a2, $sp, 0x298
    ctx->pc = 0x48c170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_48c174:
    // 0x48c174: 0xc115ee8  jal         func_457BA0
label_48c178:
    if (ctx->pc == 0x48C178u) {
        ctx->pc = 0x48C17Cu;
        goto label_48c17c;
    }
    ctx->pc = 0x48C174u;
    SET_GPR_U32(ctx, 31, 0x48C17Cu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48C174u, 0x48C17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C17Cu;
label_48c17c:
    // 0x48c17c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_48c180:
    if (ctx->pc == 0x48C180u) {
        ctx->pc = 0x48C184u;
        goto label_48c184;
    }
    ctx->pc = 0x48C17Cu;
    {
        const bool branch_taken_0x48c17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c17c) {
            ctx->pc = 0x48C214u;
            goto label_48c214;
        }
    }
    ctx->pc = 0x48C184u;
label_48c184:
    // 0x48c184: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x48c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_48c188:
    // 0x48c188: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_48c18c:
    if (ctx->pc == 0x48C18Cu) {
        ctx->pc = 0x48C190u;
        goto label_48c190;
    }
    ctx->pc = 0x48C188u;
    {
        const bool branch_taken_0x48c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c188) {
            ctx->pc = 0x48C214u;
            goto label_48c214;
        }
    }
    ctx->pc = 0x48C190u;
label_48c190:
    // 0x48c190: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48c190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48c194:
    // 0x48c194: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48c194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48c198:
    // 0x48c198: 0x8fa6029c  lw          $a2, 0x29C($sp)
    ctx->pc = 0x48c198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_48c19c:
    // 0x48c19c: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48c19cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48c1a0:
    // 0x48c1a0: 0x24e748b0  addiu       $a3, $a3, 0x48B0
    ctx->pc = 0x48c1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18608));
label_48c1a4:
    // 0x48c1a4: 0x24080072  addiu       $t0, $zero, 0x72
    ctx->pc = 0x48c1a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_48c1a8:
    // 0x48c1a8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48c1a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48c1ac:
    // 0x48c1ac: 0x25294960  addiu       $t1, $t1, 0x4960
    ctx->pc = 0x48c1acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18784));
label_48c1b0:
    // 0x48c1b0: 0xc113940  jal         func_44E500
label_48c1b4:
    if (ctx->pc == 0x48C1B4u) {
        ctx->pc = 0x48C1B8u;
        goto label_48c1b8;
    }
    ctx->pc = 0x48C1B0u;
    SET_GPR_U32(ctx, 31, 0x48C1B8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48C1B0u, 0x48C1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C1B8u;
label_48c1b8:
    // 0x48c1b8: 0x8fa402d0  lw          $a0, 0x2D0($sp)
    ctx->pc = 0x48c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_48c1bc:
    // 0x48c1bc: 0xc041b38  jal         func_106CE0
label_48c1c0:
    if (ctx->pc == 0x48C1C0u) {
        ctx->pc = 0x48C1C4u;
        goto label_48c1c4;
    }
    ctx->pc = 0x48C1BCu;
    SET_GPR_U32(ctx, 31, 0x48C1C4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x48C1BCu, 0x48C1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C1C4u;
label_48c1c4:
    // 0x48c1c4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48c1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48c1c8:
    // 0x48c1c8: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x48c1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_48c1cc:
    // 0x48c1cc: 0x24a54970  addiu       $a1, $a1, 0x4970
    ctx->pc = 0x48c1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18800));
label_48c1d0:
    // 0x48c1d0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x48c1d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c1d4:
    // 0x48c1d4: 0xc115c24  jal         func_457090
label_48c1d8:
    if (ctx->pc == 0x48C1D8u) {
        ctx->pc = 0x48C1DCu;
        goto label_48c1dc;
    }
    ctx->pc = 0x48C1D4u;
    SET_GPR_U32(ctx, 31, 0x48C1DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48C1D4u, 0x48C1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C1DCu;
label_48c1dc:
    // 0x48c1dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48c1e0:
    // 0x48c1e0: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x48c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_48c1e4:
    // 0x48c1e4: 0x40f809  jalr        $v0
label_48c1e8:
    if (ctx->pc == 0x48C1E8u) {
        ctx->pc = 0x48C1ECu;
        goto label_48c1ec;
    }
    ctx->pc = 0x48C1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48C1ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C1E4u, 0x48C1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48C1ECu;
label_48c1ec:
    // 0x48c1ec: 0xaf82b64c  sw          $v0, -0x49B4($gp)
    ctx->pc = 0x48c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948428), GPR_U32(ctx, 2));
label_48c1f0:
    // 0x48c1f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x48c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_48c1f4:
    // 0x48c1f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48c1f8:
    if (ctx->pc == 0x48C1F8u) {
        ctx->pc = 0x48C1FCu;
        goto label_48c1fc;
    }
    ctx->pc = 0x48C1F4u;
    {
        const bool branch_taken_0x48c1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c1f4) {
            ctx->pc = 0x48C204u;
            goto label_48c204;
        }
    }
    ctx->pc = 0x48C1FCu;
label_48c1fc:
    // 0x48c1fc: 0xd  break       0
    ctx->pc = 0x48c1fcu;
    runtime->handleBreak(rdram, ctx);
label_48c200:
    // 0x48c200: 0x0  nop
    ctx->pc = 0x48c200u;
    // NOP
label_48c204:
    // 0x48c204: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x48c204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48c208:
    // 0x48c208: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48c208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c20c:
    // 0x48c20c: 0xc11392c  jal         func_44E4B0
label_48c210:
    if (ctx->pc == 0x48C210u) {
        ctx->pc = 0x48C214u;
        goto label_48c214;
    }
    ctx->pc = 0x48C20Cu;
    SET_GPR_U32(ctx, 31, 0x48C214u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48C20Cu, 0x48C214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C214u;
label_48c214:
    // 0x48c214: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_48c218:
    if (ctx->pc == 0x48C218u) {
        ctx->pc = 0x48C21Cu;
        goto label_48c21c;
    }
    ctx->pc = 0x48C214u;
    {
        const bool branch_taken_0x48c214 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c214) {
            ctx->pc = 0x48C228u;
            goto label_48c228;
        }
    }
    ctx->pc = 0x48C21Cu;
label_48c21c:
    // 0x48c21c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x48c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c220:
    // 0x48c220: 0x10000028  b           . + 4 + (0x28 << 2)
label_48c224:
    if (ctx->pc == 0x48C224u) {
        ctx->pc = 0x48C228u;
        goto label_48c228;
    }
    ctx->pc = 0x48C220u;
    {
        const bool branch_taken_0x48c220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c220) {
            ctx->pc = 0x48C2C4u;
            goto label_48c2c4;
        }
    }
    ctx->pc = 0x48C228u;
label_48c228:
    // 0x48c228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c22c:
    // 0x48c22c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x48c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_48c230:
    // 0x48c230: 0x27a602bc  addiu       $a2, $sp, 0x2BC
    ctx->pc = 0x48c230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_48c234:
    // 0x48c234: 0x27a702b8  addiu       $a3, $sp, 0x2B8
    ctx->pc = 0x48c234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
label_48c238:
    // 0x48c238: 0xc103322  jal         func_40CC88
label_48c23c:
    if (ctx->pc == 0x48C23Cu) {
        ctx->pc = 0x48C240u;
        goto label_48c240;
    }
    ctx->pc = 0x48C238u;
    SET_GPR_U32(ctx, 31, 0x48C240u);
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x48C238u, 0x48C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C240u;
label_48c240:
    // 0x48c240: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_48c244:
    if (ctx->pc == 0x48C244u) {
        ctx->pc = 0x48C248u;
        goto label_48c248;
    }
    ctx->pc = 0x48C240u;
    {
        const bool branch_taken_0x48c240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c240) {
            ctx->pc = 0x48C280u;
            goto label_48c280;
        }
    }
    ctx->pc = 0x48C248u;
label_48c248:
    // 0x48c248: 0xc119b38  jal         func_466CE0
label_48c24c:
    if (ctx->pc == 0x48C24Cu) {
        ctx->pc = 0x48C250u;
        goto label_48c250;
    }
    ctx->pc = 0x48C248u;
    SET_GPR_U32(ctx, 31, 0x48C250u);
    ctx->pc = 0x466CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466CE0u, 0x48C248u, 0x48C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C250u;
label_48c250:
    // 0x48c250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x48c250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48c254:
    // 0x48c254: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48c254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c258:
    // 0x48c258: 0xc1230bc  jal         func_48C2F0
label_48c25c:
    if (ctx->pc == 0x48C25Cu) {
        ctx->pc = 0x48C260u;
        goto label_48c260;
    }
    ctx->pc = 0x48C258u;
    SET_GPR_U32(ctx, 31, 0x48C260u);
    ctx->pc = 0x48C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2F0u, 0x48C258u, 0x48C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C260u;
label_48c260:
    // 0x48c260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c264:
    // 0x48c264: 0xc0e237c  jal         func_388DF0
label_48c268:
    if (ctx->pc == 0x48C268u) {
        ctx->pc = 0x48C26Cu;
        goto label_48c26c;
    }
    ctx->pc = 0x48C264u;
    SET_GPR_U32(ctx, 31, 0x48C26Cu);
    ctx->pc = 0x388DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388DF0u, 0x48C264u, 0x48C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C26Cu;
label_48c26c:
    // 0x48c26c: 0x8fa302c0  lw          $v1, 0x2C0($sp)
    ctx->pc = 0x48c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48c270:
    // 0x48c270: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x48c270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_48c274:
    // 0x48c274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48c274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48c278:
    // 0x48c278: 0xc1230bc  jal         func_48C2F0
label_48c27c:
    if (ctx->pc == 0x48C27Cu) {
        ctx->pc = 0x48C280u;
        goto label_48c280;
    }
    ctx->pc = 0x48C278u;
    SET_GPR_U32(ctx, 31, 0x48C280u);
    ctx->pc = 0x48C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C2F0u, 0x48C278u, 0x48C280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C280u;
label_48c280:
    // 0x48c280: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c284:
    // 0x48c284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48c284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c288:
    // 0x48c288: 0xc10496a  jal         func_4125A8
label_48c28c:
    if (ctx->pc == 0x48C28Cu) {
        ctx->pc = 0x48C290u;
        goto label_48c290;
    }
    ctx->pc = 0x48C288u;
    SET_GPR_U32(ctx, 31, 0x48C290u);
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x48C288u, 0x48C290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C290u;
label_48c290:
    // 0x48c290: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48c290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48c294:
    // 0x48c294: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c298:
    // 0x48c298: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_48c29c:
    if (ctx->pc == 0x48C29Cu) {
        ctx->pc = 0x48C2A0u;
        goto label_48c2a0;
    }
    ctx->pc = 0x48C298u;
    {
        const bool branch_taken_0x48c298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c298) {
            ctx->pc = 0x48C2ACu;
            goto label_48c2ac;
        }
    }
    ctx->pc = 0x48C2A0u;
label_48c2a0:
    // 0x48c2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48c2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c2a4:
    // 0x48c2a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_48c2a8:
    if (ctx->pc == 0x48C2A8u) {
        ctx->pc = 0x48C2ACu;
        goto label_48c2ac;
    }
    ctx->pc = 0x48C2A4u;
    {
        const bool branch_taken_0x48c2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c2a4) {
            ctx->pc = 0x48C2C4u;
            goto label_48c2c4;
        }
    }
    ctx->pc = 0x48C2ACu;
label_48c2ac:
    // 0x48c2ac: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x48c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48c2b0:
    // 0x48c2b0: 0xc1234ac  jal         func_48D2B0
label_48c2b4:
    if (ctx->pc == 0x48C2B4u) {
        ctx->pc = 0x48C2B8u;
        goto label_48c2b8;
    }
    ctx->pc = 0x48C2B0u;
    SET_GPR_U32(ctx, 31, 0x48C2B8u);
    ctx->pc = 0x48D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D2B0u, 0x48C2B0u, 0x48C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C2B8u;
label_48c2b8:
    // 0x48c2b8: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x48c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_48c2bc:
    // 0x48c2bc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x48c2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_48c2c0:
    // 0x48c2c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c2c4:
    // 0x48c2c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x48c2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_48c2c8:
    // 0x48c2c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48c2c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48c2cc:
    // 0x48c2cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48c2ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48c2d0:
    // 0x48c2d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48c2d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48c2d4:
    // 0x48c2d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c2d8:
    // 0x48c2d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c2dc:
    // 0x48c2dc: 0x27bd02e0  addiu       $sp, $sp, 0x2E0
    ctx->pc = 0x48c2dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_48c2e0:
    // 0x48c2e0: 0x3e00008  jr          $ra
label_48c2e4:
    if (ctx->pc == 0x48C2E4u) {
        ctx->pc = 0x48C2E8u;
        goto label_48c2e8;
    }
    ctx->pc = 0x48C2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C2E8u;
label_48c2e8:
    // 0x48c2e8: 0x0  nop
    ctx->pc = 0x48c2e8u;
    // NOP
label_48c2ec:
    // 0x48c2ec: 0x0  nop
    ctx->pc = 0x48c2ecu;
    // NOP
    ctx->pc = 0x48c2f0u;
}
