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

// Function: sub_0041BC28
// Address: 0x41bc28 - 0x41bea8
void sub_0041BC28_0x41bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041BC28_0x41bc28");
#endif

    switch (ctx->pc) {
        case 0x41bc28u: goto label_41bc28;
        case 0x41bc2cu: goto label_41bc2c;
        case 0x41bc30u: goto label_41bc30;
        case 0x41bc34u: goto label_41bc34;
        case 0x41bc38u: goto label_41bc38;
        case 0x41bc3cu: goto label_41bc3c;
        case 0x41bc40u: goto label_41bc40;
        case 0x41bc44u: goto label_41bc44;
        case 0x41bc48u: goto label_41bc48;
        case 0x41bc4cu: goto label_41bc4c;
        case 0x41bc50u: goto label_41bc50;
        case 0x41bc54u: goto label_41bc54;
        case 0x41bc58u: goto label_41bc58;
        case 0x41bc5cu: goto label_41bc5c;
        case 0x41bc60u: goto label_41bc60;
        case 0x41bc64u: goto label_41bc64;
        case 0x41bc68u: goto label_41bc68;
        case 0x41bc6cu: goto label_41bc6c;
        case 0x41bc70u: goto label_41bc70;
        case 0x41bc74u: goto label_41bc74;
        case 0x41bc78u: goto label_41bc78;
        case 0x41bc7cu: goto label_41bc7c;
        case 0x41bc80u: goto label_41bc80;
        case 0x41bc84u: goto label_41bc84;
        case 0x41bc88u: goto label_41bc88;
        case 0x41bc8cu: goto label_41bc8c;
        case 0x41bc90u: goto label_41bc90;
        case 0x41bc94u: goto label_41bc94;
        case 0x41bc98u: goto label_41bc98;
        case 0x41bc9cu: goto label_41bc9c;
        case 0x41bca0u: goto label_41bca0;
        case 0x41bca4u: goto label_41bca4;
        case 0x41bca8u: goto label_41bca8;
        case 0x41bcacu: goto label_41bcac;
        case 0x41bcb0u: goto label_41bcb0;
        case 0x41bcb4u: goto label_41bcb4;
        case 0x41bcb8u: goto label_41bcb8;
        case 0x41bcbcu: goto label_41bcbc;
        case 0x41bcc0u: goto label_41bcc0;
        case 0x41bcc4u: goto label_41bcc4;
        case 0x41bcc8u: goto label_41bcc8;
        case 0x41bcccu: goto label_41bccc;
        case 0x41bcd0u: goto label_41bcd0;
        case 0x41bcd4u: goto label_41bcd4;
        case 0x41bcd8u: goto label_41bcd8;
        case 0x41bcdcu: goto label_41bcdc;
        case 0x41bce0u: goto label_41bce0;
        case 0x41bce4u: goto label_41bce4;
        case 0x41bce8u: goto label_41bce8;
        case 0x41bcecu: goto label_41bcec;
        case 0x41bcf0u: goto label_41bcf0;
        case 0x41bcf4u: goto label_41bcf4;
        case 0x41bcf8u: goto label_41bcf8;
        case 0x41bcfcu: goto label_41bcfc;
        case 0x41bd00u: goto label_41bd00;
        case 0x41bd04u: goto label_41bd04;
        case 0x41bd08u: goto label_41bd08;
        case 0x41bd0cu: goto label_41bd0c;
        case 0x41bd10u: goto label_41bd10;
        case 0x41bd14u: goto label_41bd14;
        case 0x41bd18u: goto label_41bd18;
        case 0x41bd1cu: goto label_41bd1c;
        case 0x41bd20u: goto label_41bd20;
        case 0x41bd24u: goto label_41bd24;
        case 0x41bd28u: goto label_41bd28;
        case 0x41bd2cu: goto label_41bd2c;
        case 0x41bd30u: goto label_41bd30;
        case 0x41bd34u: goto label_41bd34;
        case 0x41bd38u: goto label_41bd38;
        case 0x41bd3cu: goto label_41bd3c;
        case 0x41bd40u: goto label_41bd40;
        case 0x41bd44u: goto label_41bd44;
        case 0x41bd48u: goto label_41bd48;
        case 0x41bd4cu: goto label_41bd4c;
        case 0x41bd50u: goto label_41bd50;
        case 0x41bd54u: goto label_41bd54;
        case 0x41bd58u: goto label_41bd58;
        case 0x41bd5cu: goto label_41bd5c;
        case 0x41bd60u: goto label_41bd60;
        case 0x41bd64u: goto label_41bd64;
        case 0x41bd68u: goto label_41bd68;
        case 0x41bd6cu: goto label_41bd6c;
        case 0x41bd70u: goto label_41bd70;
        case 0x41bd74u: goto label_41bd74;
        case 0x41bd78u: goto label_41bd78;
        case 0x41bd7cu: goto label_41bd7c;
        case 0x41bd80u: goto label_41bd80;
        case 0x41bd84u: goto label_41bd84;
        case 0x41bd88u: goto label_41bd88;
        case 0x41bd8cu: goto label_41bd8c;
        case 0x41bd90u: goto label_41bd90;
        case 0x41bd94u: goto label_41bd94;
        case 0x41bd98u: goto label_41bd98;
        case 0x41bd9cu: goto label_41bd9c;
        case 0x41bda0u: goto label_41bda0;
        case 0x41bda4u: goto label_41bda4;
        case 0x41bda8u: goto label_41bda8;
        case 0x41bdacu: goto label_41bdac;
        case 0x41bdb0u: goto label_41bdb0;
        case 0x41bdb4u: goto label_41bdb4;
        case 0x41bdb8u: goto label_41bdb8;
        case 0x41bdbcu: goto label_41bdbc;
        case 0x41bdc0u: goto label_41bdc0;
        case 0x41bdc4u: goto label_41bdc4;
        case 0x41bdc8u: goto label_41bdc8;
        case 0x41bdccu: goto label_41bdcc;
        case 0x41bdd0u: goto label_41bdd0;
        case 0x41bdd4u: goto label_41bdd4;
        case 0x41bdd8u: goto label_41bdd8;
        case 0x41bddcu: goto label_41bddc;
        case 0x41bde0u: goto label_41bde0;
        case 0x41bde4u: goto label_41bde4;
        case 0x41bde8u: goto label_41bde8;
        case 0x41bdecu: goto label_41bdec;
        case 0x41bdf0u: goto label_41bdf0;
        case 0x41bdf4u: goto label_41bdf4;
        case 0x41bdf8u: goto label_41bdf8;
        case 0x41bdfcu: goto label_41bdfc;
        case 0x41be00u: goto label_41be00;
        case 0x41be04u: goto label_41be04;
        case 0x41be08u: goto label_41be08;
        case 0x41be0cu: goto label_41be0c;
        case 0x41be10u: goto label_41be10;
        case 0x41be14u: goto label_41be14;
        case 0x41be18u: goto label_41be18;
        case 0x41be1cu: goto label_41be1c;
        case 0x41be20u: goto label_41be20;
        case 0x41be24u: goto label_41be24;
        case 0x41be28u: goto label_41be28;
        case 0x41be2cu: goto label_41be2c;
        case 0x41be30u: goto label_41be30;
        case 0x41be34u: goto label_41be34;
        case 0x41be38u: goto label_41be38;
        case 0x41be3cu: goto label_41be3c;
        case 0x41be40u: goto label_41be40;
        case 0x41be44u: goto label_41be44;
        case 0x41be48u: goto label_41be48;
        case 0x41be4cu: goto label_41be4c;
        case 0x41be50u: goto label_41be50;
        case 0x41be54u: goto label_41be54;
        case 0x41be58u: goto label_41be58;
        case 0x41be5cu: goto label_41be5c;
        case 0x41be60u: goto label_41be60;
        case 0x41be64u: goto label_41be64;
        case 0x41be68u: goto label_41be68;
        case 0x41be6cu: goto label_41be6c;
        case 0x41be70u: goto label_41be70;
        case 0x41be74u: goto label_41be74;
        case 0x41be78u: goto label_41be78;
        case 0x41be7cu: goto label_41be7c;
        case 0x41be80u: goto label_41be80;
        case 0x41be84u: goto label_41be84;
        case 0x41be88u: goto label_41be88;
        case 0x41be8cu: goto label_41be8c;
        case 0x41be90u: goto label_41be90;
        case 0x41be94u: goto label_41be94;
        case 0x41be98u: goto label_41be98;
        case 0x41be9cu: goto label_41be9c;
        case 0x41bea0u: goto label_41bea0;
        case 0x41bea4u: goto label_41bea4;
        default: break;
    }

    ctx->pc = 0x41bc28u;

