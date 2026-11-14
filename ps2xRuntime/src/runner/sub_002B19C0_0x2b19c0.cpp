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

// Function: sub_002B19C0
// Address: 0x2b19c0 - 0x2b1bf0
void sub_002B19C0_0x2b19c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B19C0_0x2b19c0");
#endif

    switch (ctx->pc) {
        case 0x2b19c0u: goto label_2b19c0;
        case 0x2b19c4u: goto label_2b19c4;
        case 0x2b19c8u: goto label_2b19c8;
        case 0x2b19ccu: goto label_2b19cc;
        case 0x2b19d0u: goto label_2b19d0;
        case 0x2b19d4u: goto label_2b19d4;
        case 0x2b19d8u: goto label_2b19d8;
        case 0x2b19dcu: goto label_2b19dc;
        case 0x2b19e0u: goto label_2b19e0;
        case 0x2b19e4u: goto label_2b19e4;
        case 0x2b19e8u: goto label_2b19e8;
        case 0x2b19ecu: goto label_2b19ec;
        case 0x2b19f0u: goto label_2b19f0;
        case 0x2b19f4u: goto label_2b19f4;
        case 0x2b19f8u: goto label_2b19f8;
        case 0x2b19fcu: goto label_2b19fc;
        case 0x2b1a00u: goto label_2b1a00;
        case 0x2b1a04u: goto label_2b1a04;
        case 0x2b1a08u: goto label_2b1a08;
        case 0x2b1a0cu: goto label_2b1a0c;
        case 0x2b1a10u: goto label_2b1a10;
        case 0x2b1a14u: goto label_2b1a14;
        case 0x2b1a18u: goto label_2b1a18;
        case 0x2b1a1cu: goto label_2b1a1c;
        case 0x2b1a20u: goto label_2b1a20;
        case 0x2b1a24u: goto label_2b1a24;
        case 0x2b1a28u: goto label_2b1a28;
        case 0x2b1a2cu: goto label_2b1a2c;
        case 0x2b1a30u: goto label_2b1a30;
        case 0x2b1a34u: goto label_2b1a34;
        case 0x2b1a38u: goto label_2b1a38;
        case 0x2b1a3cu: goto label_2b1a3c;
        case 0x2b1a40u: goto label_2b1a40;
        case 0x2b1a44u: goto label_2b1a44;
        case 0x2b1a48u: goto label_2b1a48;
        case 0x2b1a4cu: goto label_2b1a4c;
        case 0x2b1a50u: goto label_2b1a50;
        case 0x2b1a54u: goto label_2b1a54;
        case 0x2b1a58u: goto label_2b1a58;
        case 0x2b1a5cu: goto label_2b1a5c;
        case 0x2b1a60u: goto label_2b1a60;
        case 0x2b1a64u: goto label_2b1a64;
        case 0x2b1a68u: goto label_2b1a68;
        case 0x2b1a6cu: goto label_2b1a6c;
        case 0x2b1a70u: goto label_2b1a70;
        case 0x2b1a74u: goto label_2b1a74;
        case 0x2b1a78u: goto label_2b1a78;
        case 0x2b1a7cu: goto label_2b1a7c;
        case 0x2b1a80u: goto label_2b1a80;
        case 0x2b1a84u: goto label_2b1a84;
        case 0x2b1a88u: goto label_2b1a88;
        case 0x2b1a8cu: goto label_2b1a8c;
        case 0x2b1a90u: goto label_2b1a90;
        case 0x2b1a94u: goto label_2b1a94;
        case 0x2b1a98u: goto label_2b1a98;
        case 0x2b1a9cu: goto label_2b1a9c;
        case 0x2b1aa0u: goto label_2b1aa0;
        case 0x2b1aa4u: goto label_2b1aa4;
        case 0x2b1aa8u: goto label_2b1aa8;
        case 0x2b1aacu: goto label_2b1aac;
        case 0x2b1ab0u: goto label_2b1ab0;
        case 0x2b1ab4u: goto label_2b1ab4;
        case 0x2b1ab8u: goto label_2b1ab8;
        case 0x2b1abcu: goto label_2b1abc;
        case 0x2b1ac0u: goto label_2b1ac0;
        case 0x2b1ac4u: goto label_2b1ac4;
        case 0x2b1ac8u: goto label_2b1ac8;
        case 0x2b1accu: goto label_2b1acc;
        case 0x2b1ad0u: goto label_2b1ad0;
        case 0x2b1ad4u: goto label_2b1ad4;
        case 0x2b1ad8u: goto label_2b1ad8;
        case 0x2b1adcu: goto label_2b1adc;
        case 0x2b1ae0u: goto label_2b1ae0;
        case 0x2b1ae4u: goto label_2b1ae4;
        case 0x2b1ae8u: goto label_2b1ae8;
        case 0x2b1aecu: goto label_2b1aec;
        case 0x2b1af0u: goto label_2b1af0;
        case 0x2b1af4u: goto label_2b1af4;
        case 0x2b1af8u: goto label_2b1af8;
        case 0x2b1afcu: goto label_2b1afc;
        case 0x2b1b00u: goto label_2b1b00;
        case 0x2b1b04u: goto label_2b1b04;
        case 0x2b1b08u: goto label_2b1b08;
        case 0x2b1b0cu: goto label_2b1b0c;
        case 0x2b1b10u: goto label_2b1b10;
        case 0x2b1b14u: goto label_2b1b14;
        case 0x2b1b18u: goto label_2b1b18;
        case 0x2b1b1cu: goto label_2b1b1c;
        case 0x2b1b20u: goto label_2b1b20;
        case 0x2b1b24u: goto label_2b1b24;
        case 0x2b1b28u: goto label_2b1b28;
        case 0x2b1b2cu: goto label_2b1b2c;
        case 0x2b1b30u: goto label_2b1b30;
        case 0x2b1b34u: goto label_2b1b34;
        case 0x2b1b38u: goto label_2b1b38;
        case 0x2b1b3cu: goto label_2b1b3c;
        case 0x2b1b40u: goto label_2b1b40;
        case 0x2b1b44u: goto label_2b1b44;
        case 0x2b1b48u: goto label_2b1b48;
        case 0x2b1b4cu: goto label_2b1b4c;
        case 0x2b1b50u: goto label_2b1b50;
        case 0x2b1b54u: goto label_2b1b54;
        case 0x2b1b58u: goto label_2b1b58;
        case 0x2b1b5cu: goto label_2b1b5c;
        case 0x2b1b60u: goto label_2b1b60;
        case 0x2b1b64u: goto label_2b1b64;
        case 0x2b1b68u: goto label_2b1b68;
        case 0x2b1b6cu: goto label_2b1b6c;
        case 0x2b1b70u: goto label_2b1b70;
        case 0x2b1b74u: goto label_2b1b74;
        case 0x2b1b78u: goto label_2b1b78;
        case 0x2b1b7cu: goto label_2b1b7c;
        case 0x2b1b80u: goto label_2b1b80;
        case 0x2b1b84u: goto label_2b1b84;
        case 0x2b1b88u: goto label_2b1b88;
        case 0x2b1b8cu: goto label_2b1b8c;
        case 0x2b1b90u: goto label_2b1b90;
        case 0x2b1b94u: goto label_2b1b94;
        case 0x2b1b98u: goto label_2b1b98;
        case 0x2b1b9cu: goto label_2b1b9c;
        case 0x2b1ba0u: goto label_2b1ba0;
        case 0x2b1ba4u: goto label_2b1ba4;
        case 0x2b1ba8u: goto label_2b1ba8;
        case 0x2b1bacu: goto label_2b1bac;
        case 0x2b1bb0u: goto label_2b1bb0;
        case 0x2b1bb4u: goto label_2b1bb4;
        case 0x2b1bb8u: goto label_2b1bb8;
        case 0x2b1bbcu: goto label_2b1bbc;
        case 0x2b1bc0u: goto label_2b1bc0;
        case 0x2b1bc4u: goto label_2b1bc4;
        case 0x2b1bc8u: goto label_2b1bc8;
        case 0x2b1bccu: goto label_2b1bcc;
        case 0x2b1bd0u: goto label_2b1bd0;
        case 0x2b1bd4u: goto label_2b1bd4;
        case 0x2b1bd8u: goto label_2b1bd8;
        case 0x2b1bdcu: goto label_2b1bdc;
        case 0x2b1be0u: goto label_2b1be0;
        case 0x2b1be4u: goto label_2b1be4;
        case 0x2b1be8u: goto label_2b1be8;
        case 0x2b1becu: goto label_2b1bec;
        default: break;
    }

    ctx->pc = 0x2b19c0u;

