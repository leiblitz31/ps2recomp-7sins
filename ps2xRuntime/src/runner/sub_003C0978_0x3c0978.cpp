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

// Function: sub_003C0978
// Address: 0x3c0978 - 0x3c0a98
void sub_003C0978_0x3c0978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0978_0x3c0978");
#endif

    switch (ctx->pc) {
        case 0x3c09d0u: goto label_3c09d0;
        case 0x3c09e0u: goto label_3c09e0;
        case 0x3c09f4u: goto label_3c09f4;
        case 0x3c0a08u: goto label_3c0a08;
        case 0x3c0a60u: goto label_3c0a60;
        default: break;
    }

    ctx->pc = 0x3c0978u;

    // 0x3c0978: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3c0978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3c097c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3c097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3c0980: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3c0980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3c0984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0988: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3c0988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3c098c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3c098cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0990: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3c0990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3c0994: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3c0994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0998: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3c0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3c099c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3c099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3c09a0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3c09a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3c09a4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3c09a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3c09a8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3c09a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3c09ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c09acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c09b0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x3c09b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3c09b4: 0x8ef60010  lw          $s6, 0x10($s7)
    ctx->pc = 0x3c09b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3c09b8: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3C09B8u;
    {
        const bool branch_taken_0x3c09b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C09BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09B8u;
        // 0x3c09bc: 0x8efe0014  lw          $fp, 0x14($s7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09b8) {
            ctx->pc = 0x3C0A50u;
            goto label_3c0a50;
        }
    }
    ctx->pc = 0x3C09C0u;
    // 0x3c09c0: 0x24140018  addiu       $s4, $zero, 0x18
    ctx->pc = 0x3c09c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x3c09c4: 0x26d30008  addiu       $s3, $s6, 0x8
    ctx->pc = 0x3c09c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x3c09c8: 0x26d20004  addiu       $s2, $s6, 0x4
    ctx->pc = 0x3c09c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x3c09cc: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3c09ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c09d0:
    // 0x3c09d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c09d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c09d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c09d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c09d8: 0xc103454  jal         func_40D150
    ctx->pc = 0x3C09D8u;
    SET_GPR_U32(ctx, 31, 0x3C09E0u);
    ctx->pc = 0x3C09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09D8u;
    // 0x3c09dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3C09D8u, 0x3C09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09E0u;
label_3c09e0:
    // 0x3c09e0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C09E0u;
    {
        const bool branch_taken_0x3c09e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C09E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09E0u;
        // 0x3c09e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09e0) {
            ctx->pc = 0x3C0A10u;
            goto label_3c0a10;
        }
    }
    ctx->pc = 0x3C09E8u;
    // 0x3c09e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c09e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c09ec: 0xc10347c  jal         func_40D1F0
    ctx->pc = 0x3C09ECu;
    SET_GPR_U32(ctx, 31, 0x3C09F4u);
    ctx->pc = 0x3C09F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C09ECu;
    // 0x3c09f0: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1F0u, 0x3C09ECu, 0x3C09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C09F4u;
label_3c09f4:
    // 0x3c09f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C09F4u;
    {
        const bool branch_taken_0x3c09f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C09F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C09F4u;
        // 0x3c09f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c09f4) {
            ctx->pc = 0x3C0A10u;
            goto label_3c0a10;
        }
    }
    ctx->pc = 0x3C09FCu;
    // 0x3c09fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c09fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0a00: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x3C0A00u;
    SET_GPR_U32(ctx, 31, 0x3C0A08u);
    ctx->pc = 0x3C0A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A00u;
    // 0x3c0a04: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x3C0A00u, 0x3C0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A08u;
label_3c0a08:
    // 0x3c0a08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0A08u;
    {
        const bool branch_taken_0x3c0a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A08u;
        // 0x3c0a0c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a08) {
            ctx->pc = 0x3C0A18u;
            goto label_3c0a18;
        }
    }
    ctx->pc = 0x3C0A10u;
label_3c0a10:
    // 0x3c0a10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3C0A10u;
    {
        const bool branch_taken_0x3c0a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A10u;
        // 0x3c0a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a10) {
            ctx->pc = 0x3C0A68u;
            goto label_3c0a68;
        }
    }
    ctx->pc = 0x3C0A18u;
label_3c0a18:
    // 0x3c0a18: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C0A18u;
    {
        const bool branch_taken_0x3c0a18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0a18) {
            ctx->pc = 0x3C0A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0A18u;
            // 0x3c0a1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0A20u;
            goto label_3c0a20;
        }
    }
    ctx->pc = 0x3C0A20u;
label_3c0a20:
    // 0x3c0a20: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x3c0a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x3c0a24: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3c0a24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3c0a28: 0x54001b  divu        $zero, $v0, $s4
    ctx->pc = 0x3c0a28u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x3c0a2c: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3c0a2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3c0a30: 0x2a3182a  slt         $v1, $s5, $v1
    ctx->pc = 0x3c0a30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c0a34: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x3c0a34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3c0a38: 0x1012  mflo        $v0
    ctx->pc = 0x3c0a38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3c0a3c: 0x542018  mult        $a0, $v0, $s4
    ctx->pc = 0x3c0a3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3c0a40: 0x961021  addu        $v0, $a0, $s6
    ctx->pc = 0x3c0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
    // 0x3c0a44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3c0a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3c0a48: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3C0A48u;
    {
        const bool branch_taken_0x3c0a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A48u;
        // 0x3c0a4c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0a48) {
            ctx->pc = 0x3C09D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c09d0;
        }
    }
    ctx->pc = 0x3C0A50u;
label_3c0a50:
    // 0x3c0a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0a54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3c0a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0a58: 0xc103454  jal         func_40D150
    ctx->pc = 0x3C0A58u;
    SET_GPR_U32(ctx, 31, 0x3C0A60u);
    ctx->pc = 0x3C0A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0A58u;
    // 0x3c0a5c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x3C0A58u, 0x3C0A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0A60u;
label_3c0a60:
    // 0x3c0a60: 0x2b80a  movz        $s7, $zero, $v0
    ctx->pc = 0x3c0a60u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x3c0a64: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3c0a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3c0a68:
    // 0x3c0a68: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3c0a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3c0a6c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3c0a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c0a70: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3c0a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c0a74: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3c0a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c0a78: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3c0a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c0a7c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3c0a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c0a80: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3c0a80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c0a84: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3c0a84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c0a88: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3c0a88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c0a8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0a90: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0A90u;
        // 0x3c0a94: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0A98u;
}