label_41bc28:
    // 0x41bc28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x41bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_41bc2c:
    // 0x41bc2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41bc30:
    // 0x41bc30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x41bc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_41bc34:
    // 0x41bc34: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x41bc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_41bc38:
    // 0x41bc38: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x41bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_41bc3c:
    // 0x41bc3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x41bc3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41bc40:
    // 0x41bc40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x41bc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_41bc44:
    // 0x41bc44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41bc44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bc48:
    // 0x41bc48: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x41bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_41bc4c:
    // 0x41bc4c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x41bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_41bc50:
    // 0x41bc50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x41bc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_41bc54:
    // 0x41bc54: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x41bc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_41bc58:
    // 0x41bc58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x41bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_41bc5c:
    // 0x41bc5c: 0xc103322  jal         func_40CC88
label_41bc60:
    if (ctx->pc == 0x41BC60u) {
        ctx->pc = 0x41BC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC5Cu;
        // 0x41bc60: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BC64u;
        goto label_41bc64;
    }
    ctx->pc = 0x41BC5Cu;
    SET_GPR_U32(ctx, 31, 0x41BC64u);
    ctx->pc = 0x41BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC5Cu;
    // 0x41bc60: 0x27a70024  addiu       $a3, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x41BC5Cu, 0x41BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC64u;
