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

// Function: sub_003F9CC8
// Address: 0x3f9cc8 - 0x3f9df0
void sub_003F9CC8_0x3f9cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9CC8_0x3f9cc8");
#endif

    switch (ctx->pc) {
        case 0x3f9d08u: goto label_3f9d08;
        case 0x3f9d20u: goto label_3f9d20;
        case 0x3f9d30u: goto label_3f9d30;
        case 0x3f9d54u: goto label_3f9d54;
        case 0x3f9d64u: goto label_3f9d64;
        case 0x3f9d6cu: goto label_3f9d6c;
        case 0x3f9db4u: goto label_3f9db4;
        case 0x3f9dc8u: goto label_3f9dc8;
        default: break;
    }

    ctx->pc = 0x3f9cc8u;

    // 0x3f9cc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3f9cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3f9ccc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f9cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3f9cd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3f9cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3f9cd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f9cd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9cd8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3f9cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3f9cdc: 0x5983c  dsll32      $s3, $a1, 0
    ctx->pc = 0x3f9cdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f9ce0: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f9ce0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f9ce4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3f9ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3f9ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f9ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f9cec: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3f9cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3f9cf0: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f9cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f9cf4: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f9cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f9cf8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F9CF8u;
    {
        const bool branch_taken_0x3f9cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9cf8) {
            ctx->pc = 0x3F9D3Cu;
            goto label_3f9d3c;
        }
    }
    ctx->pc = 0x3F9D00u;
    // 0x3f9d00: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f9d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f9d04: 0x0  nop
    ctx->pc = 0x3f9d04u;
    // NOP
label_3f9d08:
    // 0x3f9d08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d0c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f9d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f9d10: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f9d10u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f9d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d18: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F9D18u;
    SET_GPR_U32(ctx, 31, 0x3F9D20u);
    ctx->pc = 0x3F9D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D18u;
    // 0x3f9d1c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F9D18u, 0x3F9D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D20u;
label_3f9d20:
    // 0x3f9d20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f9d24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d28: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F9D28u;
    SET_GPR_U32(ctx, 31, 0x3F9D30u);
    ctx->pc = 0x3F9D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D28u;
    // 0x3f9d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F9D28u, 0x3F9D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D30u;
label_3f9d30:
    // 0x3f9d30: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f9d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f9d34: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F9D34u;
    {
        const bool branch_taken_0x3f9d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9d34) {
            ctx->pc = 0x3F9D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9D34u;
            // 0x3f9d38: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9d08;
        }
    }
    ctx->pc = 0x3F9D3Cu;
label_3f9d3c:
    // 0x3f9d3c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F9D3Cu;
    {
        const bool branch_taken_0x3f9d3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D3Cu;
        // 0x3f9d40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d3c) {
            ctx->pc = 0x3F9D64u;
            goto label_3f9d64;
        }
    }
    ctx->pc = 0x3F9D44u;
    // 0x3f9d44: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f9d44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f9d48: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f9d48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d4c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F9D4Cu;
    SET_GPR_U32(ctx, 31, 0x3F9D54u);
    ctx->pc = 0x3F9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D4Cu;
    // 0x3f9d50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F9D4Cu, 0x3F9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D54u;
label_3f9d54:
    // 0x3f9d54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f9d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d58: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f9d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9d5c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F9D5Cu;
    SET_GPR_U32(ctx, 31, 0x3F9D64u);
    ctx->pc = 0x3F9D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D5Cu;
    // 0x3f9d60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F9D5Cu, 0x3F9D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D64u;
label_3f9d64:
    // 0x3f9d64: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F9D64u;
    SET_GPR_U32(ctx, 31, 0x3F9D6Cu);
    ctx->pc = 0x3F9D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9D64u;
    // 0x3f9d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F9D64u, 0x3F9D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9D6Cu;
label_3f9d6c:
    // 0x3f9d6c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3F9D6Cu;
    {
        const bool branch_taken_0x3f9d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D6Cu;
        // 0x3f9d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d6c) {
            ctx->pc = 0x3F9DCCu;
            goto label_3f9dcc;
        }
    }
    ctx->pc = 0x3F9D74u;
    // 0x3f9d74: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f9d74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f9d78: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f9d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f9d7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9D7Cu;
    {
        const bool branch_taken_0x3f9d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D7Cu;
        // 0x3f9d80: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d7c) {
            ctx->pc = 0x3F9D98u;
            goto label_3f9d98;
        }
    }
    ctx->pc = 0x3F9D84u;
    // 0x3f9d84: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f9d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f9d88: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F9D88u;
    {
        const bool branch_taken_0x3f9d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D88u;
        // 0x3f9d8c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d88) {
            ctx->pc = 0x3F9DA4u;
            goto label_3f9da4;
        }
    }
    ctx->pc = 0x3F9D90u;
    // 0x3f9d90: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F9D90u;
    {
        const bool branch_taken_0x3f9d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D90u;
        // 0x3f9d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d90) {
            ctx->pc = 0x3F9DC0u;
            goto label_3f9dc0;
        }
    }
    ctx->pc = 0x3F9D98u;
label_3f9d98:
    // 0x3f9d98: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f9d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f9d9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9D9Cu;
    {
        const bool branch_taken_0x3f9d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9D9Cu;
        // 0x3f9da0: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9d9c) {
            ctx->pc = 0x3F9DBCu;
            goto label_3f9dbc;
        }
    }
    ctx->pc = 0x3F9DA4u;
label_3f9da4:
    // 0x3f9da4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f9da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f9da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9dac: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F9DACu;
    SET_GPR_U32(ctx, 31, 0x3F9DB4u);
    ctx->pc = 0x3F9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9DACu;
    // 0x3f9db0: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F9DACu, 0x3F9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9DB4u;
label_3f9db4:
    // 0x3f9db4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F9DB4u;
    {
        const bool branch_taken_0x3f9db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9DB4u;
        // 0x3f9db8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9db4) {
            ctx->pc = 0x3F9DCCu;
            goto label_3f9dcc;
        }
    }
    ctx->pc = 0x3F9DBCu;
label_3f9dbc:
    // 0x3f9dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f9dc0:
    // 0x3f9dc0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F9DC0u;
    SET_GPR_U32(ctx, 31, 0x3F9DC8u);
    ctx->pc = 0x3F9DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9DC0u;
    // 0x3f9dc4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F9DC0u, 0x3F9DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9DC8u;
label_3f9dc8:
    // 0x3f9dc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f9dcc:
    // 0x3f9dcc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3f9dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f9dd0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3f9dd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f9dd4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f9dd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f9dd8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3f9dd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9ddc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3f9ddcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f9de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f9de4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9DE4u;
        // 0x3f9de8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9DECu;
    // 0x3f9dec: 0x0  nop
    ctx->pc = 0x3f9decu;
    // NOP
    ctx->pc = 0x3f9df0u;
}
