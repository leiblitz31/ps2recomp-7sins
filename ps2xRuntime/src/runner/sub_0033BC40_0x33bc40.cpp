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

// Function: sub_0033BC40
// Address: 0x33bc40 - 0x33bda8
void sub_0033BC40_0x33bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BC40_0x33bc40");
#endif

    switch (ctx->pc) {
        case 0x33bc64u: goto label_33bc64;
        case 0x33bc78u: goto label_33bc78;
        case 0x33bc84u: goto label_33bc84;
        case 0x33bcccu: goto label_33bccc;
        case 0x33bce8u: goto label_33bce8;
        case 0x33bcfcu: goto label_33bcfc;
        case 0x33bd18u: goto label_33bd18;
        case 0x33bd2cu: goto label_33bd2c;
        case 0x33bd40u: goto label_33bd40;
        case 0x33bd54u: goto label_33bd54;
        case 0x33bd60u: goto label_33bd60;
        case 0x33bd70u: goto label_33bd70;
        default: break;
    }

    ctx->pc = 0x33bc40u;

    // 0x33bc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33bc44: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x33bc44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x33bc48: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33bc48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33bc4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33bc50: 0x24c6bec8  addiu       $a2, $a2, -0x4138
    ctx->pc = 0x33bc50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950600));
    // 0x33bc54: 0x24e7bf08  addiu       $a3, $a3, -0x40F8
    ctx->pc = 0x33bc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950664));
    // 0x33bc58: 0x24050132  addiu       $a1, $zero, 0x132
    ctx->pc = 0x33bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
    // 0x33bc5c: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x33BC5Cu;
    SET_GPR_U32(ctx, 31, 0x33BC64u);
    ctx->pc = 0x33BC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC5Cu;
    // 0x33bc60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x33BC5Cu, 0x33BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BC64u;
label_33bc64:
    // 0x33bc64: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x33bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x33bc68: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33bc68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33bc6c: 0xac62c210  sw          $v0, -0x3DF0($v1)
    ctx->pc = 0x33bc6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61C210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C210u, _value); } while (0);
    // 0x33bc70: 0xc0d26e8  jal         func_349BA0
    ctx->pc = 0x33BC70u;
    SET_GPR_U32(ctx, 31, 0x33BC78u);
    ctx->pc = 0x33BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC70u;
    // 0x33bc74: 0x2484b418  addiu       $a0, $a0, -0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349BA0u, 0x33BC70u, 0x33BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BC78u;
label_33bc78:
    // 0x33bc78: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x33bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x33bc7c: 0xc0d26f2  jal         func_349BC8
    ctx->pc = 0x33BC7Cu;
    SET_GPR_U32(ctx, 31, 0x33BC84u);
    ctx->pc = 0x33BC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BC7Cu;
    // 0x33bc80: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349BC8u, 0x33BC7Cu, 0x33BC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BC84u;
label_33bc84:
    // 0x33bc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bc88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33bc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x33BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BC8Cu;
        // 0x33bc90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BC94u;
    // 0x33bc94: 0x0  nop
    ctx->pc = 0x33bc94u;
    // NOP
    // 0x33bc98: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x33bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x33bc9c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x33bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x33bca0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x33bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x33bca4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33bca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bca8: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x33bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x33bcac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33bcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcb0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x33bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x33bcb4: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x33bcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x33bcb8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33bcb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcbc: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x33bcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x33bcc0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x33bcc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x33bcc4: 0xc0cef6a  jal         func_33BDA8
    ctx->pc = 0x33BCC4u;
    SET_GPR_U32(ctx, 31, 0x33BCCCu);
    ctx->pc = 0x33BCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCC4u;
    // 0x33bcc8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDA8u, 0x33BCC4u, 0x33BCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCCCu;
label_33bccc:
    // 0x33bccc: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x33bcccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33bcd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x33bcd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33bcd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcdc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33bcdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bce0: 0xc0cebb0  jal         func_33AEC0
    ctx->pc = 0x33BCE0u;
    SET_GPR_U32(ctx, 31, 0x33BCE8u);
    ctx->pc = 0x33BCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCE0u;
    // 0x33bce4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AEC0u, 0x33BCE0u, 0x33BCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCE8u;
label_33bce8:
    // 0x33bce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33bce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33bcecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bcf4: 0xc0d124c  jal         func_344930
    ctx->pc = 0x33BCF4u;
    SET_GPR_U32(ctx, 31, 0x33BCFCu);
    ctx->pc = 0x33BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BCF4u;
    // 0x33bcf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344930u, 0x33BCF4u, 0x33BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BCFCu;