label_41bc64:
    // 0x41bc64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41bc68:
    if (ctx->pc == 0x41BC68u) {
        ctx->pc = 0x41BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC64u;
        // 0x41bc68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BC6Cu;
        goto label_41bc6c;
    }
    ctx->pc = 0x41BC64u;
    {
        const bool branch_taken_0x41bc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC64u;
        // 0x41bc68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc64) {
            ctx->pc = 0x41BC74u;
            goto label_41bc74;
        }
    }
    ctx->pc = 0x41BC6Cu;
label_41bc6c:
    // 0x41bc6c: 0x10000084  b           . + 4 + (0x84 << 2)
label_41bc70:
    if (ctx->pc == 0x41BC70u) {
        ctx->pc = 0x41BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC6Cu;
        // 0x41bc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BC74u;
        goto label_41bc74;
    }
    ctx->pc = 0x41BC6Cu;
    {
        const bool branch_taken_0x41bc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC6Cu;
        // 0x41bc70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bc6c) {
            ctx->pc = 0x41BE80u;
            goto label_41be80;
        }
    }
    ctx->pc = 0x41BC74u;
label_41bc74:
    // 0x41bc74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41bc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41bc78:
    // 0x41bc78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x41bc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_41bc7c:
    // 0x41bc7c: 0xc10480a  jal         func_412028
label_41bc80:
    if (ctx->pc == 0x41BC80u) {
        ctx->pc = 0x41BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BC7Cu;
        // 0x41bc80: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BC84u;
        goto label_41bc84;
    }
    ctx->pc = 0x41BC7Cu;
    SET_GPR_U32(ctx, 31, 0x41BC84u);
    ctx->pc = 0x41BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BC7Cu;
    // 0x41bc80: 0x3c100062  lui         $s0, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41BC7Cu, 0x41BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BC84u;