label_2b19c0:
    // 0x2b19c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b19c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b19c4:
    // 0x2b19c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b19c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b19c8:
    // 0x2b19c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b19c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b19cc:
    // 0x2b19cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b19ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b19d0:
    // 0x2b19d0: 0xc084f04  jal         func_213C10
label_2b19d4:
    if (ctx->pc == 0x2B19D4u) {
        ctx->pc = 0x2B19D8u;
        goto label_2b19d8;
    }
    ctx->pc = 0x2B19D0u;
    SET_GPR_U32(ctx, 31, 0x2B19D8u);
    ctx->pc = 0x213C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C10u, 0x2B19D0u, 0x2B19D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B19D8u;
label_2b19d8:
    // 0x2b19d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2b19dc:
    // 0x2b19dc: 0x24636590  addiu       $v1, $v1, 0x6590
    ctx->pc = 0x2b19dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26000));
label_2b19e0:
    // 0x2b19e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b19e4:
    // 0x2b19e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2b19e8:
    // 0x2b19e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b19ec:
    // 0x2b19ec: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_2b19f0:
    // 0x2b19f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b19f4:
    // 0x2b19f4: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2b19f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_2b19f8:
    // 0x2b19f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b19f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b19fc:
    // 0x2b19fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b19fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1a00:
    // 0x2b1a00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2b1a04:
    // 0x2b1a04: 0x3e00008  jr          $ra
