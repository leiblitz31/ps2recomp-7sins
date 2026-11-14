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

// Function: sub_0018AFC0
// Address: 0x18afc0 - 0x18b2b0
void sub_0018AFC0_0x18afc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AFC0_0x18afc0");
#endif

    switch (ctx->pc) {
        case 0x18afc0u: goto label_18afc0;
        case 0x18afc4u: goto label_18afc4;
        case 0x18afc8u: goto label_18afc8;
        case 0x18afccu: goto label_18afcc;
        case 0x18afd0u: goto label_18afd0;
        case 0x18afd4u: goto label_18afd4;
        case 0x18afd8u: goto label_18afd8;
        case 0x18afdcu: goto label_18afdc;
        case 0x18afe0u: goto label_18afe0;
        case 0x18afe4u: goto label_18afe4;
        case 0x18afe8u: goto label_18afe8;
        case 0x18afecu: goto label_18afec;
        case 0x18aff0u: goto label_18aff0;
        case 0x18aff4u: goto label_18aff4;
        case 0x18aff8u: goto label_18aff8;
        case 0x18affcu: goto label_18affc;
        case 0x18b000u: goto label_18b000;
        case 0x18b004u: goto label_18b004;
        case 0x18b008u: goto label_18b008;
        case 0x18b00cu: goto label_18b00c;
        case 0x18b010u: goto label_18b010;
        case 0x18b014u: goto label_18b014;
        case 0x18b018u: goto label_18b018;
        case 0x18b01cu: goto label_18b01c;
        case 0x18b020u: goto label_18b020;
        case 0x18b024u: goto label_18b024;
        case 0x18b028u: goto label_18b028;
        case 0x18b02cu: goto label_18b02c;
        case 0x18b030u: goto label_18b030;
        case 0x18b034u: goto label_18b034;
        case 0x18b038u: goto label_18b038;
        case 0x18b03cu: goto label_18b03c;
        case 0x18b040u: goto label_18b040;
        case 0x18b044u: goto label_18b044;
        case 0x18b048u: goto label_18b048;
        case 0x18b04cu: goto label_18b04c;
        case 0x18b050u: goto label_18b050;
        case 0x18b054u: goto label_18b054;
        case 0x18b058u: goto label_18b058;
        case 0x18b05cu: goto label_18b05c;
        case 0x18b060u: goto label_18b060;
        case 0x18b064u: goto label_18b064;
        case 0x18b068u: goto label_18b068;
        case 0x18b06cu: goto label_18b06c;
        case 0x18b070u: goto label_18b070;
        case 0x18b074u: goto label_18b074;
        case 0x18b078u: goto label_18b078;
        case 0x18b07cu: goto label_18b07c;
        case 0x18b080u: goto label_18b080;
        case 0x18b084u: goto label_18b084;
        case 0x18b088u: goto label_18b088;
        case 0x18b08cu: goto label_18b08c;
        case 0x18b090u: goto label_18b090;
        case 0x18b094u: goto label_18b094;
        case 0x18b098u: goto label_18b098;
        case 0x18b09cu: goto label_18b09c;
        case 0x18b0a0u: goto label_18b0a0;
        case 0x18b0a4u: goto label_18b0a4;
        case 0x18b0a8u: goto label_18b0a8;
        case 0x18b0acu: goto label_18b0ac;
        case 0x18b0b0u: goto label_18b0b0;
        case 0x18b0b4u: goto label_18b0b4;
        case 0x18b0b8u: goto label_18b0b8;
        case 0x18b0bcu: goto label_18b0bc;
        case 0x18b0c0u: goto label_18b0c0;
        case 0x18b0c4u: goto label_18b0c4;
        case 0x18b0c8u: goto label_18b0c8;
        case 0x18b0ccu: goto label_18b0cc;
        case 0x18b0d0u: goto label_18b0d0;
        case 0x18b0d4u: goto label_18b0d4;
        case 0x18b0d8u: goto label_18b0d8;
        case 0x18b0dcu: goto label_18b0dc;
        case 0x18b0e0u: goto label_18b0e0;
        case 0x18b0e4u: goto label_18b0e4;
        case 0x18b0e8u: goto label_18b0e8;
        case 0x18b0ecu: goto label_18b0ec;
        case 0x18b0f0u: goto label_18b0f0;
        case 0x18b0f4u: goto label_18b0f4;
        case 0x18b0f8u: goto label_18b0f8;
        case 0x18b0fcu: goto label_18b0fc;
        case 0x18b100u: goto label_18b100;
        case 0x18b104u: goto label_18b104;
        case 0x18b108u: goto label_18b108;
        case 0x18b10cu: goto label_18b10c;
        case 0x18b110u: goto label_18b110;
        case 0x18b114u: goto label_18b114;
        case 0x18b118u: goto label_18b118;
        case 0x18b11cu: goto label_18b11c;
        case 0x18b120u: goto label_18b120;
        case 0x18b124u: goto label_18b124;
        case 0x18b128u: goto label_18b128;
        case 0x18b12cu: goto label_18b12c;
        case 0x18b130u: goto label_18b130;
        case 0x18b134u: goto label_18b134;
        case 0x18b138u: goto label_18b138;
        case 0x18b13cu: goto label_18b13c;
        case 0x18b140u: goto label_18b140;
        case 0x18b144u: goto label_18b144;
        case 0x18b148u: goto label_18b148;
        case 0x18b14cu: goto label_18b14c;
        case 0x18b150u: goto label_18b150;
        case 0x18b154u: goto label_18b154;
        case 0x18b158u: goto label_18b158;
        case 0x18b15cu: goto label_18b15c;
        case 0x18b160u: goto label_18b160;
        case 0x18b164u: goto label_18b164;
        case 0x18b168u: goto label_18b168;
        case 0x18b16cu: goto label_18b16c;
        case 0x18b170u: goto label_18b170;
        case 0x18b174u: goto label_18b174;
        case 0x18b178u: goto label_18b178;
        case 0x18b17cu: goto label_18b17c;
        case 0x18b180u: goto label_18b180;
        case 0x18b184u: goto label_18b184;
        case 0x18b188u: goto label_18b188;
        case 0x18b18cu: goto label_18b18c;
        case 0x18b190u: goto label_18b190;
        case 0x18b194u: goto label_18b194;
        case 0x18b198u: goto label_18b198;
        case 0x18b19cu: goto label_18b19c;
        case 0x18b1a0u: goto label_18b1a0;
        case 0x18b1a4u: goto label_18b1a4;
        case 0x18b1a8u: goto label_18b1a8;
        case 0x18b1acu: goto label_18b1ac;
        case 0x18b1b0u: goto label_18b1b0;
        case 0x18b1b4u: goto label_18b1b4;
        case 0x18b1b8u: goto label_18b1b8;
        case 0x18b1bcu: goto label_18b1bc;
        case 0x18b1c0u: goto label_18b1c0;
        case 0x18b1c4u: goto label_18b1c4;
        case 0x18b1c8u: goto label_18b1c8;
        case 0x18b1ccu: goto label_18b1cc;
        case 0x18b1d0u: goto label_18b1d0;
        case 0x18b1d4u: goto label_18b1d4;
        case 0x18b1d8u: goto label_18b1d8;
        case 0x18b1dcu: goto label_18b1dc;
        case 0x18b1e0u: goto label_18b1e0;
        case 0x18b1e4u: goto label_18b1e4;
        case 0x18b1e8u: goto label_18b1e8;
        case 0x18b1ecu: goto label_18b1ec;
        case 0x18b1f0u: goto label_18b1f0;
        case 0x18b1f4u: goto label_18b1f4;
        case 0x18b1f8u: goto label_18b1f8;
        case 0x18b1fcu: goto label_18b1fc;
        case 0x18b200u: goto label_18b200;
        case 0x18b204u: goto label_18b204;
        case 0x18b208u: goto label_18b208;
        case 0x18b20cu: goto label_18b20c;
        case 0x18b210u: goto label_18b210;
        case 0x18b214u: goto label_18b214;
        case 0x18b218u: goto label_18b218;
        case 0x18b21cu: goto label_18b21c;
        case 0x18b220u: goto label_18b220;
        case 0x18b224u: goto label_18b224;
        case 0x18b228u: goto label_18b228;
        case 0x18b22cu: goto label_18b22c;
        case 0x18b230u: goto label_18b230;
        case 0x18b234u: goto label_18b234;
        case 0x18b238u: goto label_18b238;
        case 0x18b23cu: goto label_18b23c;
        case 0x18b240u: goto label_18b240;
        case 0x18b244u: goto label_18b244;
        case 0x18b248u: goto label_18b248;
        case 0x18b24cu: goto label_18b24c;
        case 0x18b250u: goto label_18b250;
        case 0x18b254u: goto label_18b254;
        case 0x18b258u: goto label_18b258;
        case 0x18b25cu: goto label_18b25c;
        case 0x18b260u: goto label_18b260;
        case 0x18b264u: goto label_18b264;
        case 0x18b268u: goto label_18b268;
        case 0x18b26cu: goto label_18b26c;
        case 0x18b270u: goto label_18b270;
        case 0x18b274u: goto label_18b274;
        case 0x18b278u: goto label_18b278;
        case 0x18b27cu: goto label_18b27c;
        case 0x18b280u: goto label_18b280;
        case 0x18b284u: goto label_18b284;
        case 0x18b288u: goto label_18b288;
        case 0x18b28cu: goto label_18b28c;
        case 0x18b290u: goto label_18b290;
        case 0x18b294u: goto label_18b294;
        case 0x18b298u: goto label_18b298;
        case 0x18b29cu: goto label_18b29c;
        case 0x18b2a0u: goto label_18b2a0;
        case 0x18b2a4u: goto label_18b2a4;
        case 0x18b2a8u: goto label_18b2a8;
        case 0x18b2acu: goto label_18b2ac;
        default: break;
    }

    ctx->pc = 0x18afc0u;