label_41bc84:
    // 0x41bc84: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x41bc84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bc88:
    // 0x41bc88: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41bc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41bc8c:
    // 0x41bc8c: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x41bc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_41bc90:
    // 0x41bc90: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x41bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_41bc94:
    // 0x41bc94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41bc94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41bc98:
    // 0x41bc98: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41bc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_41bc9c:
    // 0x41bc9c: 0x8fb10000  lw          $s1, 0x0($sp)
    ctx->pc = 0x41bc9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_41bca0:
    // 0x41bca0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41bca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41bca4:
    // 0x41bca4: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41bca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41bca8:
    // 0x41bca8: 0x8fb30004  lw          $s3, 0x4($sp)
    ctx->pc = 0x41bca8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_41bcac:
    // 0x41bcac: 0x40f809  jalr        $v0
label_41bcb0:
    if (ctx->pc == 0x41BCB0u) {
        ctx->pc = 0x41BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCACu;
        // 0x41bcb0: 0x8fb40008  lw          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BCB4u;
        goto label_41bcb4;
    }
    ctx->pc = 0x41BCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41BCB4u);
        ctx->pc = 0x41BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCACu;
        // 0x41bcb0: 0x8fb40008  lw          $s4, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BCACu, 0x41BCB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41BCB4u;
label_41bcb4:
    // 0x41bcb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41bcb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41bcb8:
    // 0x41bcb8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_41bcbc:
    if (ctx->pc == 0x41BCBCu) {
        ctx->pc = 0x41BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCB8u;
        // 0x41bcbc: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BCC0u;
        goto label_41bcc0;
    }
    ctx->pc = 0x41BCB8u;
    {
        const bool branch_taken_0x41bcb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCB8u;
        // 0x41bcbc: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bcb8) {
            ctx->pc = 0x41BCE8u;
            goto label_41bce8;
        }
    }
    ctx->pc = 0x41BCC0u;
label_41bcc0:
    // 0x41bcc0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x41bcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_41bcc4:
    // 0x41bcc4: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x41bcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_41bcc8:
    // 0x41bcc8: 0x2484c9e0  addiu       $a0, $a0, -0x3620
    ctx->pc = 0x41bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
label_41bccc:
    // 0x41bccc: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x41bcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
label_41bcd0:
    // 0x41bcd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41bcd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bcd4:
    // 0x41bcd4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x41bcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_41bcd8:
    // 0x41bcd8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x41bcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bcdc:
    // 0x41bcdc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x41bcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_41bce0:
    // 0x41bce0: 0xc104c80  jal         func_413200
label_41bce4:
    if (ctx->pc == 0x41BCE4u) {
        ctx->pc = 0x41BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCE0u;
        // 0x41bce4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BCE8u;
        goto label_41bce8;
    }
    ctx->pc = 0x41BCE0u;
    SET_GPR_U32(ctx, 31, 0x41BCE8u);
    ctx->pc = 0x41BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BCE0u;
    // 0x41bce4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x41BCE0u, 0x41BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BCE8u;
label_41bce8:
    // 0x41bce8: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x41bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_41bcec:
    // 0x41bcec: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x41bcecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_41bcf0:
    // 0x41bcf0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x41bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41bcf4:
    // 0x41bcf4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x41bcf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41bcf8:
    // 0x41bcf8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_41bcfc:
    if (ctx->pc == 0x41BCFCu) {
        ctx->pc = 0x41BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCF8u;
        // 0x41bcfc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BD00u;
        goto label_41bd00;
    }
    ctx->pc = 0x41BCF8u;
    {
        const bool branch_taken_0x41bcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x41BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BCF8u;
        // 0x41bcfc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bcf8) {
            ctx->pc = 0x41BD0Cu;
            goto label_41bd0c;
        }
    }
    ctx->pc = 0x41BD00u;
