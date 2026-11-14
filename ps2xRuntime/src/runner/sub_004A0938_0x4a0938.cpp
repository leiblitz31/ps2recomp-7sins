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

// Function: sub_004A0938
// Address: 0x4a0938 - 0x4a0af8
void sub_004A0938_0x4a0938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0938_0x4a0938");
#endif

    switch (ctx->pc) {
        case 0x4a0938u: goto label_4a0938;
        case 0x4a093cu: goto label_4a093c;
        case 0x4a0940u: goto label_4a0940;
        case 0x4a0944u: goto label_4a0944;
        case 0x4a0948u: goto label_4a0948;
        case 0x4a094cu: goto label_4a094c;
        case 0x4a0950u: goto label_4a0950;
        case 0x4a0954u: goto label_4a0954;
        case 0x4a0958u: goto label_4a0958;
        case 0x4a095cu: goto label_4a095c;
        case 0x4a0960u: goto label_4a0960;
        case 0x4a0964u: goto label_4a0964;
        case 0x4a0968u: goto label_4a0968;
        case 0x4a096cu: goto label_4a096c;
        case 0x4a0970u: goto label_4a0970;
        case 0x4a0974u: goto label_4a0974;
        case 0x4a0978u: goto label_4a0978;
        case 0x4a097cu: goto label_4a097c;
        case 0x4a0980u: goto label_4a0980;
        case 0x4a0984u: goto label_4a0984;
        case 0x4a0988u: goto label_4a0988;
        case 0x4a098cu: goto label_4a098c;
        case 0x4a0990u: goto label_4a0990;
        case 0x4a0994u: goto label_4a0994;
        case 0x4a0998u: goto label_4a0998;
        case 0x4a099cu: goto label_4a099c;
        case 0x4a09a0u: goto label_4a09a0;
        case 0x4a09a4u: goto label_4a09a4;
        case 0x4a09a8u: goto label_4a09a8;
        case 0x4a09acu: goto label_4a09ac;
        case 0x4a09b0u: goto label_4a09b0;
        case 0x4a09b4u: goto label_4a09b4;
        case 0x4a09b8u: goto label_4a09b8;
        case 0x4a09bcu: goto label_4a09bc;
        case 0x4a09c0u: goto label_4a09c0;
        case 0x4a09c4u: goto label_4a09c4;
        case 0x4a09c8u: goto label_4a09c8;
        case 0x4a09ccu: goto label_4a09cc;
        case 0x4a09d0u: goto label_4a09d0;
        case 0x4a09d4u: goto label_4a09d4;
        case 0x4a09d8u: goto label_4a09d8;
        case 0x4a09dcu: goto label_4a09dc;
        case 0x4a09e0u: goto label_4a09e0;
        case 0x4a09e4u: goto label_4a09e4;
        case 0x4a09e8u: goto label_4a09e8;
        case 0x4a09ecu: goto label_4a09ec;
        case 0x4a09f0u: goto label_4a09f0;
        case 0x4a09f4u: goto label_4a09f4;
        case 0x4a09f8u: goto label_4a09f8;
        case 0x4a09fcu: goto label_4a09fc;
        case 0x4a0a00u: goto label_4a0a00;
        case 0x4a0a04u: goto label_4a0a04;
        case 0x4a0a08u: goto label_4a0a08;
        case 0x4a0a0cu: goto label_4a0a0c;
        case 0x4a0a10u: goto label_4a0a10;
        case 0x4a0a14u: goto label_4a0a14;
        case 0x4a0a18u: goto label_4a0a18;
        case 0x4a0a1cu: goto label_4a0a1c;
        case 0x4a0a20u: goto label_4a0a20;
        case 0x4a0a24u: goto label_4a0a24;
        case 0x4a0a28u: goto label_4a0a28;
        case 0x4a0a2cu: goto label_4a0a2c;
        case 0x4a0a30u: goto label_4a0a30;
        case 0x4a0a34u: goto label_4a0a34;
        case 0x4a0a38u: goto label_4a0a38;
        case 0x4a0a3cu: goto label_4a0a3c;
        case 0x4a0a40u: goto label_4a0a40;
        case 0x4a0a44u: goto label_4a0a44;
        case 0x4a0a48u: goto label_4a0a48;
        case 0x4a0a4cu: goto label_4a0a4c;
        case 0x4a0a50u: goto label_4a0a50;
        case 0x4a0a54u: goto label_4a0a54;
        case 0x4a0a58u: goto label_4a0a58;
        case 0x4a0a5cu: goto label_4a0a5c;
        case 0x4a0a60u: goto label_4a0a60;
        case 0x4a0a64u: goto label_4a0a64;
        case 0x4a0a68u: goto label_4a0a68;
        case 0x4a0a6cu: goto label_4a0a6c;
        case 0x4a0a70u: goto label_4a0a70;
        case 0x4a0a74u: goto label_4a0a74;
        case 0x4a0a78u: goto label_4a0a78;
        case 0x4a0a7cu: goto label_4a0a7c;
        case 0x4a0a80u: goto label_4a0a80;
        case 0x4a0a84u: goto label_4a0a84;
        case 0x4a0a88u: goto label_4a0a88;
        case 0x4a0a8cu: goto label_4a0a8c;
        case 0x4a0a90u: goto label_4a0a90;
        case 0x4a0a94u: goto label_4a0a94;
        case 0x4a0a98u: goto label_4a0a98;
        case 0x4a0a9cu: goto label_4a0a9c;
        case 0x4a0aa0u: goto label_4a0aa0;
        case 0x4a0aa4u: goto label_4a0aa4;
        case 0x4a0aa8u: goto label_4a0aa8;
        case 0x4a0aacu: goto label_4a0aac;
        case 0x4a0ab0u: goto label_4a0ab0;
        case 0x4a0ab4u: goto label_4a0ab4;
        case 0x4a0ab8u: goto label_4a0ab8;
        case 0x4a0abcu: goto label_4a0abc;
        case 0x4a0ac0u: goto label_4a0ac0;
        case 0x4a0ac4u: goto label_4a0ac4;
        case 0x4a0ac8u: goto label_4a0ac8;
        case 0x4a0accu: goto label_4a0acc;
        case 0x4a0ad0u: goto label_4a0ad0;
        case 0x4a0ad4u: goto label_4a0ad4;
        case 0x4a0ad8u: goto label_4a0ad8;
        case 0x4a0adcu: goto label_4a0adc;
        case 0x4a0ae0u: goto label_4a0ae0;
        case 0x4a0ae4u: goto label_4a0ae4;
        case 0x4a0ae8u: goto label_4a0ae8;
        case 0x4a0aecu: goto label_4a0aec;
        case 0x4a0af0u: goto label_4a0af0;
        case 0x4a0af4u: goto label_4a0af4;
        default: break;
    }

    ctx->pc = 0x4a0938u;