label_18afc0:
    // 0x18afc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18afc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18afc4:
    // 0x18afc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18afc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18afc8:
    // 0x18afc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18afcc:
    // 0x18afcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18afccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18afd0:
    // 0x18afd0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x18afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_18afd4:
    // 0x18afd4: 0xc0557e8  jal         func_155FA0
label_18afd8:
    if (ctx->pc == 0x18AFD8u) {
        ctx->pc = 0x18AFDCu;
        goto label_18afdc;
    }
    ctx->pc = 0x18AFD4u;
    SET_GPR_U32(ctx, 31, 0x18AFDCu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x18AFD4u, 0x18AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AFDCu;
label_18afdc:
    // 0x18afdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18afdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18afe0:
    // 0x18afe0: 0x24634070  addiu       $v1, $v1, 0x4070
    ctx->pc = 0x18afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16496));
label_18afe4:
    // 0x18afe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18afe8:
    // 0x18afe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18afec:
    // 0x18afec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18aff0:
    // 0x18aff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18aff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18aff4:
    // 0x18aff4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18aff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18aff8:
    // 0x18aff8: 0x3e00008  jr          $ra
label_18affc:
    if (ctx->pc == 0x18AFFCu) {
        ctx->pc = 0x18B000u;
        goto label_18b000;
    }
    ctx->pc = 0x18AFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B000u;