label_41bd00:
    // 0x41bd00: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x41bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_41bd04:
    // 0x41bd04: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_41bd08:
    if (ctx->pc == 0x41BD08u) {
        ctx->pc = 0x41BD0Cu;
        goto label_41bd0c;
    }
    ctx->pc = 0x41BD04u;
    {
        const bool branch_taken_0x41bd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x41bd04) {
            ctx->pc = 0x41BD10u;
            goto label_41bd10;
        }
    }
    ctx->pc = 0x41BD0Cu;
label_41bd0c:
    // 0x41bd0c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x41bd0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41bd10:
    // 0x41bd10: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_41bd14:
    if (ctx->pc == 0x41BD14u) {
        ctx->pc = 0x41BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD10u;
        // 0x41bd14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BD18u;
        goto label_41bd18;
    }
    ctx->pc = 0x41BD10u;
    {
        const bool branch_taken_0x41bd10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD10u;
        // 0x41bd14: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd10) {
            ctx->pc = 0x41BD2Cu;
            goto label_41bd2c;
        }
    }
    ctx->pc = 0x41BD18u;
label_41bd18:
    // 0x41bd18: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x41bd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
label_41bd1c:
    // 0x41bd1c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x41bd1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_41bd20:
    // 0x41bd20: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x41bd20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
label_41bd24:
    // 0x41bd24: 0x10000003  b           . + 4 + (0x3 << 2)
label_41bd28:
    if (ctx->pc == 0x41BD28u) {
        ctx->pc = 0x41BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD24u;
        // 0x41bd28: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BD2Cu;
        goto label_41bd2c;
    }
    ctx->pc = 0x41BD24u;
    {
        const bool branch_taken_0x41bd24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD24u;
        // 0x41bd28: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd24) {
            ctx->pc = 0x41BD34u;
            goto label_41bd34;
        }
    }
    ctx->pc = 0x41BD2Cu;
label_41bd2c:
    // 0x41bd2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x41bd2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bd30:
    // 0x41bd30: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x41bd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_41bd34:
    // 0x41bd34: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x41bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_41bd38:
    // 0x41bd38: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x41bd38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_41bd3c:
    // 0x41bd3c: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x41bd3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_41bd40:
    // 0x41bd40: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x41bd40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_41bd44:
    // 0x41bd44: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x41bd44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_41bd48:
    // 0x41bd48: 0x26c4e880  addiu       $a0, $s6, -0x1780
    ctx->pc = 0x41bd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961280));
label_41bd4c:
    // 0x41bd4c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x41bd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_41bd50:
    // 0x41bd50: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x41bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_41bd54:
    // 0x41bd54: 0x34a50018  ori         $a1, $a1, 0x18
    ctx->pc = 0x41bd54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24);
label_41bd58:
    // 0x41bd58: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x41bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
label_41bd5c:
    // 0x41bd5c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x41bd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_41bd60:
    // 0x41bd60: 0x678818  mult        $s1, $v1, $a3
    ctx->pc = 0x41bd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_41bd64:
    // 0x41bd64: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x41bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_41bd68:
    // 0x41bd68: 0x2288021  addu        $s0, $s1, $t0
    ctx->pc = 0x41bd68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
label_41bd6c:
    // 0x41bd6c: 0x40f809  jalr        $v0
label_41bd70:
    if (ctx->pc == 0x41BD70u) {
        ctx->pc = 0x41BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD6Cu;
        // 0x41bd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BD74u;
        goto label_41bd74;
    }
    ctx->pc = 0x41BD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41BD74u);
        ctx->pc = 0x41BD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD6Cu;
        // 0x41bd70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BD6Cu, 0x41BD74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41BD74u;
