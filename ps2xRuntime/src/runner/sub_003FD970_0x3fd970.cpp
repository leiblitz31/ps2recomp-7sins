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

// Function: sub_003FD970
// Address: 0x3fd970 - 0x3fdb70
void sub_003FD970_0x3fd970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD970_0x3fd970");
#endif

    switch (ctx->pc) {
        case 0x3fd9b8u: goto label_3fd9b8;
        case 0x3fd9e0u: goto label_3fd9e0;
        case 0x3fd9fcu: goto label_3fd9fc;
        case 0x3fda1cu: goto label_3fda1c;
        case 0x3fda48u: goto label_3fda48;
        case 0x3fdaa0u: goto label_3fdaa0;
        case 0x3fdaacu: goto label_3fdaac;
        case 0x3fdb08u: goto label_3fdb08;
        case 0x3fdb40u: goto label_3fdb40;
        default: break;
    }

    ctx->pc = 0x3fd970u;

    // 0x3fd970: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3fd970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3fd974: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3fd974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3fd978: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3fd978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3fd97c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3fd97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3fd980: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3fd980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd984: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3fd984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3fd988: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fd988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3fd98c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3fd98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3fd990: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3fd990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x3fd994: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3fd994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x3fd998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3fd998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3fd99c: 0xde6200f8  ld          $v0, 0xF8($s3)
    ctx->pc = 0x3fd99cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 248)));
    // 0x3fd9a0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3fd9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3fd9a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD9A4u;
    {
        const bool branch_taken_0x3fd9a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9A4u;
        // 0x3fd9a8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd9a4) {
            ctx->pc = 0x3FD9B8u;
            goto label_3fd9b8;
        }
    }
    ctx->pc = 0x3FD9ACu;
    // 0x3fd9ac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3fd9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3fd9b0: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3FD9B0u;
    SET_GPR_U32(ctx, 31, 0x3FD9B8u);
    ctx->pc = 0x3FD9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9B0u;
    // 0x3fd9b4: 0x24a5fa58  addiu       $a1, $a1, -0x5A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3FD9B0u, 0x3FD9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD9B8u;
label_3fd9b8:
    // 0x3fd9b8: 0x5240005c  beql        $s2, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x3FD9B8u;
    {
        const bool branch_taken_0x3fd9b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd9b8) {
            ctx->pc = 0x3FD9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD9B8u;
            // 0x3fd9bc: 0xde6200f8  ld          $v0, 0xF8($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDB2Cu;
            goto label_3fdb2c;
        }
    }
    ctx->pc = 0x3FD9C0u;
    // 0x3fd9c0: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3fd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x3fd9c4: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3FD9C4u;
    {
        const bool branch_taken_0x3fd9c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3FD9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9C4u;
        // 0x3fd9c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd9c4) {
            ctx->pc = 0x3FDA68u;
            goto label_3fda68;
        }
    }
    ctx->pc = 0x3FD9CCu;
    // 0x3fd9cc: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x3fd9ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x3fd9d0: 0x2414fffd  addiu       $s4, $zero, -0x3
    ctx->pc = 0x3fd9d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3fd9d4: 0x2416fffe  addiu       $s6, $zero, -0x2
    ctx->pc = 0x3fd9d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3fd9d8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x3fd9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3fd9dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3fd9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fd9e0:
    // 0x3fd9e0: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x3fd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x3fd9e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3fd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3fd9e8: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x3fd9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3fd9ec: 0x19000005  blez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FD9ECu;
    {
        const bool branch_taken_0x3fd9ec = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x3FD9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9ECu;
        // 0x3fd9f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd9ec) {
            ctx->pc = 0x3FDA04u;
            goto label_3fda04;
        }
    }
    ctx->pc = 0x3FD9F4u;
    // 0x3fd9f4: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3FD9F4u;
    SET_GPR_U32(ctx, 31, 0x3FD9FCu);
    ctx->pc = 0x3FD9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD9F4u;
    // 0x3fd9f8: 0x26e5fa30  addiu       $a1, $s7, -0x5D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3FD9F4u, 0x3FD9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD9FCu;
label_3fd9fc:
    // 0x3fd9fc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3FD9FCu;
    {
        const bool branch_taken_0x3fd9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD9FCu;
        // 0x3fda00: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd9fc) {
            ctx->pc = 0x3FDA4Cu;
            goto label_3fda4c;
        }
    }
    ctx->pc = 0x3FDA04u;
