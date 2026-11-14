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

// Function: sub_003B3988
// Address: 0x3b3988 - 0x3b3c10
void sub_003B3988_0x3b3988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3988_0x3b3988");
#endif

    switch (ctx->pc) {
        case 0x3b3988u: goto label_3b3988;
        case 0x3b398cu: goto label_3b398c;
        case 0x3b3990u: goto label_3b3990;
        case 0x3b3994u: goto label_3b3994;
        case 0x3b3998u: goto label_3b3998;
        case 0x3b399cu: goto label_3b399c;
        case 0x3b39a0u: goto label_3b39a0;
        case 0x3b39a4u: goto label_3b39a4;
        case 0x3b39a8u: goto label_3b39a8;
        case 0x3b39acu: goto label_3b39ac;
        case 0x3b39b0u: goto label_3b39b0;
        case 0x3b39b4u: goto label_3b39b4;
        case 0x3b39b8u: goto label_3b39b8;
        case 0x3b39bcu: goto label_3b39bc;
        case 0x3b39c0u: goto label_3b39c0;
        case 0x3b39c4u: goto label_3b39c4;
        case 0x3b39c8u: goto label_3b39c8;
        case 0x3b39ccu: goto label_3b39cc;
        case 0x3b39d0u: goto label_3b39d0;
        case 0x3b39d4u: goto label_3b39d4;
        case 0x3b39d8u: goto label_3b39d8;
        case 0x3b39dcu: goto label_3b39dc;
        case 0x3b39e0u: goto label_3b39e0;
        case 0x3b39e4u: goto label_3b39e4;
        case 0x3b39e8u: goto label_3b39e8;
        case 0x3b39ecu: goto label_3b39ec;
        case 0x3b39f0u: goto label_3b39f0;
        case 0x3b39f4u: goto label_3b39f4;
        case 0x3b39f8u: goto label_3b39f8;
        case 0x3b39fcu: goto label_3b39fc;
        case 0x3b3a00u: goto label_3b3a00;
        case 0x3b3a04u: goto label_3b3a04;
        case 0x3b3a08u: goto label_3b3a08;
        case 0x3b3a0cu: goto label_3b3a0c;
        case 0x3b3a10u: goto label_3b3a10;
        case 0x3b3a14u: goto label_3b3a14;
        case 0x3b3a18u: goto label_3b3a18;
        case 0x3b3a1cu: goto label_3b3a1c;
        case 0x3b3a20u: goto label_3b3a20;
        case 0x3b3a24u: goto label_3b3a24;
        case 0x3b3a28u: goto label_3b3a28;
        case 0x3b3a2cu: goto label_3b3a2c;
        case 0x3b3a30u: goto label_3b3a30;
        case 0x3b3a34u: goto label_3b3a34;
        case 0x3b3a38u: goto label_3b3a38;
        case 0x3b3a3cu: goto label_3b3a3c;
        case 0x3b3a40u: goto label_3b3a40;
        case 0x3b3a44u: goto label_3b3a44;
        case 0x3b3a48u: goto label_3b3a48;
        case 0x3b3a4cu: goto label_3b3a4c;
        case 0x3b3a50u: goto label_3b3a50;
        case 0x3b3a54u: goto label_3b3a54;
        case 0x3b3a58u: goto label_3b3a58;
        case 0x3b3a5cu: goto label_3b3a5c;
        case 0x3b3a60u: goto label_3b3a60;
        case 0x3b3a64u: goto label_3b3a64;
        case 0x3b3a68u: goto label_3b3a68;
        case 0x3b3a6cu: goto label_3b3a6c;
        case 0x3b3a70u: goto label_3b3a70;
        case 0x3b3a74u: goto label_3b3a74;
        case 0x3b3a78u: goto label_3b3a78;
        case 0x3b3a7cu: goto label_3b3a7c;
        case 0x3b3a80u: goto label_3b3a80;
        case 0x3b3a84u: goto label_3b3a84;
        case 0x3b3a88u: goto label_3b3a88;
        case 0x3b3a8cu: goto label_3b3a8c;
        case 0x3b3a90u: goto label_3b3a90;
        case 0x3b3a94u: goto label_3b3a94;
        case 0x3b3a98u: goto label_3b3a98;
        case 0x3b3a9cu: goto label_3b3a9c;
        case 0x3b3aa0u: goto label_3b3aa0;
        case 0x3b3aa4u: goto label_3b3aa4;
        case 0x3b3aa8u: goto label_3b3aa8;
        case 0x3b3aacu: goto label_3b3aac;
        case 0x3b3ab0u: goto label_3b3ab0;
        case 0x3b3ab4u: goto label_3b3ab4;
        case 0x3b3ab8u: goto label_3b3ab8;
        case 0x3b3abcu: goto label_3b3abc;
        case 0x3b3ac0u: goto label_3b3ac0;
        case 0x3b3ac4u: goto label_3b3ac4;
        case 0x3b3ac8u: goto label_3b3ac8;
        case 0x3b3accu: goto label_3b3acc;
        case 0x3b3ad0u: goto label_3b3ad0;
        case 0x3b3ad4u: goto label_3b3ad4;
        case 0x3b3ad8u: goto label_3b3ad8;
        case 0x3b3adcu: goto label_3b3adc;
        case 0x3b3ae0u: goto label_3b3ae0;
        case 0x3b3ae4u: goto label_3b3ae4;
        case 0x3b3ae8u: goto label_3b3ae8;
        case 0x3b3aecu: goto label_3b3aec;
        case 0x3b3af0u: goto label_3b3af0;
        case 0x3b3af4u: goto label_3b3af4;
        case 0x3b3af8u: goto label_3b3af8;
        case 0x3b3afcu: goto label_3b3afc;
        case 0x3b3b00u: goto label_3b3b00;
        case 0x3b3b04u: goto label_3b3b04;
        case 0x3b3b08u: goto label_3b3b08;
        case 0x3b3b0cu: goto label_3b3b0c;
        case 0x3b3b10u: goto label_3b3b10;
        case 0x3b3b14u: goto label_3b3b14;
        case 0x3b3b18u: goto label_3b3b18;
        case 0x3b3b1cu: goto label_3b3b1c;
        case 0x3b3b20u: goto label_3b3b20;
        case 0x3b3b24u: goto label_3b3b24;
        case 0x3b3b28u: goto label_3b3b28;
        case 0x3b3b2cu: goto label_3b3b2c;
        case 0x3b3b30u: goto label_3b3b30;
        case 0x3b3b34u: goto label_3b3b34;
        case 0x3b3b38u: goto label_3b3b38;
        case 0x3b3b3cu: goto label_3b3b3c;
        case 0x3b3b40u: goto label_3b3b40;
        case 0x3b3b44u: goto label_3b3b44;
        case 0x3b3b48u: goto label_3b3b48;
        case 0x3b3b4cu: goto label_3b3b4c;
        case 0x3b3b50u: goto label_3b3b50;
        case 0x3b3b54u: goto label_3b3b54;
        case 0x3b3b58u: goto label_3b3b58;
        case 0x3b3b5cu: goto label_3b3b5c;
        case 0x3b3b60u: goto label_3b3b60;
        case 0x3b3b64u: goto label_3b3b64;
        case 0x3b3b68u: goto label_3b3b68;
        case 0x3b3b6cu: goto label_3b3b6c;
        case 0x3b3b70u: goto label_3b3b70;
        case 0x3b3b74u: goto label_3b3b74;
        case 0x3b3b78u: goto label_3b3b78;
        case 0x3b3b7cu: goto label_3b3b7c;
        case 0x3b3b80u: goto label_3b3b80;
        case 0x3b3b84u: goto label_3b3b84;
        case 0x3b3b88u: goto label_3b3b88;
        case 0x3b3b8cu: goto label_3b3b8c;
        case 0x3b3b90u: goto label_3b3b90;
        case 0x3b3b94u: goto label_3b3b94;
        case 0x3b3b98u: goto label_3b3b98;
        case 0x3b3b9cu: goto label_3b3b9c;
        case 0x3b3ba0u: goto label_3b3ba0;
        case 0x3b3ba4u: goto label_3b3ba4;
        case 0x3b3ba8u: goto label_3b3ba8;
        case 0x3b3bacu: goto label_3b3bac;
        case 0x3b3bb0u: goto label_3b3bb0;
        case 0x3b3bb4u: goto label_3b3bb4;
        case 0x3b3bb8u: goto label_3b3bb8;
        case 0x3b3bbcu: goto label_3b3bbc;
        case 0x3b3bc0u: goto label_3b3bc0;
        case 0x3b3bc4u: goto label_3b3bc4;
        case 0x3b3bc8u: goto label_3b3bc8;
        case 0x3b3bccu: goto label_3b3bcc;
        case 0x3b3bd0u: goto label_3b3bd0;
        case 0x3b3bd4u: goto label_3b3bd4;
        case 0x3b3bd8u: goto label_3b3bd8;
        case 0x3b3bdcu: goto label_3b3bdc;
        case 0x3b3be0u: goto label_3b3be0;
        case 0x3b3be4u: goto label_3b3be4;
        case 0x3b3be8u: goto label_3b3be8;
        case 0x3b3becu: goto label_3b3bec;
        case 0x3b3bf0u: goto label_3b3bf0;
        case 0x3b3bf4u: goto label_3b3bf4;
        case 0x3b3bf8u: goto label_3b3bf8;
        case 0x3b3bfcu: goto label_3b3bfc;
        case 0x3b3c00u: goto label_3b3c00;
        case 0x3b3c04u: goto label_3b3c04;
        case 0x3b3c08u: goto label_3b3c08;
        case 0x3b3c0cu: goto label_3b3c0c;
        default: break;
    }

    ctx->pc = 0x3b3988u;