label_41bd74:
    // 0x41bd74: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_41bd78:
    if (ctx->pc == 0x41BD78u) {
        ctx->pc = 0x41BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD74u;
        // 0x41bd78: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BD7Cu;
        goto label_41bd7c;
    }
    ctx->pc = 0x41BD74u;
    {
        const bool branch_taken_0x41bd74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD74u;
        // 0x41bd78: 0xae420014  sw          $v0, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bd74) {
            ctx->pc = 0x41BDA8u;
            goto label_41bda8;
        }
    }
    ctx->pc = 0x41BD7Cu;
label_41bd7c:
    // 0x41bd7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x41bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41bd80:
    // 0x41bd80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x41bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_41bd84:
    // 0x41bd84: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x41bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_41bd88:
    // 0x41bd88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41bd88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41bd8c:
    // 0x41bd8c: 0xc1035f6  jal         func_40D7D8
label_41bd90:
    if (ctx->pc == 0x41BD90u) {
        ctx->pc = 0x41BD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD8Cu;
        // 0x41bd90: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BD94u;
        goto label_41bd94;
    }
    ctx->pc = 0x41BD8Cu;
    SET_GPR_U32(ctx, 31, 0x41BD94u);
    ctx->pc = 0x41BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BD8Cu;
    // 0x41bd90: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x41BD8Cu, 0x41BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BD94u;
label_41bd94:
    // 0x41bd94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x41bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_41bd98:
    // 0x41bd98: 0xc103628  jal         func_40D8A0
label_41bd9c:
    if (ctx->pc == 0x41BD9Cu) {
        ctx->pc = 0x41BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BD98u;
        // 0x41bd9c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BDA0u;
        goto label_41bda0;
    }
    ctx->pc = 0x41BD98u;
    SET_GPR_U32(ctx, 31, 0x41BDA0u);
    ctx->pc = 0x41BD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BD98u;
    // 0x41bd9c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x41BD98u, 0x41BDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BDA0u;
label_41bda0:
    // 0x41bda0: 0x10000008  b           . + 4 + (0x8 << 2)
label_41bda4:
    if (ctx->pc == 0x41BDA4u) {
        ctx->pc = 0x41BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDA0u;
        // 0x41bda4: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BDA8u;
        goto label_41bda8;
    }
    ctx->pc = 0x41BDA0u;
    {
        const bool branch_taken_0x41bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDA0u;
        // 0x41bda4: 0x8e500010  lw          $s0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bda0) {
            ctx->pc = 0x41BDC4u;
            goto label_41bdc4;
        }
    }
    ctx->pc = 0x41BDA8u;
label_41bda8:
    // 0x41bda8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x41bda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41bdac:
    // 0x41bdac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41bdacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41bdb0:
    // 0x41bdb0: 0x13100a  movz        $v0, $zero, $s3
    ctx->pc = 0x41bdb0u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_41bdb4:
    // 0x41bdb4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x41bdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_41bdb8:
    // 0x41bdb8: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x41bdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_41bdbc:
    // 0x41bdbc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x41bdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_41bdc0:
    // 0x41bdc0: 0x8e500010  lw          $s0, 0x10($s2)
    ctx->pc = 0x41bdc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_41bdc4:
    // 0x41bdc4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x41bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_41bdc8:
    // 0x41bdc8: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_41bdcc:
    if (ctx->pc == 0x41BDCCu) {
        ctx->pc = 0x41BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDC8u;
        // 0x41bdcc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BDD0u;
        goto label_41bdd0;
    }
    ctx->pc = 0x41BDC8u;
    {
        const bool branch_taken_0x41bdc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x41BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDC8u;
        // 0x41bdcc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bdc8) {
            ctx->pc = 0x41BDF0u;
            goto label_41bdf0;
        }
    }
    ctx->pc = 0x41BDD0u;
label_41bdd0:
    // 0x41bdd0: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x41bdd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_41bdd4:
    // 0x41bdd4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41bdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41bdd8:
    // 0x41bdd8: 0xd00018  mult        $zero, $a2, $s0
    ctx->pc = 0x41bdd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_41bddc:
    // 0x41bddc: 0x3012  mflo        $a2
    ctx->pc = 0x41bddcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_41bde0:
    // 0x41bde0: 0xc10480a  jal         func_412028
