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

// Function: sub_00182980
// Address: 0x182980 - 0x182ca0
void sub_00182980_0x182980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182980_0x182980");
#endif

    switch (ctx->pc) {
        case 0x182980u: goto label_182980;
        case 0x182984u: goto label_182984;
        case 0x182988u: goto label_182988;
        case 0x18298cu: goto label_18298c;
        case 0x182990u: goto label_182990;
        case 0x182994u: goto label_182994;
        case 0x182998u: goto label_182998;
        case 0x18299cu: goto label_18299c;
        case 0x1829a0u: goto label_1829a0;
        case 0x1829a4u: goto label_1829a4;
        case 0x1829a8u: goto label_1829a8;
        case 0x1829acu: goto label_1829ac;
        case 0x1829b0u: goto label_1829b0;
        case 0x1829b4u: goto label_1829b4;
        case 0x1829b8u: goto label_1829b8;
        case 0x1829bcu: goto label_1829bc;
        case 0x1829c0u: goto label_1829c0;
        case 0x1829c4u: goto label_1829c4;
        case 0x1829c8u: goto label_1829c8;
        case 0x1829ccu: goto label_1829cc;
        case 0x1829d0u: goto label_1829d0;
        case 0x1829d4u: goto label_1829d4;
        case 0x1829d8u: goto label_1829d8;
        case 0x1829dcu: goto label_1829dc;
        case 0x1829e0u: goto label_1829e0;
        case 0x1829e4u: goto label_1829e4;
        case 0x1829e8u: goto label_1829e8;
        case 0x1829ecu: goto label_1829ec;
        case 0x1829f0u: goto label_1829f0;
        case 0x1829f4u: goto label_1829f4;
        case 0x1829f8u: goto label_1829f8;
        case 0x1829fcu: goto label_1829fc;
        case 0x182a00u: goto label_182a00;
        case 0x182a04u: goto label_182a04;
        case 0x182a08u: goto label_182a08;
        case 0x182a0cu: goto label_182a0c;
        case 0x182a10u: goto label_182a10;
        case 0x182a14u: goto label_182a14;
        case 0x182a18u: goto label_182a18;
        case 0x182a1cu: goto label_182a1c;
        case 0x182a20u: goto label_182a20;
        case 0x182a24u: goto label_182a24;
        case 0x182a28u: goto label_182a28;
        case 0x182a2cu: goto label_182a2c;
        case 0x182a30u: goto label_182a30;
        case 0x182a34u: goto label_182a34;
        case 0x182a38u: goto label_182a38;
        case 0x182a3cu: goto label_182a3c;
        case 0x182a40u: goto label_182a40;
        case 0x182a44u: goto label_182a44;
        case 0x182a48u: goto label_182a48;
        case 0x182a4cu: goto label_182a4c;
        case 0x182a50u: goto label_182a50;
        case 0x182a54u: goto label_182a54;
        case 0x182a58u: goto label_182a58;
        case 0x182a5cu: goto label_182a5c;
        case 0x182a60u: goto label_182a60;
        case 0x182a64u: goto label_182a64;
        case 0x182a68u: goto label_182a68;
        case 0x182a6cu: goto label_182a6c;
        case 0x182a70u: goto label_182a70;
        case 0x182a74u: goto label_182a74;
        case 0x182a78u: goto label_182a78;
        case 0x182a7cu: goto label_182a7c;
        case 0x182a80u: goto label_182a80;
        case 0x182a84u: goto label_182a84;
        case 0x182a88u: goto label_182a88;
        case 0x182a8cu: goto label_182a8c;
        case 0x182a90u: goto label_182a90;
        case 0x182a94u: goto label_182a94;
        case 0x182a98u: goto label_182a98;
        case 0x182a9cu: goto label_182a9c;
        case 0x182aa0u: goto label_182aa0;
        case 0x182aa4u: goto label_182aa4;
        case 0x182aa8u: goto label_182aa8;
        case 0x182aacu: goto label_182aac;
        case 0x182ab0u: goto label_182ab0;
        case 0x182ab4u: goto label_182ab4;
        case 0x182ab8u: goto label_182ab8;
        case 0x182abcu: goto label_182abc;
        case 0x182ac0u: goto label_182ac0;
        case 0x182ac4u: goto label_182ac4;
        case 0x182ac8u: goto label_182ac8;
        case 0x182accu: goto label_182acc;
        case 0x182ad0u: goto label_182ad0;
        case 0x182ad4u: goto label_182ad4;
        case 0x182ad8u: goto label_182ad8;
        case 0x182adcu: goto label_182adc;
        case 0x182ae0u: goto label_182ae0;
        case 0x182ae4u: goto label_182ae4;
        case 0x182ae8u: goto label_182ae8;
        case 0x182aecu: goto label_182aec;
        case 0x182af0u: goto label_182af0;
        case 0x182af4u: goto label_182af4;
        case 0x182af8u: goto label_182af8;
        case 0x182afcu: goto label_182afc;
        case 0x182b00u: goto label_182b00;
        case 0x182b04u: goto label_182b04;
        case 0x182b08u: goto label_182b08;
        case 0x182b0cu: goto label_182b0c;
        case 0x182b10u: goto label_182b10;
        case 0x182b14u: goto label_182b14;
        case 0x182b18u: goto label_182b18;
        case 0x182b1cu: goto label_182b1c;
        case 0x182b20u: goto label_182b20;
        case 0x182b24u: goto label_182b24;
        case 0x182b28u: goto label_182b28;
        case 0x182b2cu: goto label_182b2c;
        case 0x182b30u: goto label_182b30;
        case 0x182b34u: goto label_182b34;
        case 0x182b38u: goto label_182b38;
        case 0x182b3cu: goto label_182b3c;
        case 0x182b40u: goto label_182b40;
        case 0x182b44u: goto label_182b44;
        case 0x182b48u: goto label_182b48;
        case 0x182b4cu: goto label_182b4c;
        case 0x182b50u: goto label_182b50;
        case 0x182b54u: goto label_182b54;
        case 0x182b58u: goto label_182b58;
        case 0x182b5cu: goto label_182b5c;
        case 0x182b60u: goto label_182b60;
        case 0x182b64u: goto label_182b64;
        case 0x182b68u: goto label_182b68;
        case 0x182b6cu: goto label_182b6c;
        case 0x182b70u: goto label_182b70;
        case 0x182b74u: goto label_182b74;
        case 0x182b78u: goto label_182b78;
        case 0x182b7cu: goto label_182b7c;
        case 0x182b80u: goto label_182b80;
        case 0x182b84u: goto label_182b84;
        case 0x182b88u: goto label_182b88;
        case 0x182b8cu: goto label_182b8c;
        case 0x182b90u: goto label_182b90;
        case 0x182b94u: goto label_182b94;
        case 0x182b98u: goto label_182b98;
        case 0x182b9cu: goto label_182b9c;
        case 0x182ba0u: goto label_182ba0;
        case 0x182ba4u: goto label_182ba4;
        case 0x182ba8u: goto label_182ba8;
        case 0x182bacu: goto label_182bac;
        case 0x182bb0u: goto label_182bb0;
        case 0x182bb4u: goto label_182bb4;
        case 0x182bb8u: goto label_182bb8;
        case 0x182bbcu: goto label_182bbc;
        case 0x182bc0u: goto label_182bc0;
        case 0x182bc4u: goto label_182bc4;
        case 0x182bc8u: goto label_182bc8;
        case 0x182bccu: goto label_182bcc;
        case 0x182bd0u: goto label_182bd0;
        case 0x182bd4u: goto label_182bd4;
        case 0x182bd8u: goto label_182bd8;
        case 0x182bdcu: goto label_182bdc;
        case 0x182be0u: goto label_182be0;
        case 0x182be4u: goto label_182be4;
        case 0x182be8u: goto label_182be8;
        case 0x182becu: goto label_182bec;
        case 0x182bf0u: goto label_182bf0;
        case 0x182bf4u: goto label_182bf4;
        case 0x182bf8u: goto label_182bf8;
        case 0x182bfcu: goto label_182bfc;
        case 0x182c00u: goto label_182c00;
        case 0x182c04u: goto label_182c04;
        case 0x182c08u: goto label_182c08;
        case 0x182c0cu: goto label_182c0c;
        case 0x182c10u: goto label_182c10;
        case 0x182c14u: goto label_182c14;
        case 0x182c18u: goto label_182c18;
        case 0x182c1cu: goto label_182c1c;
        case 0x182c20u: goto label_182c20;
        case 0x182c24u: goto label_182c24;
        case 0x182c28u: goto label_182c28;
        case 0x182c2cu: goto label_182c2c;
        case 0x182c30u: goto label_182c30;
        case 0x182c34u: goto label_182c34;
        case 0x182c38u: goto label_182c38;
        case 0x182c3cu: goto label_182c3c;
        case 0x182c40u: goto label_182c40;
        case 0x182c44u: goto label_182c44;
        case 0x182c48u: goto label_182c48;
        case 0x182c4cu: goto label_182c4c;
        case 0x182c50u: goto label_182c50;
        case 0x182c54u: goto label_182c54;
        case 0x182c58u: goto label_182c58;
        case 0x182c5cu: goto label_182c5c;
        case 0x182c60u: goto label_182c60;
        case 0x182c64u: goto label_182c64;
        case 0x182c68u: goto label_182c68;
        case 0x182c6cu: goto label_182c6c;
        case 0x182c70u: goto label_182c70;
        case 0x182c74u: goto label_182c74;
        case 0x182c78u: goto label_182c78;
        case 0x182c7cu: goto label_182c7c;
        case 0x182c80u: goto label_182c80;
        case 0x182c84u: goto label_182c84;
        case 0x182c88u: goto label_182c88;
        case 0x182c8cu: goto label_182c8c;
        case 0x182c90u: goto label_182c90;
        case 0x182c94u: goto label_182c94;
        case 0x182c98u: goto label_182c98;
        case 0x182c9cu: goto label_182c9c;
        default: break;
    }

    ctx->pc = 0x182980u;