label_3b3988:
    // 0x3b3988: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b3988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3b398c:
    // 0x3b398c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b398cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b3990:
    // 0x3b3990: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3b3990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3b3994:
    // 0x3b3994: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3b3994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3b3998:
    // 0x3b3998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b3998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b399c:
    // 0x3b399c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b399cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b39a0:
    // 0x3b39a0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3b39a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3b39a4:
    // 0x3b39a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b39a8:
    // 0x3b39a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b39a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b39ac:
    // 0x3b39ac: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3b39acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3b39b0:
    // 0x3b39b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3b39b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b39b4:
    // 0x3b39b4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3b39b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3b39b8:
    // 0x3b39b8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3b39b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3b39bc:
    // 0x3b39bc: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3b39bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_3b39c0:
    // 0x3b39c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b39c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3b39c4:
    // 0x3b39c4: 0xc10480a  jal         func_412028
label_3b39c8:
    if (ctx->pc == 0x3B39C8u) {
        ctx->pc = 0x3B39C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39C4u;
        // 0x3b39c8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B39CCu;
        goto label_3b39cc;
    }
    ctx->pc = 0x3B39C4u;
    SET_GPR_U32(ctx, 31, 0x3B39CCu);
    ctx->pc = 0x3B39C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39C4u;
    // 0x3b39c8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B39C4u, 0x3B39CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B39CCu;