label_41bde4:
    if (ctx->pc == 0x41BDE4u) {
        ctx->pc = 0x41BDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDE0u;
        // 0x41bde4: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BDE8u;
        goto label_41bde8;
    }
    ctx->pc = 0x41BDE0u;
    SET_GPR_U32(ctx, 31, 0x41BDE8u);
    ctx->pc = 0x41BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BDE0u;
    // 0x41bde4: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41BDE0u, 0x41BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BDE8u;
label_41bde8:
    // 0x41bde8: 0x1000001d  b           . + 4 + (0x1D << 2)
label_41bdec:
    if (ctx->pc == 0x41BDECu) {
        ctx->pc = 0x41BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDE8u;
        // 0x41bdec: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BDF0u;
        goto label_41bdf0;
    }
    ctx->pc = 0x41BDE8u;
    {
        const bool branch_taken_0x41bde8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDE8u;
        // 0x41bdec: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bde8) {
            ctx->pc = 0x41BE60u;
            goto label_41be60;
        }
    }
    ctx->pc = 0x41BDF0u;
label_41bdf0:
    // 0x41bdf0: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_41bdf4:
    if (ctx->pc == 0x41BDF4u) {
        ctx->pc = 0x41BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDF0u;
        // 0x41bdf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BDF8u;
        goto label_41bdf8;
    }
    ctx->pc = 0x41BDF0u;
    {
        const bool branch_taken_0x41bdf0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BDF0u;
        // 0x41bdf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41bdf0) {
            ctx->pc = 0x41BE5Cu;
            goto label_41be5c;
        }
    }
    ctx->pc = 0x41BDF8u;
label_41bdf8:
    // 0x41bdf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x41bdf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41bdfc:
    // 0x41bdfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41bdfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41be00:
    // 0x41be00: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x41be00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_41be04:
    // 0x41be04: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x41be04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_41be08:
    // 0x41be08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41be0c:
    if (ctx->pc == 0x41BE0Cu) {
        ctx->pc = 0x41BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE08u;
        // 0x41be0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE10u;
        goto label_41be10;
    }
    ctx->pc = 0x41BE08u;
    {
        const bool branch_taken_0x41be08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE08u;
        // 0x41be0c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be08) {
            ctx->pc = 0x41BE24u;
            goto label_41be24;
        }
    }
    ctx->pc = 0x41BE10u;
label_41be10:
    // 0x41be10: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x41be10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_41be14:
    // 0x41be14: 0xc10480a  jal         func_412028
label_41be18:
    if (ctx->pc == 0x41BE18u) {
        ctx->pc = 0x41BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE14u;
        // 0x41be18: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE1Cu;
        goto label_41be1c;
    }
    ctx->pc = 0x41BE14u;
    SET_GPR_U32(ctx, 31, 0x41BE1Cu);
    ctx->pc = 0x41BE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE14u;
    // 0x41be18: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41BE14u, 0x41BE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE1Cu;
label_41be1c:
    // 0x41be1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_41be20:
    if (ctx->pc == 0x41BE20u) {
        ctx->pc = 0x41BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE1Cu;
        // 0x41be20: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE24u;
        goto label_41be24;
    }
    ctx->pc = 0x41BE1Cu;
    {
        const bool branch_taken_0x41be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE1Cu;
        // 0x41be20: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be1c) {
            ctx->pc = 0x41BE48u;
            goto label_41be48;
        }
    }
    ctx->pc = 0x41BE24u;
label_41be24:
    // 0x41be24: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x41be24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_41be28:
    // 0x41be28: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x41be28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41be2c:
    // 0x41be2c: 0xc10480a  jal         func_412028
