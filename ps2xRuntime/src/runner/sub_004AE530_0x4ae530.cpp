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

// Function: sub_004AE530
// Address: 0x4ae530 - 0x4ae610
void sub_004AE530_0x4ae530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE530_0x4ae530");
#endif

    switch (ctx->pc) {
        case 0x4ae570u: goto label_4ae570;
        case 0x4ae5c4u: goto label_4ae5c4;
        case 0x4ae5e4u: goto label_4ae5e4;
        default: break;
    }

    ctx->pc = 0x4ae530u;

    // 0x4ae530: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4ae530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4ae534: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4ae534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4ae538: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4ae538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4ae53c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae53cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae540: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4ae540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4ae544: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4ae544u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae548: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4ae548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4ae54c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4ae54cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae550: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4ae550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4ae554: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4ae554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4ae558: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AE558u;
    {
        const bool branch_taken_0x4ae558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE558u;
        // 0x4ae55c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae558) {
            ctx->pc = 0x4AE580u;
            goto label_4ae580;
        }
    }
    ctx->pc = 0x4AE560u;
    // 0x4ae560: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4ae560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x4ae564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ae564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae568: 0xc127ccc  jal         func_49F330
    ctx->pc = 0x4AE568u;
    SET_GPR_U32(ctx, 31, 0x4AE570u);
    ctx->pc = 0x4AE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE568u;
    // 0x4ae56c: 0x34a50800  ori         $a1, $a1, 0x800 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2048);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F330u, 0x4AE568u, 0x4AE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE570u;
label_4ae570:
    // 0x4ae570: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4ae570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x4ae574: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4ae574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x4ae578: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE578u;
    {
        const bool branch_taken_0x4ae578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE578u;
        // 0x4ae57c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae578) {
            ctx->pc = 0x4AE58Cu;
            goto label_4ae58c;
        }
    }
    ctx->pc = 0x4AE580u;
label_4ae580:
    // 0x4ae580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ae580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ae584: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x4ae584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x4ae588: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4ae588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_4ae58c:
    // 0x4ae58c: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x4ae58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x4ae590: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4ae590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x4ae594: 0x2463ef70  addiu       $v1, $v1, -0x1090
    ctx->pc = 0x4ae594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963056));
    // 0x4ae598: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x4ae598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x4ae59c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4ae59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ae5a0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x4ae5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x4ae5a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4ae5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4ae5a8: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x4ae5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x4ae5ac: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE5ACu;
    {
        const bool branch_taken_0x4ae5ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5ACu;
        // 0x4ae5b0: 0xafb1000c  sw          $s1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5ac) {
            ctx->pc = 0x4AE5BCu;
            goto label_4ae5bc;
        }
    }
    ctx->pc = 0x4AE5B4u;
    // 0x4ae5b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4AE5B4u;
    {
        const bool branch_taken_0x4ae5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5B4u;
        // 0x4ae5b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5b4) {
            ctx->pc = 0x4AE5F0u;
            goto label_4ae5f0;
        }
    }
    ctx->pc = 0x4AE5BCu;
label_4ae5bc:
    // 0x4ae5bc: 0xc0bf658  jal         func_2FD960
    ctx->pc = 0x4AE5BCu;
    SET_GPR_U32(ctx, 31, 0x4AE5C4u);
    ctx->pc = 0x4AE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE5BCu;
    // 0x4ae5c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD960u, 0x4AE5BCu, 0x4AE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE5C4u;
label_4ae5c4:
    // 0x4ae5c4: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x4ae5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x4ae5c8: 0x1c400008  bgtz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AE5C8u;
    {
        const bool branch_taken_0x4ae5c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x4AE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5C8u;
        // 0x4ae5cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5c8) {
            ctx->pc = 0x4AE5ECu;
            goto label_4ae5ec;
        }
    }
    ctx->pc = 0x4AE5D0u;
    // 0x4ae5d0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x4ae5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4ae5d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AE5D4u;
    {
        const bool branch_taken_0x4ae5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5D4u;
        // 0x4ae5d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5d4) {
            ctx->pc = 0x4AE5F0u;
            goto label_4ae5f0;
        }
    }
    ctx->pc = 0x4AE5DCu;
    // 0x4ae5dc: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AE5DCu;
    SET_GPR_U32(ctx, 31, 0x4AE5E4u);
    ctx->pc = 0x4AE5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE5DCu;
    // 0x4ae5e0: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AE5DCu, 0x4AE5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE5E4u;
label_4ae5e4:
    // 0x4ae5e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AE5E4u;
    {
        const bool branch_taken_0x4ae5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE5E4u;
        // 0x4ae5e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae5e4) {
            ctx->pc = 0x4AE5F0u;
            goto label_4ae5f0;
        }
    }
    ctx->pc = 0x4AE5ECu;
label_4ae5ec:
    // 0x4ae5ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ae5ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ae5f0:
    // 0x4ae5f0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4ae5f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4ae5f4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4ae5f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ae5f8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4ae5f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ae5fc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ae5fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ae600: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ae600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae604: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE604u;
        // 0x4ae608: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE60Cu;
    // 0x4ae60c: 0x0  nop
    ctx->pc = 0x4ae60cu;
    // NOP
    ctx->pc = 0x4ae610u;
}