label_18b000:
    // 0x18b000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18b004:
    // 0x18b004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18b008:
    // 0x18b008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18b00c:
    // 0x18b00c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x18b00cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_18b010:
    // 0x18b010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18b010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b014:
    // 0x18b014: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_18b018:
    if (ctx->pc == 0x18B018u) {
        ctx->pc = 0x18B01Cu;
        goto label_18b01c;
    }
    ctx->pc = 0x18B014u;
    {
        const bool branch_taken_0x18b014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b014) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18B01Cu;
label_18b01c:
    // 0x18b01c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_18b020:
    // 0x18b020: 0x24634070  addiu       $v1, $v1, 0x4070
    ctx->pc = 0x18b020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16496));
label_18b024:
    // 0x18b024: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18b024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b028:
    // 0x18b028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18b028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_18b02c:
    // 0x18b02c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18b02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b030:
    // 0x18b030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18b030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b034:
    // 0x18b034: 0xc055950  jal         func_156540
label_18b038:
    if (ctx->pc == 0x18B038u) {
        ctx->pc = 0x18B03Cu;
        goto label_18b03c;
    }
    ctx->pc = 0x18B034u;
    SET_GPR_U32(ctx, 31, 0x18B03Cu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x18B034u, 0x18B03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B03Cu;
label_18b03c:
    // 0x18b03c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x18b03cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_18b040:
    // 0x18b040: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x18b040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_18b044:
    // 0x18b044: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18b044u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_18b048:
    // 0x18b048: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_18b04c:
    if (ctx->pc == 0x18B04Cu) {
        ctx->pc = 0x18B050u;
        goto label_18b050;
    }
    ctx->pc = 0x18B048u;
    {
        const bool branch_taken_0x18b048 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x18b048) {
            ctx->pc = 0x18B05Cu;
            goto label_18b05c;
        }
    }
    ctx->pc = 0x18B050u;