label_4a0938:
    // 0x4a0938: 0x8f86c1f0  lw          $a2, -0x3E10($gp)
    ctx->pc = 0x4a0938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a093c:
    // 0x4a093c: 0x2788c1f0  addiu       $t0, $gp, -0x3E10
    ctx->pc = 0x4a093cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a0940:
    // 0x4a0940: 0x10c80011  beq         $a2, $t0, . + 4 + (0x11 << 2)
label_4a0944:
    if (ctx->pc == 0x4A0944u) {
        ctx->pc = 0x4A0948u;
        goto label_4a0948;
    }
    ctx->pc = 0x4A0940u;
    {
        const bool branch_taken_0x4a0940 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x4a0940) {
            ctx->pc = 0x4A0988u;
            goto label_4a0988;
        }
    }
    ctx->pc = 0x4A0948u;
label_4a0948:
    // 0x4a0948: 0x8cc5fff4  lw          $a1, -0xC($a2)
    ctx->pc = 0x4a0948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
label_4a094c:
    // 0x4a094c: 0x0  nop
    ctx->pc = 0x4a094cu;
    // NOP
label_4a0950:
    // 0x4a0950: 0x24c7fff0  addiu       $a3, $a2, -0x10
    ctx->pc = 0x4a0950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_4a0954:
    // 0x4a0954: 0x50a7000a  beql        $a1, $a3, . + 4 + (0xA << 2)
label_4a0958:
    if (ctx->pc == 0x4A0958u) {
        ctx->pc = 0x4A0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0954u;
        // 0x4a0958: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A095Cu;
        goto label_4a095c;
    }
    ctx->pc = 0x4A0954u;
    {
        const bool branch_taken_0x4a0954 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a0954) {
            ctx->pc = 0x4A0958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0954u;
            // 0x4a0958: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0980u;
            goto label_4a0980;
        }
    }
    ctx->pc = 0x4A095Cu;