label_3b39cc:
    // 0x3b39cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b39ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b39d0:
    // 0x3b39d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b39d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b39d4:
    // 0x3b39d4: 0x16020083  bne         $s0, $v0, . + 4 + (0x83 << 2)
label_3b39d8:
    if (ctx->pc == 0x3B39D8u) {
        ctx->pc = 0x3B39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39D4u;
        // 0x3b39d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B39DCu;
        goto label_3b39dc;
    }
    ctx->pc = 0x3B39D4u;
    {
        const bool branch_taken_0x3b39d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B39D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39D4u;
        // 0x3b39d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39d4) {
            ctx->pc = 0x3B3BE4u;
            goto label_3b3be4;
        }
    }
    ctx->pc = 0x3B39DCu;
label_3b39dc:
    // 0x3b39dc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b39dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b39e0:
    // 0x3b39e0: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x3b39e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_3b39e4:
    // 0x3b39e4: 0xc10480a  jal         func_412028
label_3b39e8:
    if (ctx->pc == 0x3B39E8u) {
        ctx->pc = 0x3B39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39E4u;
        // 0x3b39e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B39ECu;
        goto label_3b39ec;
    }
    ctx->pc = 0x3B39E4u;
    SET_GPR_U32(ctx, 31, 0x3B39ECu);
    ctx->pc = 0x3B39E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B39E4u;
    // 0x3b39e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B39E4u, 0x3B39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B39ECu;
label_3b39ec:
    // 0x3b39ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b39ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b39f0:
    // 0x3b39f0: 0x1690007c  bne         $s4, $s0, . + 4 + (0x7C << 2)
label_3b39f4:
    if (ctx->pc == 0x3B39F4u) {
        ctx->pc = 0x3B39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39F0u;
        // 0x3b39f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B39F8u;
        goto label_3b39f8;
    }
    ctx->pc = 0x3B39F0u;
    {
        const bool branch_taken_0x3b39f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B39F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B39F0u;
        // 0x3b39f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b39f0) {
            ctx->pc = 0x3B3BE4u;
            goto label_3b3be4;
        }
    }
    ctx->pc = 0x3B39F8u;
label_3b39f8:
    // 0x3b39f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b39fc:
    // 0x3b39fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3b39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3a00:
    // 0x3b3a00: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3b3a00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a04:
    // 0x3b3a04: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x3b3a04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b3a08:
    // 0x3b3a08: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x3b3a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_3b3a0c:
    // 0x3b3a0c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3b3a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3b3a10:
    // 0x3b3a10: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b3a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3b3a14:
    // 0x3b3a14: 0x40f809  jalr        $v0