label_2b1a08:
    if (ctx->pc == 0x2B1A08u) {
        ctx->pc = 0x2B1A0Cu;
        goto label_2b1a0c;
    }
    ctx->pc = 0x2B1A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1A0Cu;
label_2b1a0c:
    // 0x2b1a0c: 0x0  nop
    ctx->pc = 0x2b1a0cu;
    // NOP
label_2b1a10:
    // 0x2b1a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1a14:
    // 0x2b1a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b1a18:
    // 0x2b1a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b1a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2b1a1c:
    // 0x2b1a1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b1a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_2b1a20:
    // 0x2b1a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1a24:
    // 0x2b1a24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2b1a28:
    if (ctx->pc == 0x2B1A28u) {
        ctx->pc = 0x2B1A2Cu;
        goto label_2b1a2c;
    }
    ctx->pc = 0x2B1A24u;
    {
        const bool branch_taken_0x2b1a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1a24) {
            ctx->pc = 0x2B1A6Cu;
            goto label_2b1a6c;
        }
    }
    ctx->pc = 0x2B1A2Cu;
label_2b1a2c:
    // 0x2b1a2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2b1a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2b1a30:
    // 0x2b1a30: 0x24636590  addiu       $v1, $v1, 0x6590
    ctx->pc = 0x2b1a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26000));
label_2b1a34:
    // 0x2b1a34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1a38:
    // 0x2b1a38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b1a38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2b1a3c:
    // 0x2b1a3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1a40:
    // 0x2b1a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b1a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1a44:
    // 0x2b1a44: 0xc084ffc  jal         func_213FF0
