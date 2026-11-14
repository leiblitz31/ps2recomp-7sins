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

// Function: sub_002EE128
// Address: 0x2ee128 - 0x2ee1d0
void sub_002EE128_0x2ee128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE128_0x2ee128");
#endif

    switch (ctx->pc) {
        case 0x2ee154u: goto label_2ee154;
        case 0x2ee198u: goto label_2ee198;
        default: break;
    }

    ctx->pc = 0x2ee128u;

    // 0x2ee128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ee128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ee12c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee134: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ee134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ee138: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ee138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee13c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ee13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ee140: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x2ee140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x2ee144: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE144u;
    {
        const bool branch_taken_0x2ee144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE144u;
        // 0x2ee148: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee144) {
            ctx->pc = 0x2EE160u;
            goto label_2ee160;
        }
    }
    ctx->pc = 0x2EE14Cu;
    // 0x2ee14c: 0xc0ba8ca  jal         func_2EA328
    ctx->pc = 0x2EE14Cu;
    SET_GPR_U32(ctx, 31, 0x2EE154u);
    ctx->pc = 0x2EE150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE14Cu;
    // 0x2ee150: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA328u, 0x2EE14Cu, 0x2EE154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE154u;
label_2ee154:
    // 0x2ee154: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ee154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee158: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EE158u;
    {
        const bool branch_taken_0x2ee158 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE158u;
        // 0x2ee15c: 0xae03004c  sw          $v1, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee158) {
            ctx->pc = 0x2EE1B8u;
            goto label_2ee1b8;
        }
    }
    ctx->pc = 0x2EE160u;
label_2ee160:
    // 0x2ee160: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ee160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2ee164: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2ee164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ee168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2ee168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ee16c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EE16Cu;
    {
        const bool branch_taken_0x2ee16c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE16Cu;
        // 0x2ee170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee16c) {
            ctx->pc = 0x2EE180u;
            goto label_2ee180;
        }
    }
    ctx->pc = 0x2EE174u;
    // 0x2ee174: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ee174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ee178: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2EE178u;
    {
        const bool branch_taken_0x2ee178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE178u;
        // 0x2ee17c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee178) {
            ctx->pc = 0x2EE1ACu;
            goto label_2ee1ac;
        }
    }
    ctx->pc = 0x2EE180u;
label_2ee180:
    // 0x2ee180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ee180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee184: 0x2228004  sllv        $s0, $v0, $s1
    ctx->pc = 0x2ee184u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x2ee188: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ee188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ee18c: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2ee18cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ee190: 0xc0ba8ca  jal         func_2EA328
    ctx->pc = 0x2EE190u;
    SET_GPR_U32(ctx, 31, 0x2EE198u);
    ctx->pc = 0x2EE194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EE190u;
    // 0x2ee194: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA328u, 0x2EE190u, 0x2EE198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE198u;
label_2ee198:
    // 0x2ee198: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ee198u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee19c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE19Cu;
    {
        const bool branch_taken_0x2ee19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee19c) {
            ctx->pc = 0x2EE1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EE19Cu;
            // 0x2ee1a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EE1BCu;
            goto label_2ee1bc;
        }
    }
    ctx->pc = 0x2EE1A4u;
    // 0x2ee1a4: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x2ee1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x2ee1a8: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x2ee1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_2ee1ac:
    // 0x2ee1ac: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ee1acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2ee1b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ee1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee1b4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2ee1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2ee1b8:
    // 0x2ee1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee1bc:
    // 0x2ee1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ee1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee1c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ee1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ee1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE1C4u;
        // 0x2ee1c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE1CCu;
    // 0x2ee1cc: 0x0  nop
    ctx->pc = 0x2ee1ccu;
    // NOP
    ctx->pc = 0x2ee1d0u;
}