label_3b3a18:
    if (ctx->pc == 0x3B3A18u) {
        ctx->pc = 0x3B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A14u;
        // 0x3b3a18: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A1Cu;
        goto label_3b3a1c;
    }
    ctx->pc = 0x3B3A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3A1Cu);
        ctx->pc = 0x3B3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A14u;
        // 0x3b3a18: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3A14u, 0x3B3A1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3A1Cu;
label_3b3a1c:
    // 0x3b3a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b3a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a20:
    // 0x3b3a20: 0x1240006b  beqz        $s2, . + 4 + (0x6B << 2)
label_3b3a24:
    if (ctx->pc == 0x3B3A24u) {
        ctx->pc = 0x3B3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A20u;
        // 0x3b3a24: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A28u;
        goto label_3b3a28;
    }
    ctx->pc = 0x3B3A20u;
    {
        const bool branch_taken_0x3b3a20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A20u;
        // 0x3b3a24: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a20) {
            ctx->pc = 0x3B3BD0u;
            goto label_3b3bd0;
        }
    }
    ctx->pc = 0x3B3A28u;
label_3b3a28:
    // 0x3b3a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b3a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a2c:
    // 0x3b3a2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b3a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a30:
    // 0x3b3a30: 0xc10480a  jal         func_412028
label_3b3a34:
    if (ctx->pc == 0x3B3A34u) {
        ctx->pc = 0x3B3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A30u;
        // 0x3b3a34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A38u;
        goto label_3b3a38;
    }
    ctx->pc = 0x3B3A30u;
    SET_GPR_U32(ctx, 31, 0x3B3A38u);
    ctx->pc = 0x3B3A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A30u;
    // 0x3b3a34: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B3A30u, 0x3B3A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A38u;
label_3b3a38:
    // 0x3b3a38: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x3b3a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3a3c:
    // 0x3b3a3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b3a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b3a40:
    // 0x3b3a40: 0x14430064  bne         $v0, $v1, . + 4 + (0x64 << 2)
label_3b3a44:
    if (ctx->pc == 0x3B3A44u) {
        ctx->pc = 0x3B3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A40u;
        // 0x3b3a44: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A48u;
        goto label_3b3a48;
    }
    ctx->pc = 0x3B3A40u;
    {
        const bool branch_taken_0x3b3a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3B3A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A40u;
        // 0x3b3a44: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a40) {
            ctx->pc = 0x3B3BD4u;
            goto label_3b3bd4;
        }
    }
    ctx->pc = 0x3B3A48u;
label_3b3a48:
    // 0x3b3a48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b3a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a4c:
    // 0x3b3a4c: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x3b3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_3b3a50:
    // 0x3b3a50: 0xc10480a  jal         func_412028
label_3b3a54:
    if (ctx->pc == 0x3B3A54u) {
        ctx->pc = 0x3B3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A50u;
        // 0x3b3a54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A58u;
        goto label_3b3a58;
    }
    ctx->pc = 0x3B3A50u;
    SET_GPR_U32(ctx, 31, 0x3B3A58u);
    ctx->pc = 0x3B3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3A50u;
    // 0x3b3a54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B3A50u, 0x3B3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3A58u;
label_3b3a58:
    // 0x3b3a58: 0x1454005e  bne         $v0, $s4, . + 4 + (0x5E << 2)
label_3b3a5c:
    if (ctx->pc == 0x3B3A5Cu) {
        ctx->pc = 0x3B3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A58u;
        // 0x3b3a5c: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A60u;
        goto label_3b3a60;
    }
    ctx->pc = 0x3B3A58u;
    {
        const bool branch_taken_0x3b3a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x3B3A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A58u;
        // 0x3b3a5c: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a58) {
            ctx->pc = 0x3B3BD4u;
            goto label_3b3bd4;
        }
    }
    ctx->pc = 0x3B3A60u;
label_3b3a60:
    // 0x3b3a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b3a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b3a64:
    // 0x3b3a64: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3b3a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3b3a68:
    // 0x3b3a68: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x3b3a68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_3b3a6c:
    // 0x3b3a6c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3b3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3b3a70:
    // 0x3b3a70: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_3b3a74:
    if (ctx->pc == 0x3B3A74u) {
        ctx->pc = 0x3B3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A70u;
        // 0x3b3a74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A78u;
        goto label_3b3a78;
    }
    ctx->pc = 0x3B3A70u;
    {
        const bool branch_taken_0x3b3a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A70u;
        // 0x3b3a74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a70) {
            ctx->pc = 0x3B3ABCu;
            goto label_3b3abc;
        }
    }
    ctx->pc = 0x3B3A78u;
label_3b3a78:
    // 0x3b3a78: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x3b3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_3b3a7c:
    // 0x3b3a7c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3b3a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3b3a80:
    // 0x3b3a80: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3b3a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b3a84:
    // 0x3b3a84: 0x40f809  jalr        $v0
