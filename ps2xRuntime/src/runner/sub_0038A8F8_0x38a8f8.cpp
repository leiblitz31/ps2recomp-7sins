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

// Function: sub_0038A8F8
// Address: 0x38a8f8 - 0x38a990
void sub_0038A8F8_0x38a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A8F8_0x38a8f8");
#endif

    switch (ctx->pc) {
        case 0x38a920u: goto label_38a920;
        case 0x38a940u: goto label_38a940;
        case 0x38a954u: goto label_38a954;
        case 0x38a968u: goto label_38a968;
        default: break;
    }

    ctx->pc = 0x38a8f8u;

    // 0x38a8f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a8fc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38a900: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x38a900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a904: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38a904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38a908: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38a908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a90c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38a910: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38a910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a914: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x38a914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x38a918: 0xc10571c  jal         func_415C70
    ctx->pc = 0x38A918u;
    SET_GPR_U32(ctx, 31, 0x38A920u);
    ctx->pc = 0x38A91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A918u;
    // 0x38a91c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415C70u, 0x38A918u, 0x38A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A920u;
label_38a920:
    // 0x38a920: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38A920u;
    {
        const bool branch_taken_0x38a920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A920u;
        // 0x38a924: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a920) {
            ctx->pc = 0x38A970u;
            goto label_38a970;
        }
    }
    ctx->pc = 0x38A928u;
    // 0x38a928: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38a928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a92c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a930: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38a930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a934: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x38a934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x38a938: 0xc103404  jal         func_40D010
    ctx->pc = 0x38A938u;
    SET_GPR_U32(ctx, 31, 0x38A940u);
    ctx->pc = 0x38A93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A938u;
    // 0x38a93c: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x38A938u, 0x38A940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A940u;
label_38a940:
    // 0x38a940: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A940u;
    {
        const bool branch_taken_0x38a940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A940u;
        // 0x38a944: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a940) {
            ctx->pc = 0x38A970u;
            goto label_38a970;
        }
    }
    ctx->pc = 0x38A948u;
    // 0x38a948: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38a948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a94c: 0xc103440  jal         func_40D100
    ctx->pc = 0x38A94Cu;
    SET_GPR_U32(ctx, 31, 0x38A954u);
    ctx->pc = 0x38A950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A94Cu;
    // 0x38a950: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x38A94Cu, 0x38A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A954u;
label_38a954:
    // 0x38a954: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A954u;
    {
        const bool branch_taken_0x38a954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38a954) {
            ctx->pc = 0x38A958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38A954u;
            // 0x38a958: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38A974u;
            goto label_38a974;
        }
    }
    ctx->pc = 0x38A95Cu;
    // 0x38a95c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x38a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a960: 0xc1054ca  jal         func_415328
    ctx->pc = 0x38A960u;
    SET_GPR_U32(ctx, 31, 0x38A968u);
    ctx->pc = 0x38A964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A960u;
    // 0x38a964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415328u, 0x38A960u, 0x38A968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A968u;
label_38a968:
    // 0x38a968: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38A968u;
    {
        const bool branch_taken_0x38a968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A968u;
        // 0x38a96c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a968) {
            ctx->pc = 0x38A978u;
            goto label_38a978;
        }
    }
    ctx->pc = 0x38A970u;
label_38a970:
    // 0x38a970: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x38a970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_38a974:
    // 0x38a974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38a974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38a978:
    // 0x38a978: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38a978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a97c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38a97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38a980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38a984: 0x3e00008  jr          $ra
    ctx->pc = 0x38A984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A984u;
        // 0x38a988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A98Cu;
    // 0x38a98c: 0x0  nop
    ctx->pc = 0x38a98cu;
    // NOP
    ctx->pc = 0x38a990u;
}