label_2b1a48:
    if (ctx->pc == 0x2B1A48u) {
        ctx->pc = 0x2B1A4Cu;
        goto label_2b1a4c;
    }
    ctx->pc = 0x2B1A44u;
    SET_GPR_U32(ctx, 31, 0x2B1A4Cu);
    ctx->pc = 0x213FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213FF0u, 0x2B1A44u, 0x2B1A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A4Cu;
label_2b1a4c:
    // 0x2b1a4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b1a4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1a50:
    // 0x2b1a50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b1a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2b1a54:
    // 0x2b1a54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b1a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2b1a58:
    // 0x2b1a58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_2b1a5c:
    if (ctx->pc == 0x2B1A5Cu) {
        ctx->pc = 0x2B1A60u;
        goto label_2b1a60;
    }
    ctx->pc = 0x2B1A58u;
    {
        const bool branch_taken_0x2b1a58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b1a58) {
            ctx->pc = 0x2B1A6Cu;
            goto label_2b1a6c;
        }
    }
    ctx->pc = 0x2B1A60u;
label_2b1a60:
    // 0x2b1a60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b1a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1a64:
    // 0x2b1a64: 0xc0ba070  jal         func_2E81C0
label_2b1a68:
    if (ctx->pc == 0x2B1A68u) {
        ctx->pc = 0x2B1A6Cu;
        goto label_2b1a6c;
    }
    ctx->pc = 0x2B1A64u;
    SET_GPR_U32(ctx, 31, 0x2B1A6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B1A64u, 0x2B1A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1A6Cu;
label_2b1a6c:
    // 0x2b1a6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1a70:
    // 0x2b1a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1a74:
    // 0x2b1a74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1a74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b1a78:
    // 0x2b1a78: 0x3e00008  jr          $ra
label_2b1a7c:
    if (ctx->pc == 0x2B1A7Cu) {
        ctx->pc = 0x2B1A80u;
        goto label_2b1a80;
    }
    ctx->pc = 0x2B1A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1A80u;
label_2b1a80:
    // 0x2b1a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b1a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b1a84:
    // 0x2b1a84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b1a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b1a88:
    // 0x2b1a88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b1a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b1a8c:
    // 0x2b1a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1a90:
    // 0x2b1a90: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2b1a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2b1a94:
    // 0x2b1a94: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2b1a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1a98:
    // 0x2b1a98: 0xc085020  jal         func_214080
label_2b1a9c:
    if (ctx->pc == 0x2B1A9Cu) {
        ctx->pc = 0x2B1AA0u;
        goto label_2b1aa0;
    }
    ctx->pc = 0x2B1A98u;
    SET_GPR_U32(ctx, 31, 0x2B1AA0u);
    ctx->pc = 0x214080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214080u, 0x2B1A98u, 0x2B1AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AA0u;
label_2b1aa0:
    // 0x2b1aa0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2b1aa0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1aa4:
    // 0x2b1aa4: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x2b1aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_2b1aa8:
    // 0x2b1aa8: 0xc119b68  jal         func_466DA0
label_2b1aac:
    if (ctx->pc == 0x2B1AACu) {
        ctx->pc = 0x2B1AB0u;
        goto label_2b1ab0;
    }
    ctx->pc = 0x2B1AA8u;
    SET_GPR_U32(ctx, 31, 0x2B1AB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B1AA8u, 0x2B1AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AB0u;
label_2b1ab0:
    // 0x2b1ab0: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x2b1ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_2b1ab4:
    // 0x2b1ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b1ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ab8:
    // 0x2b1ab8: 0xc0400e0  jal         func_100380
label_2b1abc:
    if (ctx->pc == 0x2B1ABCu) {
        ctx->pc = 0x2B1AC0u;
        goto label_2b1ac0;
    }
    ctx->pc = 0x2B1AB8u;
    SET_GPR_U32(ctx, 31, 0x2B1AC0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2B1AB8u, 0x2B1AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AC0u;
label_2b1ac0:
    // 0x2b1ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ac4:
    // 0x2b1ac4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_2b1ac8:
    if (ctx->pc == 0x2B1AC8u) {
        ctx->pc = 0x2B1ACCu;
        goto label_2b1acc;
    }
    ctx->pc = 0x2B1AC4u;
    {
        const bool branch_taken_0x2b1ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1ac4) {
            ctx->pc = 0x2B1ADCu;
            goto label_2b1adc;
        }
    }
    ctx->pc = 0x2B1ACCu;
label_2b1acc:
    // 0x2b1acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b1accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1ad0:
    // 0x2b1ad0: 0xc0af59c  jal         func_2BD670
label_2b1ad4:
    if (ctx->pc == 0x2B1AD4u) {
        ctx->pc = 0x2B1AD8u;
        goto label_2b1ad8;
    }
    ctx->pc = 0x2B1AD0u;
    SET_GPR_U32(ctx, 31, 0x2B1AD8u);
    ctx->pc = 0x2BD670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BD670u, 0x2B1AD0u, 0x2B1AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1AD8u;
label_2b1ad8:
    // 0x2b1ad8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b1ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1adc:
    // 0x2b1adc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1ae0:
    // 0x2b1ae0: 0xac500038  sw          $s0, 0x38($v0)
    ctx->pc = 0x2b1ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 16));