label_18b050:
    // 0x18b050: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18b050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b054:
    // 0x18b054: 0xc0ba070  jal         func_2E81C0
label_18b058:
    if (ctx->pc == 0x18B058u) {
        ctx->pc = 0x18B05Cu;
        goto label_18b05c;
    }
    ctx->pc = 0x18B054u;
    SET_GPR_U32(ctx, 31, 0x18B05Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x18B054u, 0x18B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B05Cu;
label_18b05c:
    // 0x18b05c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b060:
    // 0x18b060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18b064:
    // 0x18b064: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18b064u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b068:
    // 0x18b068: 0x3e00008  jr          $ra
label_18b06c:
    if (ctx->pc == 0x18B06Cu) {
        ctx->pc = 0x18B070u;
        goto label_18b070;
    }
    ctx->pc = 0x18B068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B070u;
label_18b070:
    // 0x18b070: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18b074:
    // 0x18b074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18b078:
    // 0x18b078: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b07c:
    // 0x18b07c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_18b080:
    // 0x18b080: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18b080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18b084:
    // 0x18b084: 0xc055974  jal         func_1565D0
label_18b088:
    if (ctx->pc == 0x18B088u) {
        ctx->pc = 0x18B08Cu;
        goto label_18b08c;
    }
    ctx->pc = 0x18B084u;
    SET_GPR_U32(ctx, 31, 0x18B08Cu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x18B084u, 0x18B08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B08Cu;
label_18b08c:
    // 0x18b08c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18b08cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18b090:
    // 0x18b090: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18b090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b094:
    // 0x18b094: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18b098:
    // 0x18b098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b09c:
    // 0x18b09c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18b09cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b0a0:
    // 0x18b0a0: 0x3e00008  jr          $ra
label_18b0a4:
    if (ctx->pc == 0x18B0A4u) {
        ctx->pc = 0x18B0A8u;
        goto label_18b0a8;
    }
    ctx->pc = 0x18B0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B0A8u;
label_18b0a8:
    // 0x18b0a8: 0x0  nop
    ctx->pc = 0x18b0a8u;
    // NOP
label_18b0ac:
    // 0x18b0ac: 0x0  nop
    ctx->pc = 0x18b0acu;
    // NOP
label_18b0b0:
    // 0x18b0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18b0b4:
    // 0x18b0b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18b0b8:
    // 0x18b0b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b0bc:
    // 0x18b0bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x18b0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_18b0c0:
    // 0x18b0c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18b0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_18b0c4:
    // 0x18b0c4: 0xc0559ac  jal         func_1566B0
label_18b0c8:
    if (ctx->pc == 0x18B0C8u) {
        ctx->pc = 0x18B0CCu;
        goto label_18b0cc;
    }
    ctx->pc = 0x18B0C4u;
    SET_GPR_U32(ctx, 31, 0x18B0CCu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x18B0C4u, 0x18B0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B0CCu;
label_18b0cc:
    // 0x18b0cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x18b0ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_18b0d0:
    // 0x18b0d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18b0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b0d4:
    // 0x18b0d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b0d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18b0d8:
    // 0x18b0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b0dc:
    // 0x18b0dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18b0dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b0e0:
    // 0x18b0e0: 0x3e00008  jr          $ra
label_18b0e4:
    if (ctx->pc == 0x18B0E4u) {
        ctx->pc = 0x18B0E8u;
        goto label_18b0e8;
    }
    ctx->pc = 0x18B0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B0E8u;
label_18b0e8:
    // 0x18b0e8: 0x0  nop
    ctx->pc = 0x18b0e8u;
    // NOP
label_18b0ec:
    // 0x18b0ec: 0x0  nop
    ctx->pc = 0x18b0ecu;
    // NOP
label_18b0f0:
    // 0x18b0f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18b0f4:
    // 0x18b0f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18b0f8:
    // 0x18b0f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18b0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18b0fc:
    // 0x18b0fc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x18b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_18b100:
    // 0x18b100: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x18b100u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
label_18b104:
    // 0x18b104: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18b104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b108:
    // 0x18b108: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x18b108u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_18b10c:
    // 0x18b10c: 0xc055a78  jal         func_1569E0
label_18b110:
    if (ctx->pc == 0x18B110u) {
        ctx->pc = 0x18B114u;
        goto label_18b114;
    }
    ctx->pc = 0x18B10Cu;
    SET_GPR_U32(ctx, 31, 0x18B114u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x18B10Cu, 0x18B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B114u;
label_18b114:
    // 0x18b114: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18b114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b118:
    // 0x18b118: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18b118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18b11c:
    // 0x18b11c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x18b11cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_18b120:
    // 0x18b120: 0x320f809  jalr        $t9
label_18b124:
    if (ctx->pc == 0x18B124u) {
        ctx->pc = 0x18B128u;
        goto label_18b128;
    }
    ctx->pc = 0x18B120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18B128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B120u, 0x18B128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B128u;
label_18b128:
    // 0x18b128: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18b128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b12c:
    // 0x18b12c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18b12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18b130:
    // 0x18b130: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x18b130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_18b134:
    // 0x18b134: 0x320f809  jalr        $t9
label_18b138:
    if (ctx->pc == 0x18B138u) {
        ctx->pc = 0x18B13Cu;
        goto label_18b13c;
    }
    ctx->pc = 0x18B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18B13Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B134u, 0x18B13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B13Cu;
label_18b13c:
    // 0x18b13c: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x18b13cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_18b140:
    // 0x18b140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x18b140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_18b144:
    // 0x18b144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18b144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18b148:
    // 0x18b148: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
label_18b14c:
    if (ctx->pc == 0x18B14Cu) {
        ctx->pc = 0x18B150u;
        goto label_18b150;
    }
    ctx->pc = 0x18B148u;
    {
        const bool branch_taken_0x18b148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18b148) {
            ctx->pc = 0x18B1CCu;
            goto label_18b1cc;
        }
    }
    ctx->pc = 0x18B150u;
label_18b150:
    // 0x18b150: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x18b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b154:
    // 0x18b154: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b158:
    // 0x18b158: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x18b158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_18b15c:
    // 0x18b15c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b160:
    // 0x18b160: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x18b160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_18b164:
    // 0x18b164: 0x24a55370  addiu       $a1, $a1, 0x5370
    ctx->pc = 0x18b164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21360));
label_18b168:
    // 0x18b168: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x18b168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18b16c:
    // 0x18b16c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x18b16cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_18b170:
    // 0x18b170: 0x320f809  jalr        $t9
label_18b174:
    if (ctx->pc == 0x18B174u) {
        ctx->pc = 0x18B178u;
        goto label_18b178;
    }
    ctx->pc = 0x18B170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x18B178u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B170u, 0x18B178u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18B178u;
label_18b178:
    // 0x18b178: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x18b178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b17c:
    // 0x18b17c: 0x278591c0  addiu       $a1, $gp, -0x6E40
    ctx->pc = 0x18b17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939072));