label_3b3a88:
    if (ctx->pc == 0x3B3A88u) {
        ctx->pc = 0x3B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A84u;
        // 0x3b3a88: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A8Cu;
        goto label_3b3a8c;
    }
    ctx->pc = 0x3B3A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3A8Cu);
        ctx->pc = 0x3B3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A84u;
        // 0x3b3a88: 0x34a501a7  ori         $a1, $a1, 0x1A7 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)423);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3A84u, 0x3B3A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3A8Cu;
label_3b3a8c:
    // 0x3b3a8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3b3a8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a90:
    // 0x3b3a90: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
label_3b3a94:
    if (ctx->pc == 0x3B3A94u) {
        ctx->pc = 0x3B3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A90u;
        // 0x3b3a94: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3A98u;
        goto label_3b3a98;
    }
    ctx->pc = 0x3B3A90u;
    {
        const bool branch_taken_0x3b3a90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3A90u;
        // 0x3b3a94: 0x8fa60018  lw          $a2, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3a90) {
            ctx->pc = 0x3B3AC0u;
            goto label_3b3ac0;
        }
    }
    ctx->pc = 0x3B3A98u;
label_3b3a98:
    // 0x3b3a98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b3a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b3a9c:
    // 0x3b3a9c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3b3a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b3aa0:
    // 0x3b3aa0: 0xc10480a  jal         func_412028
label_3b3aa4:
    if (ctx->pc == 0x3B3AA4u) {
        ctx->pc = 0x3B3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AA0u;
        // 0x3b3aa4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AA8u;
        goto label_3b3aa8;
    }
    ctx->pc = 0x3B3AA0u;
    SET_GPR_U32(ctx, 31, 0x3B3AA8u);
    ctx->pc = 0x3B3AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AA0u;
    // 0x3b3aa4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3B3AA0u, 0x3B3AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3AA8u;
label_3b3aa8:
    // 0x3b3aa8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3b3aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3b3aac:
    // 0x3b3aac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3b3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b3ab0:
    // 0x3b3ab0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3b3ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3b3ab4:
    // 0x3b3ab4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b3ab8:
    if (ctx->pc == 0x3B3AB8u) {
        ctx->pc = 0x3B3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AB4u;
        // 0x3b3ab8: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3ABCu;
        goto label_3b3abc;
    }
    ctx->pc = 0x3B3AB4u;
    {
        const bool branch_taken_0x3b3ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AB4u;
        // 0x3b3ab8: 0x2c500001  sltiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ab4) {
            ctx->pc = 0x3B3AC0u;
            goto label_3b3ac0;
        }
    }
    ctx->pc = 0x3B3ABCu;
label_3b3abc:
    // 0x3b3abc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3b3abcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b3ac0:
    // 0x3b3ac0: 0x1200003f  beqz        $s0, . + 4 + (0x3F << 2)
label_3b3ac4:
    if (ctx->pc == 0x3B3AC4u) {
        ctx->pc = 0x3B3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AC0u;
        // 0x3b3ac4: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AC8u;
        goto label_3b3ac8;
    }
    ctx->pc = 0x3B3AC0u;
    {
        const bool branch_taken_0x3b3ac0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AC0u;
        // 0x3b3ac4: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ac0) {
            ctx->pc = 0x3B3BC0u;
            goto label_3b3bc0;
        }
    }
    ctx->pc = 0x3B3AC8u;
label_3b3ac8:
    // 0x3b3ac8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3b3ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3acc:
    // 0x3b3acc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b3accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3b3ad0:
    // 0x3b3ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b3ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b3ad4:
    // 0x3b3ad4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b3ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3b3ad8:
    // 0x3b3ad8: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3b3ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3b3adc:
    // 0x3b3adc: 0xc0e9e2a  jal         func_3A78A8
label_3b3ae0:
    if (ctx->pc == 0x3B3AE0u) {
        ctx->pc = 0x3B3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3ADCu;
        // 0x3b3ae0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AE4u;
        goto label_3b3ae4;
    }
    ctx->pc = 0x3B3ADCu;
    SET_GPR_U32(ctx, 31, 0x3B3AE4u);
    ctx->pc = 0x3B3AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3ADCu;
    // 0x3b3ae0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A78A8u, 0x3B3ADCu, 0x3B3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3AE4u;
label_3b3ae4:
    // 0x3b3ae4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b3ae8:
    if (ctx->pc == 0x3B3AE8u) {
        ctx->pc = 0x3B3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AE4u;
        // 0x3b3ae8: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AECu;
        goto label_3b3aec;
    }
    ctx->pc = 0x3B3AE4u;
    {
        const bool branch_taken_0x3b3ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AE4u;
        // 0x3b3ae8: 0xae2200b4  sw          $v0, 0xB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ae4) {
            ctx->pc = 0x3B3AF4u;
            goto label_3b3af4;
        }
    }
    ctx->pc = 0x3B3AECu;