label_2b1ae4:
    // 0x2b1ae4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b1ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1ae8:
    // 0x2b1ae8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1aec:
    // 0x2b1aec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1af0:
    // 0x2b1af0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2b1af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2b1af4:
    // 0x2b1af4: 0x320f809  jalr        $t9
label_2b1af8:
    if (ctx->pc == 0x2B1AF8u) {
        ctx->pc = 0x2B1AFCu;
        goto label_2b1afc;
    }
    ctx->pc = 0x2B1AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1AFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1AF4u, 0x2B1AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1AFCu;
label_2b1afc:
    // 0x2b1afc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b1afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1b00:
    // 0x2b1b00: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2b1b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2b1b04:
    // 0x2b1b04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b1b08:
    // 0x2b1b08: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1b08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1b0c:
    // 0x2b1b0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1b10:
    // 0x2b1b10: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1b14:
    // 0x2b1b14: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2b1b14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1b18:
    // 0x2b1b18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b1b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b1b1c:
    // 0x2b1b1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b1b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1b20:
    // 0x2b1b20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b1b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1b24:
    // 0x2b1b24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1b28:
    // 0x2b1b28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b1b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2b1b2c:
    // 0x2b1b2c: 0x3e00008  jr          $ra
label_2b1b30:
    if (ctx->pc == 0x2B1B30u) {
        ctx->pc = 0x2B1B34u;
        goto label_2b1b34;
    }
    ctx->pc = 0x2B1B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1B34u;
label_2b1b34:
    // 0x2b1b34: 0x0  nop
    ctx->pc = 0x2b1b34u;
    // NOP
label_2b1b38:
    // 0x2b1b38: 0x0  nop
    ctx->pc = 0x2b1b38u;
    // NOP
label_2b1b3c:
    // 0x2b1b3c: 0x0  nop
    ctx->pc = 0x2b1b3cu;
    // NOP
label_2b1b40:
    // 0x2b1b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b1b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2b1b44:
    // 0x2b1b44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b1b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2b1b48:
    // 0x2b1b48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b1b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b1b4c:
    // 0x2b1b4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b1b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2b1b50:
    // 0x2b1b50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1b54:
    // 0x2b1b54: 0xc085204  jal         func_214810
label_2b1b58:
    if (ctx->pc == 0x2B1B58u) {
        ctx->pc = 0x2B1B5Cu;
        goto label_2b1b5c;
    }
    ctx->pc = 0x2B1B54u;
    SET_GPR_U32(ctx, 31, 0x2B1B5Cu);
    ctx->pc = 0x214810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214810u, 0x2B1B54u, 0x2B1B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1B5Cu;