label_18b180:
    // 0x18b180: 0xc05621c  jal         func_158870
label_18b184:
    if (ctx->pc == 0x18B184u) {
        ctx->pc = 0x18B188u;
        goto label_18b188;
    }
    ctx->pc = 0x18B180u;
    SET_GPR_U32(ctx, 31, 0x18B188u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x18B180u, 0x18B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B188u;
label_18b188:
    // 0x18b188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18b188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18b18c:
    // 0x18b18c: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_18b190:
    if (ctx->pc == 0x18B190u) {
        ctx->pc = 0x18B194u;
        goto label_18b194;
    }
    ctx->pc = 0x18B18Cu;
    {
        const bool branch_taken_0x18b18c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b18c) {
            ctx->pc = 0x18B1CCu;
            goto label_18b1cc;
        }
    }
    ctx->pc = 0x18B194u;
label_18b194:
    // 0x18b194: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b198:
    // 0x18b198: 0x0  nop
    ctx->pc = 0x18b198u;
    // NOP
label_18b19c:
    // 0x18b19c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x18b19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_18b1a0:
    // 0x18b1a0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18b1a4:
    // 0x18b1a4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x18b1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_18b1a8:
    // 0x18b1a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x18b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_18b1ac:
    // 0x18b1ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18b1acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18b1b0:
    // 0x18b1b0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18b1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18b1b4:
    // 0x18b1b4: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x18b1b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_18b1b8:
    // 0x18b1b8: 0xc78d8280  lwc1        $f13, -0x7D80($gp)
    ctx->pc = 0x18b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_18b1bc:
    // 0x18b1bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18b1bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b1c0:
    // 0x18b1c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18b1c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b1c4:
    // 0x18b1c4: 0xc08b9fc  jal         func_22E7F0