label_182980:
    // 0x182980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_182984:
    // 0x182984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182988:
    // 0x182988: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_18298c:
    // 0x18298c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182990:
    // 0x182990: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x182990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_182994:
    // 0x182994: 0xc0557e8  jal         func_155FA0
label_182998:
    if (ctx->pc == 0x182998u) {
        ctx->pc = 0x18299Cu;
        goto label_18299c;
    }
    ctx->pc = 0x182994u;
    SET_GPR_U32(ctx, 31, 0x18299Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x182994u, 0x18299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18299Cu;
label_18299c:
    // 0x18299c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x18299cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1829a0:
    // 0x1829a0: 0x24633f30  addiu       $v1, $v1, 0x3F30
    ctx->pc = 0x1829a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16176));
label_1829a4:
    // 0x1829a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1829a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1829a8:
    // 0x1829a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1829a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1829ac:
    // 0x1829ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1829acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1829b0:
    // 0x1829b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1829b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1829b4:
    // 0x1829b4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1829b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1829b8:
    // 0x1829b8: 0x3e00008  jr          $ra
label_1829bc:
    if (ctx->pc == 0x1829BCu) {
        ctx->pc = 0x1829C0u;
        goto label_1829c0;
    }
    ctx->pc = 0x1829B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1829B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1829C0u;