label_3b3aec:
    // 0x3b3aec: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3b3af0:
    if (ctx->pc == 0x3B3AF0u) {
        ctx->pc = 0x3B3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AECu;
        // 0x3b3af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3AF4u;
        goto label_3b3af4;
    }
    ctx->pc = 0x3B3AECu;
    {
        const bool branch_taken_0x3b3aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AECu;
        // 0x3b3af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3aec) {
            ctx->pc = 0x3B3B64u;
            goto label_3b3b64;
        }
    }
    ctx->pc = 0x3B3AF4u;
label_3b3af4:
    // 0x3b3af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3af8:
    // 0x3b3af8: 0xc0ecfda  jal         func_3B3F68
label_3b3afc:
    if (ctx->pc == 0x3B3AFCu) {
        ctx->pc = 0x3B3AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3AF8u;
        // 0x3b3afc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B00u;
        goto label_3b3b00;
    }
    ctx->pc = 0x3B3AF8u;
    SET_GPR_U32(ctx, 31, 0x3B3B00u);
    ctx->pc = 0x3B3AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3AF8u;
    // 0x3b3afc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3F68u, 0x3B3AF8u, 0x3B3B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B00u;
label_3b3b00:
    // 0x3b3b00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3b3b04:
    if (ctx->pc == 0x3B3B04u) {
        ctx->pc = 0x3B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B00u;
        // 0x3b3b04: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B08u;
        goto label_3b3b08;
    }
    ctx->pc = 0x3B3B00u;
    {
        const bool branch_taken_0x3b3b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B00u;
        // 0x3b3b04: 0x24020190  addiu       $v0, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b00) {
            ctx->pc = 0x3B3B30u;
            goto label_3b3b30;
        }
    }
    ctx->pc = 0x3B3B08u;
label_3b3b08:
    // 0x3b3b08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b3b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b0c:
    // 0x3b3b0c: 0xc1035f6  jal         func_40D7D8
label_3b3b10:
    if (ctx->pc == 0x3B3B10u) {
        ctx->pc = 0x3B3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B0Cu;
        // 0x3b3b10: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B14u;
        goto label_3b3b14;
    }
    ctx->pc = 0x3B3B0Cu;
    SET_GPR_U32(ctx, 31, 0x3B3B14u);
    ctx->pc = 0x3B3B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B0Cu;
    // 0x3b3b10: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3B3B0Cu, 0x3B3B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B14u;
label_3b3b14:
    // 0x3b3b14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3b3b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b18:
    // 0x3b3b18: 0xc103628  jal         func_40D8A0
label_3b3b1c:
    if (ctx->pc == 0x3B3B1Cu) {
        ctx->pc = 0x3B3B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B18u;
        // 0x3b3b1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B20u;
        goto label_3b3b20;
    }
    ctx->pc = 0x3B3B18u;
    SET_GPR_U32(ctx, 31, 0x3B3B20u);
    ctx->pc = 0x3B3B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B18u;
    // 0x3b3b1c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3B3B18u, 0x3B3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B20u;
label_3b3b20:
    // 0x3b3b20: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3b3b24:
    // 0x3b3b24: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x3b3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_3b3b28:
    // 0x3b3b28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b3b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b3b2c:
    // 0x3b3b2c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3b3b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_3b3b30:
    // 0x3b3b30: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_3b3b34:
    if (ctx->pc == 0x3B3B34u) {
        ctx->pc = 0x3B3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B30u;
        // 0x3b3b34: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B38u;
        goto label_3b3b38;
    }
    ctx->pc = 0x3B3B30u;
    {
        const bool branch_taken_0x3b3b30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B30u;
        // 0x3b3b34: 0x262400b0  addiu       $a0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b30) {
            ctx->pc = 0x3B3B58u;
            goto label_3b3b58;
        }
    }
    ctx->pc = 0x3B3B38u;
label_3b3b38:
    // 0x3b3b38: 0xc0ecd30  jal         func_3B34C0
label_3b3b3c:
    if (ctx->pc == 0x3B3B3Cu) {
        ctx->pc = 0x3B3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B38u;
        // 0x3b3b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B40u;
        goto label_3b3b40;
    }
    ctx->pc = 0x3B3B38u;
    SET_GPR_U32(ctx, 31, 0x3B3B40u);
    ctx->pc = 0x3B3B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B38u;
    // 0x3b3b3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B34C0u, 0x3B3B38u, 0x3B3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B40u;
