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

// Function: sub_004A5240
// Address: 0x4a5240 - 0x4a52b0
void sub_004A5240_0x4a5240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5240_0x4a5240");
#endif

    switch (ctx->pc) {
        case 0x4a527cu: goto label_4a527c;
        case 0x4a5298u: goto label_4a5298;
        default: break;
    }

    ctx->pc = 0x4a5240u;

    // 0x4a5240: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x4a5240u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x4a5244: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4a5244u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x4a5248: 0x73e03  sra         $a3, $a3, 24
    ctx->pc = 0x4a5248u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    // 0x4a524c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a524cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a5250: 0xa7001a  div         $zero, $a1, $a3
    ctx->pc = 0x4a5250u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4a5254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a5254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a5258: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a5258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a525c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A525Cu;
    {
        const bool branch_taken_0x4a525c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a525c) {
            ctx->pc = 0x4A5260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A525Cu;
            // 0x4a5260: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5264u;
            goto label_4a5264;
        }
    }
    ctx->pc = 0x4A5264u;
label_4a5264:
    // 0x4a5264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a5268: 0x4012  mflo        $t0
    ctx->pc = 0x4a5268u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x4a526c: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A526Cu;
    {
        const bool branch_taken_0x4a526c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A526Cu;
        // 0x4a5270: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a526c) {
            ctx->pc = 0x4A5284u;
            goto label_4a5284;
        }
    }
    ctx->pc = 0x4A5274u;
    // 0x4a5274: 0xc12958a  jal         func_4A5628
    ctx->pc = 0x4A5274u;
    SET_GPR_U32(ctx, 31, 0x4A527Cu);
    ctx->pc = 0x4A5278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5274u;
    // 0x4a5278: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5628u, 0x4A5274u, 0x4A527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A527Cu;
label_4a527c:
    // 0x4a527c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4A527Cu;
    {
        const bool branch_taken_0x4a527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A527Cu;
        // 0x4a5280: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a527c) {
            ctx->pc = 0x4A529Cu;
            goto label_4a529c;
        }
    }
    ctx->pc = 0x4A5284u;
label_4a5284:
    // 0x4a5284: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4a5284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4a5288: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A5288u;
    {
        const bool branch_taken_0x4a5288 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5288u;
        // 0x4a528c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5288) {
            ctx->pc = 0x4A52A0u;
            goto label_4a52a0;
        }
    }
    ctx->pc = 0x4A5290u;
    // 0x4a5290: 0xc1295d6  jal         func_4A5758
    ctx->pc = 0x4A5290u;
    SET_GPR_U32(ctx, 31, 0x4A5298u);
    ctx->pc = 0x4A5294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5290u;
    // 0x4a5294: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5758u, 0x4A5290u, 0x4A5298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5298u;
label_4a5298:
    // 0x4a5298: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a5298u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a529c:
    // 0x4a529c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a529cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a52a0:
    // 0x4a52a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a52a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a52a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A52A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A52A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52A4u;
        // 0x4a52a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A52A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A52ACu;
    // 0x4a52ac: 0x0  nop
    ctx->pc = 0x4a52acu;
    // NOP
    ctx->pc = 0x4a52b0u;
}