label_1829c0:
    // 0x1829c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1829c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1829c4:
    // 0x1829c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1829c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1829c8:
    // 0x1829c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1829c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1829cc:
    // 0x1829cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1829ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_1829d0:
    // 0x1829d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1829d4:
    // 0x1829d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1829d8:
    if (ctx->pc == 0x1829D8u) {
        ctx->pc = 0x1829DCu;
        goto label_1829dc;
    }
    ctx->pc = 0x1829D4u;
    {
        const bool branch_taken_0x1829d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1829d4) {
            ctx->pc = 0x182A1Cu;
            goto label_182a1c;
        }
    }
    ctx->pc = 0x1829DCu;
label_1829dc:
    // 0x1829dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1829dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1829e0:
    // 0x1829e0: 0x24633f30  addiu       $v1, $v1, 0x3F30
    ctx->pc = 0x1829e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16176));
label_1829e4:
    // 0x1829e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1829e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1829e8:
    // 0x1829e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1829e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1829ec:
    // 0x1829ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1829ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1829f0:
    // 0x1829f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1829f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1829f4:
    // 0x1829f4: 0xc055950  jal         func_156540
label_1829f8:
    if (ctx->pc == 0x1829F8u) {
        ctx->pc = 0x1829FCu;
        goto label_1829fc;
    }
    ctx->pc = 0x1829F4u;
    SET_GPR_U32(ctx, 31, 0x1829FCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x1829F4u, 0x1829FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1829FCu;
label_1829fc:
    // 0x1829fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1829fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_182a00:
    // 0x182a00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_182a04:
    // 0x182a04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x182a04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_182a08:
    // 0x182a08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_182a0c:
    if (ctx->pc == 0x182A0Cu) {
        ctx->pc = 0x182A10u;
        goto label_182a10;
    }
    ctx->pc = 0x182A08u;
    {
        const bool branch_taken_0x182a08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x182a08) {
            ctx->pc = 0x182A1Cu;
            goto label_182a1c;
        }
    }
    ctx->pc = 0x182A10u;
