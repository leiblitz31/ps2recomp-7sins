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

// Function: sub_0012A960
// Address: 0x12a960 - 0x12ab10
void sub_0012A960_0x12a960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A960_0x12a960");
#endif

    switch (ctx->pc) {
        case 0x12a994u: goto label_12a994;
        case 0x12a9d8u: goto label_12a9d8;
        case 0x12aa20u: goto label_12aa20;
        case 0x12aac0u: goto label_12aac0;
        case 0x12aad0u: goto label_12aad0;
        case 0x12aaf0u: goto label_12aaf0;
        default: break;
    }

    ctx->pc = 0x12a960u;

    // 0x12a960: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x12a960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x12a964: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12a968: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x12a968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x12a96c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12a96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12a970: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x12a970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x12a974: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12a974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12a978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12a978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12a97c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12a980: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12a984: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12a984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a988: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x12a988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x12a98c: 0xc042330  jal         func_108CC0
    ctx->pc = 0x12A98Cu;
    SET_GPR_U32(ctx, 31, 0x12A994u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x12A98Cu, 0x12A994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A994u;
label_12a994:
    // 0x12a994: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x12a994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a998: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A998u;
    {
        const bool branch_taken_0x12a998 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a998) {
            ctx->pc = 0x12A9B0u;
            goto label_12a9b0;
        }
    }
    ctx->pc = 0x12A9A0u;
    // 0x12a9a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a9a4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x12a9a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a9a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A9A8u;
    {
        const bool branch_taken_0x12a9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9a8) {
            ctx->pc = 0x12A9B4u;
            goto label_12a9b4;
        }
    }
    ctx->pc = 0x12A9B0u;
label_12a9b0:
    // 0x12a9b0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x12a9b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a9b4:
    // 0x12a9b4: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x12a9b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x12a9b8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A9B8u;
    {
        const bool branch_taken_0x12a9b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9b8) {
            ctx->pc = 0x12A9CCu;
            goto label_12a9cc;
        }
    }
    ctx->pc = 0x12A9C0u;
    // 0x12a9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9c4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12A9C4u;
    {
        const bool branch_taken_0x12a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9c4) {
            ctx->pc = 0x12AA54u;
            goto label_12aa54;
        }
    }
    ctx->pc = 0x12A9CCu;
label_12a9cc:
    // 0x12a9cc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9d0: 0xc04939c  jal         func_124E70
    ctx->pc = 0x12A9D0u;
    SET_GPR_U32(ctx, 31, 0x12A9D8u);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x12A9D0u, 0x12A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A9D8u;
label_12a9d8:
    // 0x12a9d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12a9d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a9dc: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A9DCu;
    {
        const bool branch_taken_0x12a9dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9dc) {
            ctx->pc = 0x12A9F4u;
            goto label_12a9f4;
        }
    }
    ctx->pc = 0x12A9E4u;
    // 0x12a9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a9e8: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x12a9e8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12a9ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12A9ECu;
    {
        const bool branch_taken_0x12a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a9ec) {
            ctx->pc = 0x12A9F8u;
            goto label_12a9f8;
        }
    }
    ctx->pc = 0x12A9F4u;
label_12a9f4:
    // 0x12a9f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12a9f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a9f8:
    // 0x12a9f8: 0x329000ff  andi        $s0, $s4, 0xFF
    ctx->pc = 0x12a9f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x12a9fc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A9FCu;
    {
        const bool branch_taken_0x12a9fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a9fc) {
            ctx->pc = 0x12AA10u;
            goto label_12aa10;
        }
    }
    ctx->pc = 0x12AA04u;
    // 0x12aa04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa08: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x12AA08u;
    {
        const bool branch_taken_0x12aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa08) {
            ctx->pc = 0x12AA54u;
            goto label_12aa54;
        }
    }
    ctx->pc = 0x12AA10u;
label_12aa10:
    // 0x12aa10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12aa10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12aa14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aa18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12AA18u;
    {
        const bool branch_taken_0x12aa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa18) {
            ctx->pc = 0x12AA44u;
            goto label_12aa44;
        }
    }
    ctx->pc = 0x12AA20u;
label_12aa20:
    // 0x12aa20: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x12aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x12aa24: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x12aa28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12aa2c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x12aa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x12aa30: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12aa30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12aa34: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12AA34u;
    {
        const bool branch_taken_0x12aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa34) {
            ctx->pc = 0x12AA40u;
            goto label_12aa40;
        }
    }
    ctx->pc = 0x12AA3Cu;
    // 0x12aa3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x12aa3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_12aa40:
    // 0x12aa40: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x12aa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_12aa44:
    // 0x12aa44: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x12aa44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x12aa48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x12AA48u;
    {
        const bool branch_taken_0x12aa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12aa48) {
            ctx->pc = 0x12AA20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12aa20;
        }
    }
    ctx->pc = 0x12AA50u;
    // 0x12aa50: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12aa50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12aa54:
    // 0x12aa54: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12aa54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12aa58: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x12aa58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12aa5c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12aa5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12aa60: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12aa60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12aa64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12aa64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12aa68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12aa68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12aa6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12aa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aa70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12aa70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aa74: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x12aa74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x12aa78: 0x3e00008  jr          $ra
    ctx->pc = 0x12AA78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AA78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AA80u;
    // 0x12aa80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12aa84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12aa88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12aa88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12aa8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x12aa8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x12aa90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aa94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12AA94u;
    {
        const bool branch_taken_0x12aa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aa94) {
            ctx->pc = 0x12AAF0u;
            goto label_12aaf0;
        }
    }
    ctx->pc = 0x12AA9Cu;
    // 0x12aa9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x12aaa0: 0x24633680  addiu       $v1, $v1, 0x3680
    ctx->pc = 0x12aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13952));
    // 0x12aaa4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aaa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12aaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12aaac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aab0: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x12aab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x12aab4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12aab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12aab8: 0xc048c9c  jal         func_123270
    ctx->pc = 0x12AAB8u;
    SET_GPR_U32(ctx, 31, 0x12AAC0u);
    ctx->pc = 0x123270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123270u, 0x12AAB8u, 0x12AAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAC0u;
label_12aac0:
    // 0x12aac0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12aac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12aac8: 0xc047088  jal         func_11C220
    ctx->pc = 0x12AAC8u;
    SET_GPR_U32(ctx, 31, 0x12AAD0u);
    ctx->pc = 0x11C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C220u, 0x12AAC8u, 0x12AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAD0u;
label_12aad0:
    // 0x12aad0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12aad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12aad4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12aad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12aad8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12aad8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12aadc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12AADCu;
    {
        const bool branch_taken_0x12aadc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x12aadc) {
            ctx->pc = 0x12AAF0u;
            goto label_12aaf0;
        }
    }
    ctx->pc = 0x12AAE4u;
    // 0x12aae4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12aae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aae8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x12AAE8u;
    SET_GPR_U32(ctx, 31, 0x12AAF0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x12AAE8u, 0x12AAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAF0u;
label_12aaf0:
    // 0x12aaf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12aaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12aaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12aaf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12aaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12aafc: 0x3e00008  jr          $ra
    ctx->pc = 0x12AAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AB04u;
    // 0x12ab04: 0x0  nop
    ctx->pc = 0x12ab04u;
    // NOP
    // 0x12ab08: 0x0  nop
    ctx->pc = 0x12ab08u;
    // NOP
    // 0x12ab0c: 0x0  nop
    ctx->pc = 0x12ab0cu;
    // NOP
    ctx->pc = 0x12ab10u;
}
