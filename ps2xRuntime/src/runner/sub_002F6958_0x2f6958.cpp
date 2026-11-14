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

// Function: sub_002F6958
// Address: 0x2f6958 - 0x2f69b0
void sub_002F6958_0x2f6958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6958_0x2f6958");
#endif

    switch (ctx->pc) {
        case 0x2f6958u: goto label_2f6958;
        case 0x2f695cu: goto label_2f695c;
        case 0x2f6960u: goto label_2f6960;
        case 0x2f6964u: goto label_2f6964;
        case 0x2f6968u: goto label_2f6968;
        case 0x2f696cu: goto label_2f696c;
        case 0x2f6970u: goto label_2f6970;
        case 0x2f6974u: goto label_2f6974;
        case 0x2f6978u: goto label_2f6978;
        case 0x2f697cu: goto label_2f697c;
        case 0x2f6980u: goto label_2f6980;
        case 0x2f6984u: goto label_2f6984;
        case 0x2f6988u: goto label_2f6988;
        case 0x2f698cu: goto label_2f698c;
        case 0x2f6990u: goto label_2f6990;
        case 0x2f6994u: goto label_2f6994;
        case 0x2f6998u: goto label_2f6998;
        case 0x2f699cu: goto label_2f699c;
        case 0x2f69a0u: goto label_2f69a0;
        case 0x2f69a4u: goto label_2f69a4;
        case 0x2f69a8u: goto label_2f69a8;
        case 0x2f69acu: goto label_2f69ac;
        default: break;
    }

    ctx->pc = 0x2f6958u;

label_2f6958:
    // 0x2f6958: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f6958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2f695c:
    // 0x2f695c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f695cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f6960:
    // 0x2f6960: 0x8c45c388  lw          $a1, -0x3C78($v0)
    ctx->pc = 0x2f6960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951816)));
label_2f6964:
    // 0x2f6964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f6968:
    // 0x2f6968: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_2f696c:
    if (ctx->pc == 0x2F696Cu) {
        ctx->pc = 0x2F696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6968u;
        // 0x2f696c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6970u;
        goto label_2f6970;
    }
    ctx->pc = 0x2F6968u;
    {
        const bool branch_taken_0x2f6968 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6968u;
        // 0x2f696c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6968) {
            ctx->pc = 0x2F699Cu;
            goto label_2f699c;
        }
    }
    ctx->pc = 0x2F6970u;
label_2f6970:
    // 0x2f6970: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2f6970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2f6974:
    // 0x2f6974: 0x8c43ef24  lw          $v1, -0x10DC($v0)
    ctx->pc = 0x2f6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962980)));
label_2f6978:
    // 0x2f6978: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_2f697c:
    if (ctx->pc == 0x2F697Cu) {
        ctx->pc = 0x2F697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6978u;
        // 0x2f697c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6980u;
        goto label_2f6980;
    }
    ctx->pc = 0x2F6978u;
    {
        const bool branch_taken_0x2f6978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6978u;
        // 0x2f697c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6978) {
            ctx->pc = 0x2F69A0u;
            goto label_2f69a0;
        }
    }
    ctx->pc = 0x2F6980u;
label_2f6980:
    // 0x2f6980: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f6980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_2f6984:
    // 0x2f6984: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f6984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f6988:
    // 0x2f6988: 0x8c5cc38c  lw          $gp, -0x3C74($v0)
    ctx->pc = 0x2f6988u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951820)));
label_2f698c:
    // 0x2f698c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f698cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_2f6990:
    // 0x2f6990: 0xa0f809  jalr        $a1
label_2f6994:
    if (ctx->pc == 0x2F6994u) {
        ctx->pc = 0x2F6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6990u;
        // 0x2f6994: 0x8c64c390  lw          $a0, -0x3C70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F6998u;
        goto label_2f6998;
    }
    ctx->pc = 0x2F6990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2F6998u);
        ctx->pc = 0x2F6994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6990u;
        // 0x2f6994: 0x8c64c390  lw          $a0, -0x3C70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951824)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6990u, 0x2F6998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F6998u;
label_2f6998:
    // 0x2f6998: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f6998u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f699c:
    // 0x2f699c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f699cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f69a0:
    // 0x2f69a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f69a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f69a4:
    // 0x2f69a4: 0x3e00008  jr          $ra
label_2f69a8:
    if (ctx->pc == 0x2F69A8u) {
        ctx->pc = 0x2F69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69A4u;
        // 0x2f69a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F69ACu;
        goto label_2f69ac;
    }
    ctx->pc = 0x2F69A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F69A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F69A4u;
        // 0x2f69a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F69A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F69ACu;
label_2f69ac:
    // 0x2f69ac: 0x0  nop
    ctx->pc = 0x2f69acu;
    // NOP
    ctx->pc = 0x2f69b0u;
}