label_3fda04:
    // 0x3fda04: 0x5000009  bltz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3FDA04u;
    {
        const bool branch_taken_0x3fda04 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x3fda04) {
            ctx->pc = 0x3FDA2Cu;
            goto label_3fda2c;
        }
    }
    ctx->pc = 0x3FDA0Cu;
    // 0x3fda0c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x3fda0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fda10: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3fda10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fda14: 0xc100a96  jal         func_402A58
    ctx->pc = 0x3FDA14u;
    SET_GPR_U32(ctx, 31, 0x3FDA1Cu);
    ctx->pc = 0x3FDA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA14u;
    // 0x3fda18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402A58u, 0x3FDA14u, 0x3FDA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA1Cu;
label_3fda1c:
    // 0x3fda1c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x3fda1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x3fda20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3fda20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3fda24: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3FDA24u;
    {
        const bool branch_taken_0x3fda24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA24u;
        // 0x3fda28: 0xac560000  sw          $s6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda24) {
            ctx->pc = 0x3FDA54u;
            goto label_3fda54;
        }
    }
    ctx->pc = 0x3FDA2Cu;
label_3fda2c:
    // 0x3fda2c: 0x5515000a  bnel        $t0, $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x3FDA2Cu;
    {
        const bool branch_taken_0x3fda2c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 21));
        if (branch_taken_0x3fda2c) {
            ctx->pc = 0x3FDA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDA2Cu;
            // 0x3fda30: 0x8e420040  lw          $v0, 0x40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDA58u;
            goto label_3fda58;
        }
    }
    ctx->pc = 0x3FDA34u;
    // 0x3fda34: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x3fda34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3fda38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fda38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fda3c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3fda3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3fda40: 0xc100a20  jal         func_402880
    ctx->pc = 0x3FDA40u;
    SET_GPR_U32(ctx, 31, 0x3FDA48u);
    ctx->pc = 0x3FDA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDA40u;
    // 0x3fda44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x402880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x402880u, 0x3FDA40u, 0x3FDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDA48u;
label_3fda48:
    // 0x3fda48: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x3fda48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3fda4c:
    // 0x3fda4c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3fda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3fda50: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3fda50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_3fda54:
    // 0x3fda54: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3fda54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3fda58:
    // 0x3fda58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3fda58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3fda5c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3fda5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3fda60: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3FDA60u;
    {
        const bool branch_taken_0x3fda60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA60u;
        // 0x3fda64: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda60) {
            ctx->pc = 0x3FD9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd9e0;
        }
    }
    ctx->pc = 0x3FDA68u;
label_3fda68:
    // 0x3fda68: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x3fda68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x3fda6c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3FDA6Cu;
    {
        const bool branch_taken_0x3fda6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA6Cu;
        // 0x3fda70: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda6c) {
            ctx->pc = 0x3FDB28u;
            goto label_3fdb28;
        }
    }
    ctx->pc = 0x3FDA74u;
    // 0x3fda74: 0x8e5100f8  lw          $s1, 0xF8($s2)
    ctx->pc = 0x3fda74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3fda78: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3fda78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fda7c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3fda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3fda80: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3fda80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fda84: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3FDA84u;
    {
        const bool branch_taken_0x3fda84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDA84u;
        // 0x3fda88: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fda84) {
            ctx->pc = 0x3FDB28u;
            goto label_3fdb28;
        }
    }
    ctx->pc = 0x3FDA8Cu;
    // 0x3fda8c: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3fda8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fda90: 0x3c150001  lui         $s5, 0x1
    ctx->pc = 0x3fda90u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)1 << 16));
    // 0x3fda94: 0x24140014  addiu       $s4, $zero, 0x14
    ctx->pc = 0x3fda94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3fda98: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3fda98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3fda9c: 0x0  nop
    ctx->pc = 0x3fda9cu;
    // NOP
label_3fdaa0:
    // 0x3fdaa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fdaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdaa4: 0xc0f8606  jal         func_3E1818
    ctx->pc = 0x3FDAA4u;
    SET_GPR_U32(ctx, 31, 0x3FDAACu);
    ctx->pc = 0x3FDAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDAA4u;
    // 0x3fdaa8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3FDAA4u, 0x3FDAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDAACu;
