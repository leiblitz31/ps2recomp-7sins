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

// Function: sub_003FCDC8
// Address: 0x3fcdc8 - 0x3fce48
void sub_003FCDC8_0x3fcdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FCDC8_0x3fcdc8");
#endif

    ctx->pc = 0x3fcdc8u;

    // 0x3fcdc8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3fcdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fcdcc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3fcdccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3fcdd0: 0xdce20108  ld          $v0, 0x108($a3)
    ctx->pc = 0x3fcdd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 264)));
    // 0x3fcdd4: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x3fcdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3fcdd8: 0xa4e50212  sh          $a1, 0x212($a3)
    ctx->pc = 0x3fcdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 530), (uint16_t)GPR_U32(ctx, 5));
    // 0x3fcddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3fcddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3fcde0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3fcde0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3fcde4: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FCDE4u;
    {
        const bool branch_taken_0x3fcde4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x3FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDE4u;
        // 0x3fcde8: 0xfce20108  sd          $v0, 0x108($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 264), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcde4) {
            ctx->pc = 0x3FCDFCu;
            goto label_3fcdfc;
        }
    }
    ctx->pc = 0x3FCDECu;
    // 0x3fcdec: 0xdce20100  ld          $v0, 0x100($a3)
    ctx->pc = 0x3fcdecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x3fcdf0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x3fcdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3fcdf4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3FCDF4u;
    {
        const bool branch_taken_0x3fcdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FCDF4u;
        // 0x3fcdf8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fcdf4) {
            ctx->pc = 0x3FCE08u;
            goto label_3fce08;
        }
    }
    ctx->pc = 0x3FCDFCu;
label_3fcdfc:
    // 0x3fcdfc: 0xdce20100  ld          $v0, 0x100($a3)
    ctx->pc = 0x3fcdfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x3fce00: 0x2403ff7f  addiu       $v1, $zero, -0x81
    ctx->pc = 0x3fce00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x3fce04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3fce04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3fce08:
    // 0x3fce08: 0xfce20100  sd          $v0, 0x100($a3)
    ctx->pc = 0x3fce08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 256), GPR_U64(ctx, 2));
    // 0x3fce0c: 0x90e2020a  lbu         $v0, 0x20A($a3)
    ctx->pc = 0x3fce0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 522)));
    // 0x3fce10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3fce10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3fce14: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FCE14u;
    {
        const bool branch_taken_0x3fce14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3fce14) {
            ctx->pc = 0x3FCE28u;
            goto label_3fce28;
        }
    }
    ctx->pc = 0x3FCE1Cu;
    // 0x3fce1c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3fce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fce20: 0xa0e2020f  sb          $v0, 0x20F($a3)
    ctx->pc = 0x3fce20u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 527), (uint8_t)GPR_U32(ctx, 2));
    // 0x3fce24: 0x90e2020a  lbu         $v0, 0x20A($a3)
    ctx->pc = 0x3fce24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 522)));
label_3fce28:
    // 0x3fce28: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FCE28u;
    {
        const bool branch_taken_0x3fce28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fce28) {
            ctx->pc = 0x3FCE40u;
            goto label_3fce40;
        }
    }
    ctx->pc = 0x3FCE30u;
    // 0x3fce30: 0x90e2020b  lbu         $v0, 0x20B($a3)
    ctx->pc = 0x3fce30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 523)));
    // 0x3fce34: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x3fce34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3fce38: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3FCE38u;
    {
        const bool branch_taken_0x3fce38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fce38) {
            ctx->pc = 0x3FCE3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FCE38u;
            // 0x3fce3c: 0xa0e3020f  sb          $v1, 0x20F($a3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 7), 527), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FCE40u;
            goto label_3fce40;
        }
    }
    ctx->pc = 0x3FCE40u;
label_3fce40:
    // 0x3fce40: 0x3e00008  jr          $ra
    ctx->pc = 0x3FCE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FCE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FCE48u;
}