label_2b1b5c:
    // 0x2b1b5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b1b5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1b60:
    // 0x2b1b60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1b64:
    // 0x2b1b64: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1b68:
    // 0x2b1b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b1b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1b6c:
    // 0x2b1b6c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2b1b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2b1b70:
    // 0x2b1b70: 0x320f809  jalr        $t9
label_2b1b74:
    if (ctx->pc == 0x2B1B74u) {
        ctx->pc = 0x2B1B78u;
        goto label_2b1b78;
    }
    ctx->pc = 0x2B1B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B1B78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1B70u, 0x2B1B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1B78u;
label_2b1b78:
    // 0x2b1b78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b1b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1b7c:
    // 0x2b1b7c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2b1b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2b1b80:
    // 0x2b1b80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b1b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2b1b84:
    // 0x2b1b84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2b1b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b1b88:
    // 0x2b1b88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1b8c:
    // 0x2b1b8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b1b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2b1b90:
    // 0x2b1b90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2b1b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2b1b94:
    // 0x2b1b94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1b98:
    // 0x2b1b98: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x2b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1b9c:
    // 0x2b1b9c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2b1ba0:
    if (ctx->pc == 0x2B1BA0u) {
        ctx->pc = 0x2B1BA4u;
        goto label_2b1ba4;
    }
    ctx->pc = 0x2B1B9Cu;
    {
        const bool branch_taken_0x2b1b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1b9c) {
            ctx->pc = 0x2B1BCCu;
            goto label_2b1bcc;
        }
    }
    ctx->pc = 0x2B1BA4u;
label_2b1ba4:
    // 0x2b1ba4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1ba8:
    // 0x2b1ba8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1bac:
    // 0x2b1bac: 0xc0ac6fc  jal         func_2B1BF0
label_2b1bb0:
    if (ctx->pc == 0x2B1BB0u) {
        ctx->pc = 0x2B1BB4u;
        goto label_2b1bb4;
    }
    ctx->pc = 0x2B1BACu;
    SET_GPR_U32(ctx, 31, 0x2B1BB4u);
    ctx->pc = 0x2B1BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1BF0u, 0x2B1BACu, 0x2B1BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BB4u;
label_2b1bb4:
    // 0x2b1bb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1bb8:
    // 0x2b1bb8: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x2b1bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_2b1bbc:
    // 0x2b1bbc: 0xc119c5c  jal         func_467170
label_2b1bc0:
    if (ctx->pc == 0x2B1BC0u) {
        ctx->pc = 0x2B1BC4u;
        goto label_2b1bc4;
    }
    ctx->pc = 0x2B1BBCu;
    SET_GPR_U32(ctx, 31, 0x2B1BC4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2B1BBCu, 0x2B1BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1BC4u;
label_2b1bc4:
    // 0x2b1bc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b1bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2b1bc8:
    // 0x2b1bc8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2b1bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_2b1bcc:
    // 0x2b1bcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b1bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b1bd0:
    // 0x2b1bd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b1bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b1bd4:
    // 0x2b1bd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b1bd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b1bd8:
    // 0x2b1bd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b1bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2b1bdc:
    // 0x2b1bdc: 0x3e00008  jr          $ra
label_2b1be0:
    if (ctx->pc == 0x2B1BE0u) {
        ctx->pc = 0x2B1BE4u;
        goto label_2b1be4;
    }
    ctx->pc = 0x2B1BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1BE4u;
label_2b1be4:
    // 0x2b1be4: 0x0  nop
    ctx->pc = 0x2b1be4u;
    // NOP
label_2b1be8:
    // 0x2b1be8: 0x0  nop
    ctx->pc = 0x2b1be8u;
    // NOP
label_2b1bec:
    // 0x2b1bec: 0x0  nop
    ctx->pc = 0x2b1becu;
    // NOP
    ctx->pc = 0x2b1bf0u;
}