label_3b3b40:
    // 0x3b3b40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3b3b44:
    if (ctx->pc == 0x3B3B44u) {
        ctx->pc = 0x3B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B40u;
        // 0x3b3b44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B48u;
        goto label_3b3b48;
    }
    ctx->pc = 0x3B3B40u;
    {
        const bool branch_taken_0x3b3b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B40u;
        // 0x3b3b44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b40) {
            ctx->pc = 0x3B3B64u;
            goto label_3b3b64;
        }
    }
    ctx->pc = 0x3B3B48u;
label_3b3b48:
    // 0x3b3b48: 0xc0e9e5c  jal         func_3A7970
label_3b3b4c:
    if (ctx->pc == 0x3B3B4Cu) {
        ctx->pc = 0x3B3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B48u;
        // 0x3b3b4c: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B50u;
        goto label_3b3b50;
    }
    ctx->pc = 0x3B3B48u;
    SET_GPR_U32(ctx, 31, 0x3B3B50u);
    ctx->pc = 0x3B3B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B48u;
    // 0x3b3b4c: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7970u, 0x3B3B48u, 0x3B3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B50u;
label_3b3b50:
    // 0x3b3b50: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b3b54:
    if (ctx->pc == 0x3B3B54u) {
        ctx->pc = 0x3B3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B50u;
        // 0x3b3b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B58u;
        goto label_3b3b58;
    }
    ctx->pc = 0x3B3B50u;
    {
        const bool branch_taken_0x3b3b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B50u;
        // 0x3b3b54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b50) {
            ctx->pc = 0x3B3B64u;
            goto label_3b3b64;
        }
    }
    ctx->pc = 0x3B3B58u;
label_3b3b58:
    // 0x3b3b58: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3b3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3b3b5c:
    // 0x3b3b5c: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x3b3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_3b3b60:
    // 0x3b3b60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b3b60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b3b64:
    // 0x3b3b64: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3b3b68:
    if (ctx->pc == 0x3B3B68u) {
        ctx->pc = 0x3B3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B64u;
        // 0x3b3b68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B6Cu;
        goto label_3b3b6c;
    }
    ctx->pc = 0x3B3B64u;
    {
        const bool branch_taken_0x3b3b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B64u;
        // 0x3b3b68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b64) {
            ctx->pc = 0x3B3BC0u;
            goto label_3b3bc0;
        }
    }
    ctx->pc = 0x3B3B6Cu;
label_3b3b6c:
    // 0x3b3b6c: 0x240501a2  addiu       $a1, $zero, 0x1A2
    ctx->pc = 0x3b3b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 418));
label_3b3b70:
    // 0x3b3b70: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x3b3b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_3b3b74:
    // 0x3b3b74: 0xc103322  jal         func_40CC88
label_3b3b78:
    if (ctx->pc == 0x3B3B78u) {
        ctx->pc = 0x3B3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B74u;
        // 0x3b3b78: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B7Cu;
        goto label_3b3b7c;
    }
    ctx->pc = 0x3B3B74u;
    SET_GPR_U32(ctx, 31, 0x3B3B7Cu);
    ctx->pc = 0x3B3B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B74u;
    // 0x3b3b78: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3B3B74u, 0x3B3B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B7Cu;
label_3b3b7c:
    // 0x3b3b7c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3b3b80:
    if (ctx->pc == 0x3B3B80u) {
        ctx->pc = 0x3B3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B7Cu;
        // 0x3b3b80: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B84u;
        goto label_3b3b84;
    }
    ctx->pc = 0x3B3B7Cu;
    {
        const bool branch_taken_0x3b3b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B7Cu;
        // 0x3b3b80: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b7c) {
            ctx->pc = 0x3B3BC4u;
            goto label_3b3bc4;
        }
    }
    ctx->pc = 0x3B3B84u;
label_3b3b84:
    // 0x3b3b84: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x3b3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_3b3b88:
    // 0x3b3b88: 0xc0e9f58  jal         func_3A7D60
label_3b3b8c:
    if (ctx->pc == 0x3B3B8Cu) {
        ctx->pc = 0x3B3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B88u;
        // 0x3b3b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B90u;
        goto label_3b3b90;
    }
    ctx->pc = 0x3B3B88u;
    SET_GPR_U32(ctx, 31, 0x3B3B90u);
    ctx->pc = 0x3B3B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3B88u;
    // 0x3b3b8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D60u, 0x3B3B88u, 0x3B3B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3B90u;
