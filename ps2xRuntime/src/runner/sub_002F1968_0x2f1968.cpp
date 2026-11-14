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

// Function: sub_002F1968
// Address: 0x2f1968 - 0x2f19b8
void sub_002F1968_0x2f1968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1968_0x2f1968");
#endif

    switch (ctx->pc) {
        case 0x2f1978u: goto label_2f1978;
        default: break;
    }

    ctx->pc = 0x2f1968u;

    // 0x2f1968: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2f1968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f196c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f196cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1970: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F1970u;
    {
        const bool branch_taken_0x2f1970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1970u;
        // 0x2f1974: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1970) {
            ctx->pc = 0x2F19ACu;
            goto label_2f19ac;
        }
    }
    ctx->pc = 0x2F1978u;
label_2f1978:
    // 0x2f1978: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2f1978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f197c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f197cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f1980: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2f1980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2f1984: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f1984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f1988: 0x90638f81  lbu         $v1, -0x707F($v1)
    ctx->pc = 0x2f1988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294938497)));
    // 0x2f198c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f198cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f1990: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F1990u;
    {
        const bool branch_taken_0x2f1990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1990u;
        // 0x2f1994: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1990) {
            ctx->pc = 0x2F199Cu;
            goto label_2f199c;
        }
    }
    ctx->pc = 0x2F1998u;
    // 0x2f1998: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x2f1998u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_2f199c:
    // 0x2f199c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f199cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f19a0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2f19a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f19a4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2F19A4u;
    {
        const bool branch_taken_0x2f19a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F19A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19A4u;
        // 0x2f19a8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f19a4) {
            ctx->pc = 0x2F1978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1978;
        }
    }
    ctx->pc = 0x2F19ACu;
label_2f19ac:
    // 0x2f19ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F19ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F19B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F19ACu;
        // 0x2f19b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F19ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F19B4u;
    // 0x2f19b4: 0x0  nop
    ctx->pc = 0x2f19b4u;
    // NOP
    ctx->pc = 0x2f19b8u;
}
