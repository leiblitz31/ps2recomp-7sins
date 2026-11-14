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

// Function: sub_0039C6B8
// Address: 0x39c6b8 - 0x39c798
void sub_0039C6B8_0x39c6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039C6B8_0x39c6b8");
#endif

    switch (ctx->pc) {
        case 0x39c6f4u: goto label_39c6f4;
        case 0x39c738u: goto label_39c738;
        case 0x39c770u: goto label_39c770;
        default: break;
    }

    ctx->pc = 0x39c6b8u;

    // 0x39c6b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39c6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39c6bc: 0xaf85bd68  sw          $a1, -0x4298($gp)
    ctx->pc = 0x39c6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950248), GPR_U32(ctx, 5));
    // 0x39c6c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39c6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39c6c4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x39c6c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x39c6c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39c6c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c6cc: 0x8f85a9f0  lw          $a1, -0x5610($gp)
    ctx->pc = 0x39c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945264)));
    // 0x39c6d0: 0x8f87a9f4  lw          $a3, -0x560C($gp)
    ctx->pc = 0x39c6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945268)));
    // 0x39c6d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x39c6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x39c6d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39c6dc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x39c6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39c6e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39c6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39c6e4: 0x2508c5a0  addiu       $t0, $t0, -0x3A60
    ctx->pc = 0x39c6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952352));
    // 0x39c6e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39c6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39c6ec: 0xc10408c  jal         func_410230
    ctx->pc = 0x39C6ECu;
    SET_GPR_U32(ctx, 31, 0x39C6F4u);
    ctx->pc = 0x39C6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C6ECu;
    // 0x39c6f0: 0x35290507  ori         $t1, $t1, 0x507 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x39C6ECu, 0x39C6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C6F4u;
label_39c6f4:
    // 0x39c6f4: 0x8f84bd68  lw          $a0, -0x4298($gp)
    ctx->pc = 0x39c6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39c6f8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x39c6fc: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x39c6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x39c700: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x39c700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x39c704: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39C704u;
    {
        const bool branch_taken_0x39c704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39C708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C704u;
        // 0x39c708: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c704) {
            ctx->pc = 0x39C714u;
            goto label_39c714;
        }
    }
    ctx->pc = 0x39C70Cu;
    // 0x39c70c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x39C70Cu;
    {
        const bool branch_taken_0x39c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C70Cu;
        // 0x39c710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c70c) {
            ctx->pc = 0x39C780u;
            goto label_39c780;
        }
    }
    ctx->pc = 0x39C714u;
label_39c714:
    // 0x39c714: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x39c714u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x39c718: 0x8f85a9f8  lw          $a1, -0x5608($gp)
    ctx->pc = 0x39c718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945272)));
    // 0x39c71c: 0x8f87a9fc  lw          $a3, -0x5604($gp)
    ctx->pc = 0x39c71cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945276)));
    // 0x39c720: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x39c720u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x39c724: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x39c724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x39c728: 0x2508c5c8  addiu       $t0, $t0, -0x3A38
    ctx->pc = 0x39c728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952392));
    // 0x39c72c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39c72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39c730: 0xc10408c  jal         func_410230
    ctx->pc = 0x39C730u;
    SET_GPR_U32(ctx, 31, 0x39C738u);
    ctx->pc = 0x39C734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C730u;
    // 0x39c734: 0x35290507  ori         $t1, $t1, 0x507 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1287);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x39C730u, 0x39C738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C738u;
label_39c738:
    // 0x39c738: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39c73c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x39c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x39c740: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39C740u;
    {
        const bool branch_taken_0x39c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C740u;
        // 0x39c744: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c740) {
            ctx->pc = 0x39C768u;
            goto label_39c768;
        }
    }
    ctx->pc = 0x39C748u;
    // 0x39c748: 0x8f83bd6c  lw          $v1, -0x4294($gp)
    ctx->pc = 0x39c748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950252)));
    // 0x39c74c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39c74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39c750: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x39c750u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x39c754: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39c754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x39c758: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x39c758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x39c75c: 0xaf83bd6c  sw          $v1, -0x4294($gp)
    ctx->pc = 0x39c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950252), GPR_U32(ctx, 3));
    // 0x39c760: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39C760u;
    {
        const bool branch_taken_0x39c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C760u;
        // 0x39c764: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c760) {
            ctx->pc = 0x39C780u;
            goto label_39c780;
        }
    }
    ctx->pc = 0x39C768u;
label_39c768:
    // 0x39c768: 0xc104284  jal         func_410A10
    ctx->pc = 0x39C768u;
    SET_GPR_U32(ctx, 31, 0x39C770u);
    ctx->pc = 0x39C76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C768u;
    // 0x39c76c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x39C768u, 0x39C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C770u;
label_39c770:
    // 0x39c770: 0x8f83bd68  lw          $v1, -0x4298($gp)
    ctx->pc = 0x39c770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950248)));
    // 0x39c774: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x39c774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39c778: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x39c778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x39c77c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x39c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_39c780:
    // 0x39c780: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39c780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39c784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39c78c: 0x3e00008  jr          $ra
    ctx->pc = 0x39C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C78Cu;
        // 0x39c790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C794u;
    // 0x39c794: 0x0  nop
    ctx->pc = 0x39c794u;
    // NOP
    ctx->pc = 0x39c798u;
}