label_4a095c:
    // 0x4a095c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4a095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4a0960:
    // 0x4a0960: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4a0960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4a0964:
    // 0x4a0964: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_4a0968:
    if (ctx->pc == 0x4A0968u) {
        ctx->pc = 0x4A0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0964u;
        // 0x4a0968: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A096Cu;
        goto label_4a096c;
    }
    ctx->pc = 0x4A0964u;
    {
        const bool branch_taken_0x4a0964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4a0964) {
            ctx->pc = 0x4A0968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0964u;
            // 0x4a0968: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0974u;
            goto label_4a0974;
        }
    }
    ctx->pc = 0x4A096Cu;
label_4a096c:
    // 0x4a096c: 0x3e00008  jr          $ra
label_4a0970:
    if (ctx->pc == 0x4A0970u) {
        ctx->pc = 0x4A0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A096Cu;
        // 0x4a0970: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0974u;
        goto label_4a0974;
    }
    ctx->pc = 0x4A096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A096Cu;
        // 0x4a0970: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0974u;
label_4a0974:
    // 0x4a0974: 0x54a7fffa  bnel        $a1, $a3, . + 4 + (-0x6 << 2)
label_4a0978:
    if (ctx->pc == 0x4A0978u) {
        ctx->pc = 0x4A0978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0974u;
        // 0x4a0978: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A097Cu;
        goto label_4a097c;
    }
    ctx->pc = 0x4A0974u;
    {
        const bool branch_taken_0x4a0974 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x4a0974) {
            ctx->pc = 0x4A0978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0974u;
            // 0x4a0978: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0960;
        }
    }
    ctx->pc = 0x4A097Cu;
label_4a097c:
    // 0x4a097c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4a097cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a0980:
    // 0x4a0980: 0x54c8fff3  bnel        $a2, $t0, . + 4 + (-0xD << 2)
label_4a0984:
    if (ctx->pc == 0x4A0984u) {
        ctx->pc = 0x4A0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0980u;
        // 0x4a0984: 0x8cc5fff4  lw          $a1, -0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0988u;
        goto label_4a0988;
    }
    ctx->pc = 0x4A0980u;
    {
        const bool branch_taken_0x4a0980 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x4a0980) {
            ctx->pc = 0x4A0984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0980u;
            // 0x4a0984: 0x8cc5fff4  lw          $a1, -0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0950;
        }
    }
    ctx->pc = 0x4A0988u;
label_4a0988:
    // 0x4a0988: 0x3e00008  jr          $ra
label_4a098c:
    if (ctx->pc == 0x4A098Cu) {
        ctx->pc = 0x4A098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0988u;
        // 0x4a098c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0990u;
        goto label_4a0990;
    }
    ctx->pc = 0x4A0988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0988u;
        // 0x4a098c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0990u;
label_4a0990:
    // 0x4a0990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a0994:
    // 0x4a0994: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a0998:
    // 0x4a0998: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a099c:
    // 0x4a099c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a09a0:
    // 0x4a09a0: 0x2792c1f0  addiu       $s2, $gp, -0x3E10
    ctx->pc = 0x4a09a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a09a4:
    // 0x4a09a4: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a09a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a09a8:
    // 0x4a09a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a09a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a09ac:
    // 0x4a09ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a09acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a09b0:
    // 0x4a09b0: 0x1212000e  beq         $s0, $s2, . + 4 + (0xE << 2)
label_4a09b4:
    if (ctx->pc == 0x4A09B4u) {
        ctx->pc = 0x4A09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09B0u;
        // 0x4a09b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09B8u;
        goto label_4a09b8;
    }
    ctx->pc = 0x4A09B0u;
    {
        const bool branch_taken_0x4a09b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4A09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09B0u;
        // 0x4a09b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a09b0) {
            ctx->pc = 0x4A09ECu;
            goto label_4a09ec;
        }
    }
    ctx->pc = 0x4A09B8u;
label_4a09b8:
    // 0x4a09b8: 0x2611ffe4  addiu       $s1, $s0, -0x1C
    ctx->pc = 0x4a09b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_4a09bc:
    // 0x4a09bc: 0x0  nop
    ctx->pc = 0x4a09bcu;
    // NOP