label_18b1c8:
    if (ctx->pc == 0x18B1C8u) {
        ctx->pc = 0x18B1CCu;
        goto label_18b1cc;
    }
    ctx->pc = 0x18B1C4u;
    SET_GPR_U32(ctx, 31, 0x18B1CCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x18B1C4u, 0x18B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1CCu;
label_18b1cc:
    // 0x18b1cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18b1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18b1d0:
    // 0x18b1d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18b1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18b1d4:
    // 0x18b1d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x18b1d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_18b1d8:
    // 0x18b1d8: 0x3e00008  jr          $ra
label_18b1dc:
    if (ctx->pc == 0x18B1DCu) {
        ctx->pc = 0x18B1E0u;
        goto label_18b1e0;
    }
    ctx->pc = 0x18B1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B1E0u;
label_18b1e0:
    // 0x18b1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18b1e4:
    // 0x18b1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18b1e8:
    // 0x18b1e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18b1ec:
    // 0x18b1ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18b1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b1f0:
    // 0x18b1f0: 0xc055b3c  jal         func_156CF0
label_18b1f4:
    if (ctx->pc == 0x18B1F4u) {
        ctx->pc = 0x18B1F8u;
        goto label_18b1f8;
    }
    ctx->pc = 0x18B1F0u;
    SET_GPR_U32(ctx, 31, 0x18B1F8u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x18B1F0u, 0x18B1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1F8u;
label_18b1f8:
    // 0x18b1f8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18b1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b1fc:
    // 0x18b1fc: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x18b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b200:
    // 0x18b200: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b204:
    // 0x18b204: 0x0  nop
    ctx->pc = 0x18b204u;
    // NOP
label_18b208:
    // 0x18b208: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18b208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18b20c:
    // 0x18b20c: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_18b210:
    if (ctx->pc == 0x18B210u) {
        ctx->pc = 0x18B214u;
        goto label_18b214;
    }
    ctx->pc = 0x18B20Cu;
    {
        const bool branch_taken_0x18b20c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b20c) {
            ctx->pc = 0x18B254u;
            goto label_18b254;
        }
    }
    ctx->pc = 0x18B214u;
label_18b214:
    // 0x18b214: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x18b214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_18b218:
    // 0x18b218: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x18b218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b21c:
    // 0x18b21c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18b21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b220:
    // 0x18b220: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x18b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18b224:
    // 0x18b224: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18b224u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18b228:
    // 0x18b228: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x18b228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
label_18b22c:
    // 0x18b22c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18b22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b230:
    // 0x18b230: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x18b230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18b234:
    // 0x18b234: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18b234u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18b238:
    // 0x18b238: 0x0  nop
    ctx->pc = 0x18b238u;
    // NOP
label_18b23c:
    // 0x18b23c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18b23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18b240:
    // 0x18b240: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_18b244:
    if (ctx->pc == 0x18B244u) {
        ctx->pc = 0x18B248u;
        goto label_18b248;
    }
    ctx->pc = 0x18B240u;
    {
        const bool branch_taken_0x18b240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b240) {
            ctx->pc = 0x18B254u;
            goto label_18b254;
        }
    }
    ctx->pc = 0x18B248u;