label_41be30:
    if (ctx->pc == 0x41BE30u) {
        ctx->pc = 0x41BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE2Cu;
        // 0x41be30: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE34u;
        goto label_41be34;
    }
    ctx->pc = 0x41BE2Cu;
    SET_GPR_U32(ctx, 31, 0x41BE34u);
    ctx->pc = 0x41BE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE2Cu;
    // 0x41be30: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41BE2Cu, 0x41BE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE34u;
label_41be34:
    // 0x41be34: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x41be34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_41be38:
    // 0x41be38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x41be38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41be3c:
    // 0x41be3c: 0xc1048ec  jal         func_4123B0
label_41be40:
    if (ctx->pc == 0x41BE40u) {
        ctx->pc = 0x41BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE3Cu;
        // 0x41be40: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE44u;
        goto label_41be44;
    }
    ctx->pc = 0x41BE3Cu;
    SET_GPR_U32(ctx, 31, 0x41BE44u);
    ctx->pc = 0x41BE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE3Cu;
    // 0x41be40: 0xb02823  subu        $a1, $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x41BE3Cu, 0x41BE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE44u;
label_41be44:
    // 0x41be44: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x41be44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_41be48:
    // 0x41be48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41be48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_41be4c:
    // 0x41be4c: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x41be4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_41be50:
    // 0x41be50: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x41be50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41be54:
    // 0x41be54: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_41be58:
    if (ctx->pc == 0x41BE58u) {
        ctx->pc = 0x41BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE54u;
        // 0x41be58: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE5Cu;
        goto label_41be5c;
    }
    ctx->pc = 0x41BE54u;
    {
        const bool branch_taken_0x41be54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE54u;
        // 0x41be58: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be54) {
            ctx->pc = 0x41BE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41be00;
        }
    }
    ctx->pc = 0x41BE5Cu;
label_41be5c:
    // 0x41be5c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x41be5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_41be60:
    // 0x41be60: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x41be60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_41be64:
    // 0x41be64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_41be68:
    if (ctx->pc == 0x41BE68u) {
        ctx->pc = 0x41BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE64u;
        // 0x41be68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE6Cu;
        goto label_41be6c;
    }
    ctx->pc = 0x41BE64u;
    {
        const bool branch_taken_0x41be64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE64u;
        // 0x41be68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41be64) {
            ctx->pc = 0x41BE7Cu;
            goto label_41be7c;
        }
    }
    ctx->pc = 0x41BE6Cu;
label_41be6c:
    // 0x41be6c: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x41be6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_41be70:
    // 0x41be70: 0x663004  sllv        $a2, $a2, $v1
    ctx->pc = 0x41be70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_41be74:
    // 0x41be74: 0xc10480a  jal         func_412028
label_41be78:
    if (ctx->pc == 0x41BE78u) {
        ctx->pc = 0x41BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BE74u;
        // 0x41be78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BE7Cu;
        goto label_41be7c;
    }
    ctx->pc = 0x41BE74u;
    SET_GPR_U32(ctx, 31, 0x41BE7Cu);
    ctx->pc = 0x41BE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41BE74u;
    // 0x41be78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x41BE74u, 0x41BE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41BE7Cu;
label_41be7c:
    // 0x41be7c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x41be7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41be80:
    // 0x41be80: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x41be80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41be84:
    // 0x41be84: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x41be84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41be88:
    // 0x41be88: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x41be88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41be8c:
    // 0x41be8c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x41be8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41be90:
    // 0x41be90: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x41be90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41be94:
    // 0x41be94: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x41be94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41be98:
    // 0x41be98: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x41be98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41be9c:
    // 0x41be9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x41be9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_41bea0:
    // 0x41bea0: 0x3e00008  jr          $ra
label_41bea4:
    if (ctx->pc == 0x41BEA4u) {
        ctx->pc = 0x41BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEA0u;
        // 0x41bea4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41BEA8u;
        goto label_fallthrough_0x41bea0;
    }
    ctx->pc = 0x41BEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41BEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41BEA0u;
        // 0x41bea4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41BEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41bea0:
    ctx->pc = 0x41BEA8u;
}