label_4a09c0:
    // 0x4a09c0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4a09c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a09c4:
    // 0x4a09c4: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_4a09c8:
    if (ctx->pc == 0x4A09C8u) {
        ctx->pc = 0x4A09C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09C4u;
        // 0x4a09c8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09CCu;
        goto label_4a09cc;
    }
    ctx->pc = 0x4A09C4u;
    {
        const bool branch_taken_0x4a09c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a09c4) {
            ctx->pc = 0x4A09C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A09C4u;
            // 0x4a09c8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A09E4u;
            goto label_4a09e4;
        }
    }
    ctx->pc = 0x4A09CCu;
label_4a09cc:
    // 0x4a09cc: 0xc12a3f8  jal         func_4A8FE0
label_4a09d0:
    if (ctx->pc == 0x4A09D0u) {
        ctx->pc = 0x4A09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09CCu;
        // 0x4a09d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09D4u;
        goto label_4a09d4;
    }
    ctx->pc = 0x4A09CCu;
    SET_GPR_U32(ctx, 31, 0x4A09D4u);
    ctx->pc = 0x4A09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A09CCu;
    // 0x4a09d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FE0u, 0x4A09CCu, 0x4A09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A09D4u;
label_4a09d4:
    // 0x4a09d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_4a09d8:
    if (ctx->pc == 0x4A09D8u) {
        ctx->pc = 0x4A09D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09D4u;
        // 0x4a09d8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09DCu;
        goto label_4a09dc;
    }
    ctx->pc = 0x4A09D4u;
    {
        const bool branch_taken_0x4a09d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a09d4) {
            ctx->pc = 0x4A09D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A09D4u;
            // 0x4a09d8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A09E4u;
            goto label_4a09e4;
        }
    }
    ctx->pc = 0x4A09DCu;
label_4a09dc:
    // 0x4a09dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_4a09e0:
    if (ctx->pc == 0x4A09E0u) {
        ctx->pc = 0x4A09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09DCu;
        // 0x4a09e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09E4u;
        goto label_4a09e4;
    }
    ctx->pc = 0x4A09DCu;
    {
        const bool branch_taken_0x4a09dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09DCu;
        // 0x4a09e0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a09dc) {
            ctx->pc = 0x4A09F0u;
            goto label_4a09f0;
        }
    }
    ctx->pc = 0x4A09E4u;
label_4a09e4:
    // 0x4a09e4: 0x1612fff6  bne         $s0, $s2, . + 4 + (-0xA << 2)
label_4a09e8:
    if (ctx->pc == 0x4A09E8u) {
        ctx->pc = 0x4A09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09E4u;
        // 0x4a09e8: 0x2611ffe4  addiu       $s1, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A09ECu;
        goto label_4a09ec;
    }
    ctx->pc = 0x4A09E4u;
    {
        const bool branch_taken_0x4a09e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x4A09E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A09E4u;
        // 0x4a09e8: 0x2611ffe4  addiu       $s1, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a09e4) {
            ctx->pc = 0x4A09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a09c0;
        }
    }
    ctx->pc = 0x4A09ECu;
label_4a09ec:
    // 0x4a09ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a09ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a09f0:
    // 0x4a09f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a09f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a09f4:
    // 0x4a09f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a09f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a09f8:
    // 0x4a09f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a09f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a09fc:
    // 0x4a09fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a09fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0a00:
    // 0x4a0a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0a04:
    // 0x4a0a04: 0x3e00008  jr          $ra
label_4a0a08:
    if (ctx->pc == 0x4A0A08u) {
        ctx->pc = 0x4A0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A04u;
        // 0x4a0a08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A0Cu;
        goto label_4a0a0c;
    }
    ctx->pc = 0x4A0A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A04u;
        // 0x4a0a08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0A0Cu;
label_4a0a0c:
    // 0x4a0a0c: 0x0  nop
    ctx->pc = 0x4a0a0cu;
    // NOP
label_4a0a10:
    // 0x4a0a10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a0a14:
    // 0x4a0a14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a0a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a0a18:
    // 0x4a0a18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a0a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a0a1c:
    // 0x4a0a1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a0a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a0a20:
    // 0x4a0a20: 0x2792c1f0  addiu       $s2, $gp, -0x3E10
    ctx->pc = 0x4a0a20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_4a0a24:
    // 0x4a0a24: 0x8f90c1f0  lw          $s0, -0x3E10($gp)
    ctx->pc = 0x4a0a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
