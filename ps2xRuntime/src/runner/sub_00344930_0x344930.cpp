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

// Function: sub_00344930
// Address: 0x344930 - 0x344a20
void sub_00344930_0x344930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344930_0x344930");
#endif

    switch (ctx->pc) {
        case 0x344958u: goto label_344958;
        case 0x344978u: goto label_344978;
        case 0x344980u: goto label_344980;
        case 0x344984u: goto label_344984;
        default: break;
    }

    ctx->pc = 0x344930u;

    // 0x344930: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x344930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x344934: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344938: 0x8c59c330  lw          $t9, -0x3CD0($v0)
    ctx->pc = 0x344938u;
    SET_GPR_S32(ctx, 25, (int32_t)FAST_READ32(0x61C330u));
    // 0x34493c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x34493cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344940: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x344944: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x344944u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344948: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x344948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34494c: 0x1320002f  beqz        $t9, . + 4 + (0x2F << 2)
    ctx->pc = 0x34494Cu;
    {
        const bool branch_taken_0x34494c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x344950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34494Cu;
        // 0x344950: 0x320482d  daddu       $t1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34494c) {
            ctx->pc = 0x344A0Cu;
            goto label_344a0c;
        }
    }
    ctx->pc = 0x344954u;
    // 0x344954: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x344954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_344958:
    // 0x344958: 0x544f002a  bnel        $v0, $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x344958u;
    {
        const bool branch_taken_0x344958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x344958) {
            ctx->pc = 0x34495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344958u;
            // 0x34495c: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344A04u;
            goto label_344a04;
        }
    }
    ctx->pc = 0x344960u;
    // 0x344960: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x344960u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344964: 0x19e00022  blez        $t7, . + 4 + (0x22 << 2)
    ctx->pc = 0x344964u;
    {
        const bool branch_taken_0x344964 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x344968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344964u;
        // 0x344968: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344964) {
            ctx->pc = 0x3449F0u;
            goto label_3449f0;
        }
    }
    ctx->pc = 0x34496Cu;
    // 0x34496c: 0x1e0702d  daddu       $t6, $t7, $zero
    ctx->pc = 0x34496cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344970: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x344970u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344974: 0x0  nop
    ctx->pc = 0x344974u;
    // NOP
label_344978:
    // 0x344978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x344978u;
    {
        const bool branch_taken_0x344978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344978u;
        // 0x34497c: 0x256d0001  addiu       $t5, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344978) {
            ctx->pc = 0x344984u;
            goto label_344984;
        }
    }
    ctx->pc = 0x344980u;
label_344980:
    // 0x344980: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x344980u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_344984:
    // 0x344984: 0x11800014  beqz        $t4, . + 4 + (0x14 << 2)
    ctx->pc = 0x344984u;
    {
        const bool branch_taken_0x344984 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x344988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344984u;
        // 0x344988: 0x14e102a  slt         $v0, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344984) {
            ctx->pc = 0x3449D8u;
            goto label_3449d8;
        }
    }
    ctx->pc = 0x34498Cu;
    // 0x34498c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34498Cu;
    {
        const bool branch_taken_0x34498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34498Cu;
        // 0x344990: 0xb3880  sll         $a3, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34498c) {
            ctx->pc = 0x3449D8u;
            goto label_3449d8;
        }
    }
    ctx->pc = 0x344994u;
    // 0x344994: 0x8d250018  lw          $a1, 0x18($t1)
    ctx->pc = 0x344994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x344998: 0xa4080  sll         $t0, $t2, 2
    ctx->pc = 0x344998u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x34499c: 0xf81821  addu        $v1, $a3, $t8
    ctx->pc = 0x34499cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x3449a0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x3449a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3449a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3449a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3449a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3449a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3449ac: 0x5482fff5  bnel        $a0, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3449ACu;
    {
        const bool branch_taken_0x3449ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3449ac) {
            ctx->pc = 0x3449B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3449ACu;
            // 0x3449b0: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344984u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344984;
        }
    }
    ctx->pc = 0x3449B4u;
    // 0x3449b4: 0x8d230020  lw          $v1, 0x20($t1)
    ctx->pc = 0x3449b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x3449b8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x3449b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3449bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3449bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3449c0: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x3449c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3449c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3449c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3449c8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3449C8u;
    {
        const bool branch_taken_0x3449c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3449CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449C8u;
        // 0x3449cc: 0x14e102a  slt         $v0, $t2, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449c8) {
            ctx->pc = 0x3449D8u;
            goto label_3449d8;
        }
    }
    ctx->pc = 0x3449D0u;
    // 0x3449d0: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x3449D0u;
    {
        const bool branch_taken_0x3449d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449D0u;
        // 0x3449d4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449d0) {
            ctx->pc = 0x344980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344980;
        }
    }
    ctx->pc = 0x3449D8u;
label_3449d8:
    // 0x3449d8: 0x2600a  movz        $t4, $zero, $v0
    ctx->pc = 0x3449d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 0));
    // 0x3449dc: 0x11800008  beqz        $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x3449DCu;
    {
        const bool branch_taken_0x3449dc = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449DCu;
        // 0x3449e0: 0x1a0582d  daddu       $t3, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449dc) {
            ctx->pc = 0x344A00u;
            goto label_344a00;
        }
    }
    ctx->pc = 0x3449E4u;
    // 0x3449e4: 0x1af102a  slt         $v0, $t5, $t7
    ctx->pc = 0x3449e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x3449e8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3449E8u;
    {
        const bool branch_taken_0x3449e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3449ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449E8u;
        // 0x3449ec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449e8) {
            ctx->pc = 0x344978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344978;
        }
    }
    ctx->pc = 0x3449F0u;
label_3449f0:
    // 0x3449f0: 0x51800004  beql        $t4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3449F0u;
    {
        const bool branch_taken_0x3449f0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x3449f0) {
            ctx->pc = 0x3449F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3449F0u;
            // 0x3449f4: 0x8d290004  lw          $t1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344A04u;
            goto label_344a04;
        }
    }
    ctx->pc = 0x3449F8u;
    // 0x3449f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3449F8u;
    {
        const bool branch_taken_0x3449f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3449F8u;
        // 0x3449fc: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449f8) {
            ctx->pc = 0x344A0Cu;
            goto label_344a0c;
        }
    }
    ctx->pc = 0x344A00u;
label_344a00:
    // 0x344a00: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x344a00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_344a04:
    // 0x344a04: 0x5539ffd4  bnel        $t1, $t9, . + 4 + (-0x2C << 2)
    ctx->pc = 0x344A04u;
    {
        const bool branch_taken_0x344a04 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 25));
        if (branch_taken_0x344a04) {
            ctx->pc = 0x344A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344A04u;
            // 0x344a08: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344958;
        }
    }
    ctx->pc = 0x344A0Cu;
label_344a0c:
    // 0x344a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x344a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344a14: 0x3e00008  jr          $ra
    ctx->pc = 0x344A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344A14u;
        // 0x344a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344A1Cu;
    // 0x344a1c: 0x0  nop
    ctx->pc = 0x344a1cu;
    // NOP
    ctx->pc = 0x344a20u;
}
