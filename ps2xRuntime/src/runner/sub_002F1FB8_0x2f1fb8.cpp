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

// Function: sub_002F1FB8
// Address: 0x2f1fb8 - 0x2f2040
void sub_002F1FB8_0x2f1fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1FB8_0x2f1fb8");
#endif

    switch (ctx->pc) {
        case 0x2f1fc8u: goto label_2f1fc8;
        case 0x2f1ff0u: goto label_2f1ff0;
        default: break;
    }

    ctx->pc = 0x2f1fb8u;

    // 0x2f1fb8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2f1fb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f1fbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f1fbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1fc0: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F1FC0u;
    {
        const bool branch_taken_0x2f1fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FC0u;
        // 0x2f1fc4: 0x90880000  lbu         $t0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1fc0) {
            ctx->pc = 0x2F2034u;
            goto label_2f2034;
        }
    }
    ctx->pc = 0x2F1FC8u;
label_2f1fc8:
    // 0x2f1fc8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f1fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1fcc: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2f1fccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f1fd0: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F1FD0u;
    {
        const bool branch_taken_0x2f1fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FD0u;
        // 0x2f1fd4: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1fd0) {
            ctx->pc = 0x2F201Cu;
            goto label_2f201c;
        }
    }
    ctx->pc = 0x2F1FD8u;
    // 0x2f1fd8: 0x81600  sll         $v0, $t0, 24
    ctx->pc = 0x2f1fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x2f1fdc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f1fdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f1fe0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F1FE0u;
    {
        const bool branch_taken_0x2f1fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f1fe0) {
            ctx->pc = 0x2F2014u;
            goto label_2f2014;
        }
    }
    ctx->pc = 0x2F1FE8u;
    // 0x2f1fe8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2f1fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2f1fec: 0x0  nop
    ctx->pc = 0x2f1fecu;
    // NOP
label_2f1ff0:
    // 0x2f1ff0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2f1ff0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f1ff4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F1FF4u;
    {
        const bool branch_taken_0x2f1ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FF4u;
        // 0x2f1ff8: 0x90c70000  lbu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ff4) {
            ctx->pc = 0x2F201Cu;
            goto label_2f201c;
        }
    }
    ctx->pc = 0x2F1FFCu;
    // 0x2f1ffc: 0x0  nop
    ctx->pc = 0x2f1ffcu;
    // NOP
    // 0x2f2000: 0x0  nop
    ctx->pc = 0x2f2000u;
    // NOP
    // 0x2f2004: 0x0  nop
    ctx->pc = 0x2f2004u;
    // NOP
    // 0x2f2008: 0x0  nop
    ctx->pc = 0x2f2008u;
    // NOP
    // 0x2f200c: 0x5443fff8  bnel        $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2F200Cu;
    {
        const bool branch_taken_0x2f200c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f200c) {
            ctx->pc = 0x2F2010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F200Cu;
            // 0x2f2010: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1ff0;
        }
    }
    ctx->pc = 0x2F2014u;
label_2f2014:
    // 0x2f2014: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2014u;
    {
        const bool branch_taken_0x2f2014 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2014u;
        // 0x2f2018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2014) {
            ctx->pc = 0x2F2030u;
            goto label_2f2030;
        }
    }
    ctx->pc = 0x2F201Cu;
label_2f201c:
    // 0x2f201c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2f201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2f2020: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2f2020u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f2024: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2F2024u;
    {
        const bool branch_taken_0x2f2024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2024u;
        // 0x2f2028: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2024) {
            ctx->pc = 0x2F1FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f1fc8;
        }
    }
    ctx->pc = 0x2F202Cu;
    // 0x2f202c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f202cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f2030:
    // 0x2f2030: 0x87100b  movn        $v0, $a0, $a3
    ctx->pc = 0x2f2030u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2f2034:
    // 0x2f2034: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F203Cu;
    // 0x2f203c: 0x0  nop
    ctx->pc = 0x2f203cu;
    // NOP
    ctx->pc = 0x2f2040u;
}