label_4a0a28:
    // 0x4a0a28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a0a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a0a2c:
    // 0x4a0a2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a0a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a0a30:
    // 0x4a0a30: 0x1212000e  beq         $s0, $s2, . + 4 + (0xE << 2)
label_4a0a34:
    if (ctx->pc == 0x4A0A34u) {
        ctx->pc = 0x4A0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A30u;
        // 0x4a0a34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A38u;
        goto label_4a0a38;
    }
    ctx->pc = 0x4A0A30u;
    {
        const bool branch_taken_0x4a0a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4A0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A30u;
        // 0x4a0a34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0a30) {
            ctx->pc = 0x4A0A6Cu;
            goto label_4a0a6c;
        }
    }
    ctx->pc = 0x4A0A38u;
label_4a0a38:
    // 0x4a0a38: 0x8e05ffe4  lw          $a1, -0x1C($s0)
    ctx->pc = 0x4a0a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967268)));
label_4a0a3c:
    // 0x4a0a3c: 0x0  nop
    ctx->pc = 0x4a0a3cu;
    // NOP
label_4a0a40:
    // 0x4a0a40: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_4a0a44:
    if (ctx->pc == 0x4A0A44u) {
        ctx->pc = 0x4A0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A40u;
        // 0x4a0a44: 0x2611ffe4  addiu       $s1, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A48u;
        goto label_4a0a48;
    }
    ctx->pc = 0x4A0A40u;
    {
        const bool branch_taken_0x4a0a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A40u;
        // 0x4a0a44: 0x2611ffe4  addiu       $s1, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0a40) {
            ctx->pc = 0x4A0A60u;
            goto label_4a0a60;
        }
    }
    ctx->pc = 0x4A0A48u;
label_4a0a48:
    // 0x4a0a48: 0xc12a3ec  jal         func_4A8FB0
label_4a0a4c:
    if (ctx->pc == 0x4A0A4Cu) {
        ctx->pc = 0x4A0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A48u;
        // 0x4a0a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A50u;
        goto label_4a0a50;
    }
    ctx->pc = 0x4A0A48u;
    SET_GPR_U32(ctx, 31, 0x4A0A50u);
    ctx->pc = 0x4A0A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0A48u;
    // 0x4a0a4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A0A48u, 0x4A0A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0A50u;
label_4a0a50:
    // 0x4a0a50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_4a0a54:
    if (ctx->pc == 0x4A0A54u) {
        ctx->pc = 0x4A0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A50u;
        // 0x4a0a54: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A58u;
        goto label_4a0a58;
    }
    ctx->pc = 0x4A0A50u;
    {
        const bool branch_taken_0x4a0a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0a50) {
            ctx->pc = 0x4A0A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0A50u;
            // 0x4a0a54: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0A64u;
            goto label_4a0a64;
        }
    }
    ctx->pc = 0x4A0A58u;
label_4a0a58:
    // 0x4a0a58: 0x10000005  b           . + 4 + (0x5 << 2)
label_4a0a5c:
    if (ctx->pc == 0x4A0A5Cu) {
        ctx->pc = 0x4A0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A58u;
        // 0x4a0a5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A60u;
        goto label_4a0a60;
    }
    ctx->pc = 0x4A0A58u;
    {
        const bool branch_taken_0x4a0a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A58u;
        // 0x4a0a5c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0a58) {
            ctx->pc = 0x4A0A70u;
            goto label_4a0a70;
        }
    }
    ctx->pc = 0x4A0A60u;
label_4a0a60:
    // 0x4a0a60: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x4a0a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0a64:
    // 0x4a0a64: 0x5612fff6  bnel        $s0, $s2, . + 4 + (-0xA << 2)
label_4a0a68:
    if (ctx->pc == 0x4A0A68u) {
        ctx->pc = 0x4A0A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A64u;
        // 0x4a0a68: 0x8e05ffe4  lw          $a1, -0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A6Cu;
        goto label_4a0a6c;
    }
    ctx->pc = 0x4A0A64u;
    {
        const bool branch_taken_0x4a0a64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x4a0a64) {
            ctx->pc = 0x4A0A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0A64u;
            // 0x4a0a68: 0x8e05ffe4  lw          $a1, -0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0a40;
        }
    }
    ctx->pc = 0x4A0A6Cu;