label_18b248:
    // 0x18b248: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18b248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b24c:
    // 0x18b24c: 0xc062cac  jal         func_18B2B0
label_18b250:
    if (ctx->pc == 0x18B250u) {
        ctx->pc = 0x18B254u;
        goto label_18b254;
    }
    ctx->pc = 0x18B24Cu;
    SET_GPR_U32(ctx, 31, 0x18B254u);
    ctx->pc = 0x18B2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2B0u, 0x18B24Cu, 0x18B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B254u;
label_18b254:
    // 0x18b254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18b258:
    // 0x18b258: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18b258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18b25c:
    // 0x18b25c: 0x3e00008  jr          $ra
label_18b260:
    if (ctx->pc == 0x18B260u) {
        ctx->pc = 0x18B264u;
        goto label_18b264;
    }
    ctx->pc = 0x18B25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B264u;
label_18b264:
    // 0x18b264: 0x0  nop
    ctx->pc = 0x18b264u;
    // NOP
label_18b268:
    // 0x18b268: 0x0  nop
    ctx->pc = 0x18b268u;
    // NOP
label_18b26c:
    // 0x18b26c: 0x0  nop
    ctx->pc = 0x18b26cu;
    // NOP
label_18b270:
    // 0x18b270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18b274:
    // 0x18b274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18b278:
    // 0x18b278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18b278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18b27c:
    // 0x18b27c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18b27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18b280:
    // 0x18b280: 0xc055a84  jal         func_156A10
label_18b284:
    if (ctx->pc == 0x18B284u) {
        ctx->pc = 0x18B288u;
        goto label_18b288;
    }
    ctx->pc = 0x18B280u;
    SET_GPR_U32(ctx, 31, 0x18B288u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x18B280u, 0x18B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B288u;
label_18b288:
    // 0x18b288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18b28c:
    // 0x18b28c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18b28cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_18b290:
    // 0x18b290: 0x3e00008  jr          $ra
label_18b294:
    if (ctx->pc == 0x18B294u) {
        ctx->pc = 0x18B298u;
        goto label_18b298;
    }
    ctx->pc = 0x18B290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B298u;
label_18b298:
    // 0x18b298: 0x0  nop
    ctx->pc = 0x18b298u;
    // NOP
label_18b29c:
    // 0x18b29c: 0x0  nop
    ctx->pc = 0x18b29cu;
    // NOP
label_18b2a0:
    // 0x18b2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18b2a4:
    // 0x18b2a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18b2a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_18b2a8:
    // 0x18b2a8: 0x3e00008  jr          $ra
label_18b2ac:
    if (ctx->pc == 0x18B2ACu) {
        ctx->pc = 0x18B2B0u;
        goto label_fallthrough_0x18b2a8;
    }
    ctx->pc = 0x18B2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18b2a8:
    ctx->pc = 0x18B2B0u;
}