label_182a10:
    // 0x182a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182a14:
    // 0x182a14: 0xc0ba070  jal         func_2E81C0
label_182a18:
    if (ctx->pc == 0x182A18u) {
        ctx->pc = 0x182A1Cu;
        goto label_182a1c;
    }
    ctx->pc = 0x182A14u;
    SET_GPR_U32(ctx, 31, 0x182A1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x182A14u, 0x182A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A1Cu;
label_182a1c:
    // 0x182a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182a20:
    // 0x182a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182a24:
    // 0x182a24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_182a28:
    // 0x182a28: 0x3e00008  jr          $ra
label_182a2c:
    if (ctx->pc == 0x182A2Cu) {
        ctx->pc = 0x182A30u;
        goto label_182a30;
    }
    ctx->pc = 0x182A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182A30u;
label_182a30:
    // 0x182a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_182a34:
    // 0x182a34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_182a38:
    // 0x182a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182a3c:
    // 0x182a3c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x182a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_182a40:
    // 0x182a40: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x182a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_182a44:
    // 0x182a44: 0xc055974  jal         func_1565D0
label_182a48:
    if (ctx->pc == 0x182A48u) {
        ctx->pc = 0x182A4Cu;
        goto label_182a4c;
    }
    ctx->pc = 0x182A44u;
    SET_GPR_U32(ctx, 31, 0x182A4Cu);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x182A44u, 0x182A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A4Cu;
label_182a4c:
    // 0x182a4c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x182a4cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_182a50:
    // 0x182a50: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x182a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_182a54:
    // 0x182a54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182a58:
    // 0x182a58: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
label_182a5c:
    if (ctx->pc == 0x182A5Cu) {
        ctx->pc = 0x182A60u;
        goto label_182a60;
    }
    ctx->pc = 0x182A58u;
    {
        const bool branch_taken_0x182a58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x182a58) {
            ctx->pc = 0x182AF8u;
            goto label_182af8;
        }
    }
    ctx->pc = 0x182A60u;
label_182a60:
    // 0x182a60: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x182a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_182a64:
    // 0x182a64: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x182a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_182a68:
    // 0x182a68: 0x24a55030  addiu       $a1, $a1, 0x5030
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20528));
label_182a6c:
    // 0x182a6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x182a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_182a70:
    // 0x182a70: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x182a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_182a74:
    // 0x182a74: 0x320f809  jalr        $t9
label_182a78:
    if (ctx->pc == 0x182A78u) {
        ctx->pc = 0x182A7Cu;
        goto label_182a7c;
    }
    ctx->pc = 0x182A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x182A7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182A74u, 0x182A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x182A7Cu;
label_182a7c:
    // 0x182a7c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_182a80:
    // 0x182a80: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x182a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_182a84:
    // 0x182a84: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x182a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_182a88:
    // 0x182a88: 0xc055370  jal         func_154DC0
label_182a8c:
    if (ctx->pc == 0x182A8Cu) {
        ctx->pc = 0x182A90u;
        goto label_182a90;
    }
    ctx->pc = 0x182A88u;
    SET_GPR_U32(ctx, 31, 0x182A90u);
    ctx->pc = 0x154DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DC0u, 0x182A88u, 0x182A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182A90u;
label_182a90:
    // 0x182a90: 0x1000000e  b           . + 4 + (0xE << 2)
label_182a94:
    if (ctx->pc == 0x182A94u) {
        ctx->pc = 0x182A98u;
        goto label_182a98;
    }
    ctx->pc = 0x182A90u;
    {
        const bool branch_taken_0x182a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182a90) {
            ctx->pc = 0x182ACCu;
            goto label_182acc;
        }
    }
    ctx->pc = 0x182A98u;