label_4a0a6c:
    // 0x4a0a6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a0a6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0a70:
    // 0x4a0a70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a0a70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0a74:
    // 0x4a0a74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a0a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0a78:
    // 0x4a0a78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0a78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0a7c:
    // 0x4a0a7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a0a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0a80:
    // 0x4a0a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0a84:
    // 0x4a0a84: 0x3e00008  jr          $ra
label_4a0a88:
    if (ctx->pc == 0x4A0A88u) {
        ctx->pc = 0x4A0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A84u;
        // 0x4a0a88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0A8Cu;
        goto label_4a0a8c;
    }
    ctx->pc = 0x4A0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0A84u;
        // 0x4a0a88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0A8Cu;
label_4a0a8c:
    // 0x4a0a8c: 0x0  nop
    ctx->pc = 0x4a0a8cu;
    // NOP
label_4a0a90:
    // 0x4a0a90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4a0a94:
    // 0x4a0a94: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a0a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4a0a98:
    // 0x4a0a98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a0a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a0a9c:
    // 0x4a0a9c: 0x2491000c  addiu       $s1, $a0, 0xC
    ctx->pc = 0x4a0a9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_4a0aa0:
    // 0x4a0aa0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4a0aa4:
    // 0x4a0aa4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4a0aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4a0aa8:
    // 0x4a0aa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a0aac:
    // 0x4a0aac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a0aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4a0ab0:
    // 0x4a0ab0: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x4a0ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4a0ab4:
    // 0x4a0ab4: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_4a0ab8:
    if (ctx->pc == 0x4A0AB8u) {
        ctx->pc = 0x4A0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AB4u;
        // 0x4a0ab8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0ABCu;
        goto label_4a0abc;
    }
    ctx->pc = 0x4A0AB4u;
    {
        const bool branch_taken_0x4a0ab4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4A0AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AB4u;
        // 0x4a0ab8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ab4) {
            ctx->pc = 0x4A0ADCu;
            goto label_4a0adc;
        }
    }
    ctx->pc = 0x4A0ABCu;
label_4a0abc:
    // 0x4a0abc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a0abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a0ac0:
    // 0x4a0ac0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a0ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a0ac4:
    // 0x4a0ac4: 0x260f809  jalr        $s3
label_4a0ac8:
    if (ctx->pc == 0x4A0AC8u) {
        ctx->pc = 0x4A0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AC4u;
        // 0x4a0ac8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0ACCu;
        goto label_4a0acc;
    }
    ctx->pc = 0x4A0AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x4A0ACCu);
        ctx->pc = 0x4A0AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AC4u;
        // 0x4a0ac8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0AC4u, 0x4A0ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A0ACCu;
label_4a0acc:
    // 0x4a0acc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a0ad0:
    if (ctx->pc == 0x4A0AD0u) {
        ctx->pc = 0x4A0AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0ACCu;
        // 0x4a0ad0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0AD4u;
        goto label_4a0ad4;
    }
    ctx->pc = 0x4A0ACCu;
    {
        const bool branch_taken_0x4a0acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0acc) {
            ctx->pc = 0x4A0AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0ACCu;
            // 0x4a0ad0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0AE0u;
            goto label_4a0ae0;
        }
    }
    ctx->pc = 0x4A0AD4u;
label_4a0ad4:
    // 0x4a0ad4: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
label_4a0ad8:
    if (ctx->pc == 0x4A0AD8u) {
        ctx->pc = 0x4A0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AD4u;
        // 0x4a0ad8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0ADCu;
        goto label_4a0adc;
    }
    ctx->pc = 0x4A0AD4u;
    {
        const bool branch_taken_0x4a0ad4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x4a0ad4) {
            ctx->pc = 0x4A0AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0AD4u;
            // 0x4a0ad8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0ac0;
        }
    }
    ctx->pc = 0x4A0ADCu;
label_4a0adc:
    // 0x4a0adc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a0adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a0ae0:
    // 0x4a0ae0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a0ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a0ae4:
    // 0x4a0ae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a0ae8:
    // 0x4a0ae8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a0ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a0aec:
    // 0x4a0aec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a0af0:
    // 0x4a0af0: 0x3e00008  jr          $ra
label_4a0af4:
    if (ctx->pc == 0x4A0AF4u) {
        ctx->pc = 0x4A0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AF0u;
        // 0x4a0af4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A0AF8u;
        goto label_fallthrough_0x4a0af0;
    }
    ctx->pc = 0x4A0AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0AF0u;
        // 0x4a0af4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a0af0:
    ctx->pc = 0x4A0AF8u;
}
