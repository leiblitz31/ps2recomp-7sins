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

// Function: sub_00390148
// Address: 0x390148 - 0x3901a0
void sub_00390148_0x390148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390148_0x390148");
#endif

    switch (ctx->pc) {
        case 0x390148u: goto label_390148;
        case 0x39014cu: goto label_39014c;
        case 0x390150u: goto label_390150;
        case 0x390154u: goto label_390154;
        case 0x390158u: goto label_390158;
        case 0x39015cu: goto label_39015c;
        case 0x390160u: goto label_390160;
        case 0x390164u: goto label_390164;
        case 0x390168u: goto label_390168;
        case 0x39016cu: goto label_39016c;
        case 0x390170u: goto label_390170;
        case 0x390174u: goto label_390174;
        case 0x390178u: goto label_390178;
        case 0x39017cu: goto label_39017c;
        case 0x390180u: goto label_390180;
        case 0x390184u: goto label_390184;
        case 0x390188u: goto label_390188;
        case 0x39018cu: goto label_39018c;
        case 0x390190u: goto label_390190;
        case 0x390194u: goto label_390194;
        case 0x390198u: goto label_390198;
        case 0x39019cu: goto label_39019c;
        default: break;
    }

    ctx->pc = 0x390148u;

label_390148:
    // 0x390148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x390148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39014c:
    // 0x39014c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39014cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390150:
    // 0x390150: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_390154:
    if (ctx->pc == 0x390154u) {
        ctx->pc = 0x390154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390150u;
        // 0x390154: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390158u;
        goto label_390158;
    }
    ctx->pc = 0x390150u;
    {
        const bool branch_taken_0x390150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390150u;
        // 0x390154: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390150) {
            ctx->pc = 0x39017Cu;
            goto label_39017c;
        }
    }
    ctx->pc = 0x390158u;
label_390158:
    // 0x390158: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x390158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_39015c:
    // 0x39015c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_390160:
    if (ctx->pc == 0x390160u) {
        ctx->pc = 0x390160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39015Cu;
        // 0x390160: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390164u;
        goto label_390164;
    }
    ctx->pc = 0x39015Cu;
    {
        const bool branch_taken_0x39015c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39015Cu;
        // 0x390160: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39015c) {
            ctx->pc = 0x390180u;
            goto label_390180;
        }
    }
    ctx->pc = 0x390164u;
label_390164:
    // 0x390164: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x390164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_390168:
    // 0x390168: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39016c:
    if (ctx->pc == 0x39016Cu) {
        ctx->pc = 0x39016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390168u;
        // 0x39016c: 0x8c62e98c  lw          $v0, -0x1674($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390170u;
        goto label_390170;
    }
    ctx->pc = 0x390168u;
    {
        const bool branch_taken_0x390168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390168u;
        // 0x39016c: 0x8c62e98c  lw          $v0, -0x1674($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390168) {
            ctx->pc = 0x390184u;
            goto label_390184;
        }
    }
    ctx->pc = 0x390170u;
label_390170:
    // 0x390170: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x390170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_390174:
    // 0x390174: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_390178:
    if (ctx->pc == 0x390178u) {
        ctx->pc = 0x390178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390174u;
        // 0x390178: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39017Cu;
        goto label_39017c;
    }
    ctx->pc = 0x390174u;
    {
        const bool branch_taken_0x390174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390174u;
        // 0x390178: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390174) {
            ctx->pc = 0x390190u;
            goto label_390190;
        }
    }
    ctx->pc = 0x39017Cu;
label_39017c:
    // 0x39017c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x39017cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_390180:
    // 0x390180: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x390180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_390184:
    // 0x390184: 0x40f809  jalr        $v0
label_390188:
    if (ctx->pc == 0x390188u) {
        ctx->pc = 0x39018Cu;
        goto label_39018c;
    }
    ctx->pc = 0x390184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39018Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390184u, 0x39018Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39018Cu;
label_39018c:
    // 0x39018c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39018cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390190:
    // 0x390190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x390190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_390194:
    // 0x390194: 0x3e00008  jr          $ra
label_390198:
    if (ctx->pc == 0x390198u) {
        ctx->pc = 0x390198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390194u;
        // 0x390198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39019Cu;
        goto label_39019c;
    }
    ctx->pc = 0x390194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390194u;
        // 0x390198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39019Cu;
label_39019c:
    // 0x39019c: 0x0  nop
    ctx->pc = 0x39019cu;
    // NOP
    ctx->pc = 0x3901a0u;
}