label_3fdaac:
    // 0x3fdaac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3fdaacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdab0: 0x50770016  beql        $v1, $s7, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FDAB0u;
    {
        const bool branch_taken_0x3fdab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x3fdab0) {
            ctx->pc = 0x3FDAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDAB0u;
            // 0x3fdab4: 0x8e4300fc  lw          $v1, 0xFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDB0Cu;
            goto label_3fdb0c;
        }
    }
    ctx->pc = 0x3FDAB8u;
    // 0x3fdab8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3fdab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3fdabc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FDABCu;
    {
        const bool branch_taken_0x3fdabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FDAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDABCu;
        // 0x3fdac0: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdabc) {
            ctx->pc = 0x3FDB08u;
            goto label_3fdb08;
        }
    }
    ctx->pc = 0x3FDAC4u;
    // 0x3fdac4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FDAC4u;
    {
        const bool branch_taken_0x3fdac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdac4) {
            ctx->pc = 0x3FDAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDAC4u;
            // 0x3fdac8: 0x8e4300fc  lw          $v1, 0xFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDB0Cu;
            goto label_3fdb0c;
        }
    }
    ctx->pc = 0x3FDACCu;
    // 0x3fdacc: 0x9202fff7  lbu         $v0, -0x9($s0)
    ctx->pc = 0x3fdaccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967287)));
    // 0x3fdad0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3fdad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3fdad4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FDAD4u;
    {
        const bool branch_taken_0x3fdad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fdad4) {
            ctx->pc = 0x3FDAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDAD4u;
            // 0x3fdad8: 0x8e06fffc  lw          $a2, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDAF8u;
            goto label_3fdaf8;
        }
    }
    ctx->pc = 0x3FDADCu;
    // 0x3fdadc: 0x50760006  beql        $v1, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FDADCu;
    {
        const bool branch_taken_0x3fdadc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 22));
        if (branch_taken_0x3fdadc) {
            ctx->pc = 0x3FDAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDADCu;
            // 0x3fdae0: 0x8e06fffc  lw          $a2, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDAF8u;
            goto label_3fdaf8;
        }
    }
    ctx->pc = 0x3FDAE4u;
    // 0x3fdae4: 0xde620100  ld          $v0, 0x100($s3)
    ctx->pc = 0x3fdae4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x3fdae8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x3fdae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x3fdaec: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FDAECu;
    {
        const bool branch_taken_0x3fdaec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fdaec) {
            ctx->pc = 0x3FDAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FDAECu;
            // 0x3fdaf0: 0x8e4300fc  lw          $v1, 0xFC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FDB0Cu;
            goto label_3fdb0c;
        }
    }
    ctx->pc = 0x3FDAF4u;
    // 0x3fdaf4: 0x8e06fffc  lw          $a2, -0x4($s0)
    ctx->pc = 0x3fdaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3fdaf8:
    // 0x3fdaf8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fdaf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdafc: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3fdafcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fdb00: 0xc101b80  jal         func_406E00
    ctx->pc = 0x3FDB00u;
    SET_GPR_U32(ctx, 31, 0x3FDB08u);
    ctx->pc = 0x3FDB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDB00u;
    // 0x3fdb04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E00u, 0x3FDB00u, 0x3FDB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDB08u;
label_3fdb08:
    // 0x3fdb08: 0x8e4300fc  lw          $v1, 0xFC($s2)
    ctx->pc = 0x3fdb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
label_3fdb0c:
    // 0x3fdb0c: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x3fdb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3fdb10: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x3fdb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3fdb14: 0x741818  mult        $v1, $v1, $s4
    ctx->pc = 0x3fdb14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3fdb18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fdb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3fdb1c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3fdb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fdb20: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3FDB20u;
    {
        const bool branch_taken_0x3fdb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FDB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB20u;
        // 0x3fdb24: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fdb20) {
            ctx->pc = 0x3FDAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fdaa0;
        }
    }
    ctx->pc = 0x3FDB28u;
label_3fdb28:
    // 0x3fdb28: 0xde6200f8  ld          $v0, 0xF8($s3)
    ctx->pc = 0x3fdb28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 248)));
label_3fdb2c:
    // 0x3fdb2c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3fdb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3fdb30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3fdb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fdb34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fdb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fdb38: 0xc101c4c  jal         func_407130
    ctx->pc = 0x3FDB38u;
    SET_GPR_U32(ctx, 31, 0x3FDB40u);
    ctx->pc = 0x3FDB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FDB38u;
    // 0x3fdb3c: 0xfe6200f8  sd          $v0, 0xF8($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 248), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x407130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407130u, 0x3FDB38u, 0x3FDB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FDB40u;
label_3fdb40:
    // 0x3fdb40: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3fdb40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fdb44: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3fdb44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fdb48: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3fdb48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fdb4c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3fdb4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fdb50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3fdb50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fdb54: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3fdb54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fdb58: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3fdb58u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fdb5c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3fdb5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fdb60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fdb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fdb64: 0x3e00008  jr          $ra
    ctx->pc = 0x3FDB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FDB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FDB64u;
        // 0x3fdb68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FDB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FDB6Cu;
    // 0x3fdb6c: 0x0  nop
    ctx->pc = 0x3fdb6cu;
    // NOP
    ctx->pc = 0x3fdb70u;
}