label_182a98:
    // 0x182a98: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x182a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_182a9c:
    // 0x182a9c: 0xc055358  jal         func_154D60
label_182aa0:
    if (ctx->pc == 0x182AA0u) {
        ctx->pc = 0x182AA4u;
        goto label_182aa4;
    }
    ctx->pc = 0x182A9Cu;
    SET_GPR_U32(ctx, 31, 0x182AA4u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x182A9Cu, 0x182AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AA4u;
label_182aa4:
    // 0x182aa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_182aa8:
    // 0x182aa8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x182aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_182aac:
    // 0x182aac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_182ab0:
    // 0x182ab0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x182ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_182ab4:
    // 0x182ab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182ab8:
    // 0x182ab8: 0xc08c8dc  jal         func_232370
label_182abc:
    if (ctx->pc == 0x182ABCu) {
        ctx->pc = 0x182AC0u;
        goto label_182ac0;
    }
    ctx->pc = 0x182AB8u;
    SET_GPR_U32(ctx, 31, 0x182AC0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x182AB8u, 0x182AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AC0u;
label_182ac0:
    // 0x182ac0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x182ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_182ac4:
    // 0x182ac4: 0xc055348  jal         func_154D20
label_182ac8:
    if (ctx->pc == 0x182AC8u) {
        ctx->pc = 0x182ACCu;
        goto label_182acc;
    }
    ctx->pc = 0x182AC4u;
    SET_GPR_U32(ctx, 31, 0x182ACCu);
    ctx->pc = 0x154D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D20u, 0x182AC4u, 0x182ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182ACCu;
label_182acc:
    // 0x182acc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x182accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_182ad0:
    // 0x182ad0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_182ad4:
    // 0x182ad4: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_182ad8:
    // 0x182ad8: 0xc05531c  jal         func_154C70
label_182adc:
    if (ctx->pc == 0x182ADCu) {
        ctx->pc = 0x182AE0u;
        goto label_182ae0;
    }
    ctx->pc = 0x182AD8u;
    SET_GPR_U32(ctx, 31, 0x182AE0u);
    ctx->pc = 0x154C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154C70u, 0x182AD8u, 0x182AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AE0u;
label_182ae0:
    // 0x182ae0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x182ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_182ae4:
    // 0x182ae4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x182ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_182ae8:
    // 0x182ae8: 0xc041998  jal         func_106660
label_182aec:
    if (ctx->pc == 0x182AECu) {
        ctx->pc = 0x182AF0u;
        goto label_182af0;
    }
    ctx->pc = 0x182AE8u;
    SET_GPR_U32(ctx, 31, 0x182AF0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x182AE8u, 0x182AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182AF0u;
label_182af0:
    // 0x182af0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
label_182af4:
    if (ctx->pc == 0x182AF4u) {
        ctx->pc = 0x182AF8u;
        goto label_182af8;
    }
    ctx->pc = 0x182AF0u;
    {
        const bool branch_taken_0x182af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182af0) {
            ctx->pc = 0x182A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182a98;
        }
    }
    ctx->pc = 0x182AF8u;
label_182af8:
    // 0x182af8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182afc:
    // 0x182afc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182b00:
    // 0x182b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182b04:
    // 0x182b04: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x182b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_182b08:
    // 0x182b08: 0x3e00008  jr          $ra
label_182b0c:
    if (ctx->pc == 0x182B0Cu) {
        ctx->pc = 0x182B10u;
        goto label_182b10;
    }
    ctx->pc = 0x182B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B10u;
label_182b10:
    // 0x182b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_182b14:
    // 0x182b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_182b18:
    // 0x182b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182b1c:
    // 0x182b1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x182b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_182b20:
    // 0x182b20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_182b24:
    // 0x182b24: 0xc0559ac  jal         func_1566B0
label_182b28:
    if (ctx->pc == 0x182B28u) {
        ctx->pc = 0x182B2Cu;
        goto label_182b2c;
    }
    ctx->pc = 0x182B24u;
    SET_GPR_U32(ctx, 31, 0x182B2Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x182B24u, 0x182B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B2Cu;
label_182b2c:
    // 0x182b2c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x182b2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_182b30:
    // 0x182b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182b34:
    // 0x182b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182b38:
    // 0x182b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182b3c:
    // 0x182b3c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_182b40:
    // 0x182b40: 0x3e00008  jr          $ra
label_182b44:
    if (ctx->pc == 0x182B44u) {
        ctx->pc = 0x182B48u;
        goto label_182b48;
    }
    ctx->pc = 0x182B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B48u;
label_182b48:
    // 0x182b48: 0x0  nop
    ctx->pc = 0x182b48u;
    // NOP
label_182b4c:
    // 0x182b4c: 0x0  nop
    ctx->pc = 0x182b4cu;
    // NOP
label_182b50:
    // 0x182b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_182b54:
    // 0x182b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_182b58:
    // 0x182b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182b5c:
    // 0x182b5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x182b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_182b60:
    // 0x182b60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x182b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_182b64:
    // 0x182b64: 0xc0559dc  jal         func_156770
label_182b68:
    if (ctx->pc == 0x182B68u) {
        ctx->pc = 0x182B6Cu;
        goto label_182b6c;
    }
    ctx->pc = 0x182B64u;
    SET_GPR_U32(ctx, 31, 0x182B6Cu);
    ctx->pc = 0x156770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156770u, 0x182B64u, 0x182B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182B6Cu;
label_182b6c:
    // 0x182b6c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x182b6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_182b70:
    // 0x182b70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182b74:
    // 0x182b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182b78:
    // 0x182b78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182b7c:
    // 0x182b7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182b7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_182b80:
    // 0x182b80: 0x3e00008  jr          $ra
label_182b84:
    if (ctx->pc == 0x182B84u) {
        ctx->pc = 0x182B88u;
        goto label_182b88;
    }
    ctx->pc = 0x182B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B88u;
label_182b88:
    // 0x182b88: 0x0  nop
    ctx->pc = 0x182b88u;
    // NOP
label_182b8c:
    // 0x182b8c: 0x0  nop
    ctx->pc = 0x182b8cu;
    // NOP
label_182b90:
    // 0x182b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_182b94:
    // 0x182b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_182b98:
    // 0x182b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x182b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_182b9c:
    // 0x182b9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x182b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_182ba0:
    // 0x182ba0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x182ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_182ba4:
    // 0x182ba4: 0xc0559ec  jal         func_1567B0
label_182ba8:
    if (ctx->pc == 0x182BA8u) {
        ctx->pc = 0x182BACu;
        goto label_182bac;
    }
    ctx->pc = 0x182BA4u;
    SET_GPR_U32(ctx, 31, 0x182BACu);
    ctx->pc = 0x1567B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567B0u, 0x182BA4u, 0x182BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BACu;
label_182bac:
    // 0x182bac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x182bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_182bb0:
    // 0x182bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x182bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_182bb4:
    // 0x182bb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_182bb8:
    // 0x182bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x182bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_182bbc:
    // 0x182bbc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_182bc0:
    // 0x182bc0: 0x3e00008  jr          $ra
label_182bc4:
    if (ctx->pc == 0x182BC4u) {
        ctx->pc = 0x182BC8u;
        goto label_182bc8;
    }
    ctx->pc = 0x182BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182BC8u;
label_182bc8:
    // 0x182bc8: 0x0  nop
    ctx->pc = 0x182bc8u;
    // NOP
label_182bcc:
    // 0x182bcc: 0x0  nop
    ctx->pc = 0x182bccu;
    // NOP
label_182bd0:
    // 0x182bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x182bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_182bd4:
    // 0x182bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182bd8:
    // 0x182bd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_182bdc:
    // 0x182bdc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x182bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_182be0:
    // 0x182be0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182be4:
    // 0x182be4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x182be4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_182be8:
    // 0x182be8: 0xc055a78  jal         func_1569E0
label_182bec:
    if (ctx->pc == 0x182BECu) {
        ctx->pc = 0x182BF0u;
        goto label_182bf0;
    }
    ctx->pc = 0x182BE8u;
    SET_GPR_U32(ctx, 31, 0x182BF0u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x182BE8u, 0x182BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182BF0u;
label_182bf0:
    // 0x182bf0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x182bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_182bf4:
    // 0x182bf4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x182bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_182bf8:
    // 0x182bf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182bfc:
    // 0x182bfc: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
label_182c00:
    if (ctx->pc == 0x182C00u) {
        ctx->pc = 0x182C04u;
        goto label_182c04;
    }
    ctx->pc = 0x182BFCu;
    {
        const bool branch_taken_0x182bfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x182bfc) {
            ctx->pc = 0x182C2Cu;
            goto label_182c2c;
        }
    }
    ctx->pc = 0x182C04u;
label_182c04:
    // 0x182c04: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182c08:
    // 0x182c08: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x182c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_182c0c:
    // 0x182c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c10:
    // 0x182c10: 0xc060b28  jal         func_182CA0
label_182c14:
    if (ctx->pc == 0x182C14u) {
        ctx->pc = 0x182C18u;
        goto label_182c18;
    }
    ctx->pc = 0x182C10u;
    SET_GPR_U32(ctx, 31, 0x182C18u);
    ctx->pc = 0x182CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182CA0u, 0x182C10u, 0x182C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C18u;
label_182c18:
    // 0x182c18: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182c1c:
    // 0x182c1c: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x182c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_182c20:
    // 0x182c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182c24:
    // 0x182c24: 0xc060b28  jal         func_182CA0
label_182c28:
    if (ctx->pc == 0x182C28u) {
        ctx->pc = 0x182C2Cu;
        goto label_182c2c;
    }
    ctx->pc = 0x182C24u;
    SET_GPR_U32(ctx, 31, 0x182C2Cu);
    ctx->pc = 0x182CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182CA0u, 0x182C24u, 0x182C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C2Cu;
label_182c2c:
    // 0x182c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182c30:
    // 0x182c30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x182c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_182c34:
    // 0x182c34: 0x3e00008  jr          $ra
label_182c38:
    if (ctx->pc == 0x182C38u) {
        ctx->pc = 0x182C3Cu;
        goto label_182c3c;
    }
    ctx->pc = 0x182C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182C3Cu;
label_182c3c:
    // 0x182c3c: 0x0  nop
    ctx->pc = 0x182c3cu;
    // NOP
label_182c40:
    // 0x182c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_182c44:
    // 0x182c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182c48:
    // 0x182c48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_182c4c:
    // 0x182c4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182c50:
    // 0x182c50: 0xc055a84  jal         func_156A10
label_182c54:
    if (ctx->pc == 0x182C54u) {
        ctx->pc = 0x182C58u;
        goto label_182c58;
    }
    ctx->pc = 0x182C50u;
    SET_GPR_U32(ctx, 31, 0x182C58u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x182C50u, 0x182C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C58u;
label_182c58:
    // 0x182c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182c5c:
    // 0x182c5c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x182c5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_182c60:
    // 0x182c60: 0x3e00008  jr          $ra
label_182c64:
    if (ctx->pc == 0x182C64u) {
        ctx->pc = 0x182C68u;
        goto label_182c68;
    }
    ctx->pc = 0x182C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182C68u;
label_182c68:
    // 0x182c68: 0x0  nop
    ctx->pc = 0x182c68u;
    // NOP
label_182c6c:
    // 0x182c6c: 0x0  nop
    ctx->pc = 0x182c6cu;
    // NOP
label_182c70:
    // 0x182c70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_182c74:
    // 0x182c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_182c78:
    // 0x182c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_182c7c:
    // 0x182c7c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x182c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_182c80:
    // 0x182c80: 0xc055b3c  jal         func_156CF0
label_182c84:
    if (ctx->pc == 0x182C84u) {
        ctx->pc = 0x182C88u;
        goto label_182c88;
    }
    ctx->pc = 0x182C80u;
    SET_GPR_U32(ctx, 31, 0x182C88u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x182C80u, 0x182C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182C88u;
label_182c88:
    // 0x182c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_182c8c:
    // 0x182c8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x182c8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_182c90:
    // 0x182c90: 0x3e00008  jr          $ra
label_182c94:
    if (ctx->pc == 0x182C94u) {
        ctx->pc = 0x182C98u;
        goto label_182c98;
    }
    ctx->pc = 0x182C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182C98u;
label_182c98:
    // 0x182c98: 0x0  nop
    ctx->pc = 0x182c98u;
    // NOP
label_182c9c:
    // 0x182c9c: 0x0  nop
    ctx->pc = 0x182c9cu;
    // NOP
    ctx->pc = 0x182ca0u;
}