label_33bcfc:
    // 0x33bcfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33bcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd00: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BD00u;
    {
        const bool branch_taken_0x33bd00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD00u;
        // 0x33bd04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd00) {
            ctx->pc = 0x33BD24u;
            goto label_33bd24;
        }
    }
    ctx->pc = 0x33BD08u;
    // 0x33bd08: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33bd08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33bd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd10: 0xc0d0f36  jal         func_343CD8
    ctx->pc = 0x33BD10u;
    SET_GPR_U32(ctx, 31, 0x33BD18u);
    ctx->pc = 0x33BD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD10u;
    // 0x33bd14: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343CD8u, 0x33BD10u, 0x33BD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD18u;
label_33bd18:
    // 0x33bd18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33bd18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd1c: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x33BD1Cu;
    {
        const bool branch_taken_0x33bd1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD1Cu;
        // 0x33bd20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd1c) {
            ctx->pc = 0x33BD84u;
            goto label_33bd84;
        }
    }
    ctx->pc = 0x33BD24u;
label_33bd24:
    // 0x33bd24: 0xc0d04ce  jal         func_341338
    ctx->pc = 0x33BD24u;
    SET_GPR_U32(ctx, 31, 0x33BD2Cu);
    ctx->pc = 0x33BD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD24u;
    // 0x33bd28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341338u, 0x33BD24u, 0x33BD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD2Cu;
label_33bd2c:
    // 0x33bd2c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33bd2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd30: 0x56600011  bnel        $s3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x33BD30u;
    {
        const bool branch_taken_0x33bd30 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x33bd30) {
            ctx->pc = 0x33BD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BD30u;
            // 0x33bd34: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BD78u;
            goto label_33bd78;
        }
    }
    ctx->pc = 0x33BD38u;
    // 0x33bd38: 0xc0d0406  jal         func_341018
    ctx->pc = 0x33BD38u;
    SET_GPR_U32(ctx, 31, 0x33BD40u);
    ctx->pc = 0x341018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341018u, 0x33BD38u, 0x33BD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD40u;
label_33bd40:
    // 0x33bd40: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33bd40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd44: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x33BD44u;
    {
        const bool branch_taken_0x33bd44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD44u;
        // 0x33bd48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd44) {
            ctx->pc = 0x33BD80u;
            goto label_33bd80;
        }
    }
    ctx->pc = 0x33BD4Cu;
    // 0x33bd4c: 0xc0d0480  jal         func_341200
    ctx->pc = 0x33BD4Cu;
    SET_GPR_U32(ctx, 31, 0x33BD54u);
    ctx->pc = 0x33BD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD4Cu;
    // 0x33bd50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341200u, 0x33BD4Cu, 0x33BD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD54u;
label_33bd54:
    // 0x33bd54: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x33bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
    // 0x33bd58: 0xc0ced06  jal         func_33B418
    ctx->pc = 0x33BD58u;
    SET_GPR_U32(ctx, 31, 0x33BD60u);
    ctx->pc = 0x33BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD58u;
    // 0x33bd5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B418u, 0x33BD58u, 0x33BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD60u;
label_33bd60:
    // 0x33bd60: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x33BD60u;
    {
        const bool branch_taken_0x33bd60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD60u;
        // 0x33bd64: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd60) {
            ctx->pc = 0x33BD84u;
            goto label_33bd84;
        }
    }
    ctx->pc = 0x33BD68u;
    // 0x33bd68: 0xc0d1054  jal         func_344150
    ctx->pc = 0x33BD68u;
    SET_GPR_U32(ctx, 31, 0x33BD70u);
    ctx->pc = 0x33BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD68u;
    // 0x33bd6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344150u, 0x33BD68u, 0x33BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD70u;
label_33bd70:
    // 0x33bd70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33BD70u;
    {
        const bool branch_taken_0x33bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD70u;
        // 0x33bd74: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd70) {
            ctx->pc = 0x33BD84u;
            goto label_33bd84;
        }
    }
    ctx->pc = 0x33BD78u;
label_33bd78:
    // 0x33bd78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33bd7c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x33bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_33bd80:
    // 0x33bd80: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x33bd80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33bd84:
    // 0x33bd84: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x33bd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33bd88: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x33bd88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33bd8c: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x33bd8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33bd90: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x33bd90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33bd94: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x33bd94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33bd98: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x33bd98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33bd9c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x33bd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33bda0: 0x3e00008  jr          $ra
    ctx->pc = 0x33BDA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BDA0u;
        // 0x33bda4: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BDA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BDA8u;
}