label_3b3b90:
    // 0x3b3b90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3b3b94:
    if (ctx->pc == 0x3B3B94u) {
        ctx->pc = 0x3B3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B90u;
        // 0x3b3b94: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3B98u;
        goto label_3b3b98;
    }
    ctx->pc = 0x3B3B90u;
    {
        const bool branch_taken_0x3b3b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3B90u;
        // 0x3b3b94: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3b90) {
            ctx->pc = 0x3B3BC0u;
            goto label_3b3bc0;
        }
    }
    ctx->pc = 0x3B3B98u;
label_3b3b98:
    // 0x3b3b98: 0x26f0e880  addiu       $s0, $s7, -0x1780
    ctx->pc = 0x3b3b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3b3b9c:
    // 0x3b3b9c: 0xe62000bc  swc1        $f0, 0xBC($s1)
    ctx->pc = 0x3b3b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_3b3ba0:
    // 0x3b3ba0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3b3ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3b3ba4:
    // 0x3b3ba4: 0x40f809  jalr        $v0
label_3b3ba8:
    if (ctx->pc == 0x3B3BA8u) {
        ctx->pc = 0x3B3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BA4u;
        // 0x3b3ba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BACu;
        goto label_3b3bac;
    }
    ctx->pc = 0x3B3BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3BACu);
        ctx->pc = 0x3B3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BA4u;
        // 0x3b3ba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3BA4u, 0x3B3BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3BACu;
label_3b3bac:
    // 0x3b3bac: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3b3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3b3bb0:
    // 0x3b3bb0: 0x60f809  jalr        $v1
label_3b3bb4:
    if (ctx->pc == 0x3B3BB4u) {
        ctx->pc = 0x3B3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BB0u;
        // 0x3b3bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BB8u;
        goto label_3b3bb8;
    }
    ctx->pc = 0x3B3BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B3BB8u);
        ctx->pc = 0x3B3BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BB0u;
        // 0x3b3bb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3BB0u, 0x3B3BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3BB8u;
label_3b3bb8:
    // 0x3b3bb8: 0x1000000a  b           . + 4 + (0xA << 2)
label_3b3bbc:
    if (ctx->pc == 0x3B3BBCu) {
        ctx->pc = 0x3B3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BB8u;
        // 0x3b3bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BC0u;
        goto label_3b3bc0;
    }
    ctx->pc = 0x3B3BB8u;
    {
        const bool branch_taken_0x3b3bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BB8u;
        // 0x3b3bbc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3bb8) {
            ctx->pc = 0x3B3BE4u;
            goto label_3b3be4;
        }
    }
    ctx->pc = 0x3B3BC0u;
label_3b3bc0:
    // 0x3b3bc0: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x3b3bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3b3bc4:
    // 0x3b3bc4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b3bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b3bc8:
    // 0x3b3bc8: 0x40f809  jalr        $v0
label_3b3bcc:
    if (ctx->pc == 0x3B3BCCu) {
        ctx->pc = 0x3B3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BC8u;
        // 0x3b3bcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BD0u;
        goto label_3b3bd0;
    }
    ctx->pc = 0x3B3BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3BD0u);
        ctx->pc = 0x3B3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BC8u;
        // 0x3b3bcc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3BC8u, 0x3B3BD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3BD0u;
label_3b3bd0:
    // 0x3b3bd0: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x3b3bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3b3bd4:
    // 0x3b3bd4: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b3bd8:
    // 0x3b3bd8: 0x40f809  jalr        $v0
label_3b3bdc:
    if (ctx->pc == 0x3B3BDCu) {
        ctx->pc = 0x3B3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BD8u;
        // 0x3b3bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3BE0u;
        goto label_3b3be0;
    }
    ctx->pc = 0x3B3BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B3BE0u);
        ctx->pc = 0x3B3BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3BD8u;
        // 0x3b3bdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3BD8u, 0x3B3BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B3BE0u;
label_3b3be0:
    // 0x3b3be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b3be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3be4:
    // 0x3b3be4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3b3be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b3be8:
    // 0x3b3be8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3b3be8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b3bec:
    // 0x3b3bec: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3b3becu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b3bf0:
    // 0x3b3bf0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3b3bf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b3bf4:
    // 0x3b3bf4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3b3bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b3bf8:
    // 0x3b3bf8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b3bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b3bfc:
    // 0x3b3bfc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3b3bfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b3c00:
    // 0x3b3c00: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3b3c00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b3c04:
    // 0x3b3c04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b3c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3b3c08:
    // 0x3b3c08: 0x3e00008  jr          $ra
label_3b3c0c:
    if (ctx->pc == 0x3B3C0Cu) {
        ctx->pc = 0x3B3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C08u;
        // 0x3b3c0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B3C10u;
        goto label_fallthrough_0x3b3c08;
    }
    ctx->pc = 0x3B3C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3C08u;
        // 0x3b3c0c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b3c08:
    ctx->pc = 0x3B3C10u;
}
