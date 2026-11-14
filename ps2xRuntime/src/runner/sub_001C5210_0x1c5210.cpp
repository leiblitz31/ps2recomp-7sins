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

// Function: sub_001C5210
// Address: 0x1c5210 - 0x1c5310
void sub_001C5210_0x1c5210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5210_0x1c5210");
#endif

    switch (ctx->pc) {
        case 0x1c5248u: goto label_1c5248;
        case 0x1c525cu: goto label_1c525c;
        case 0x1c52acu: goto label_1c52ac;
        default: break;
    }

    ctx->pc = 0x1c5210u;

    // 0x1c5210: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c5214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c5214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c5218: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c5218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c521c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c5220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c5220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c5224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c5228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c5228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c522c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c5230: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1c5230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1c5234: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1c5234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1c5238: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x1c5238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x1c523c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c523cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5240: 0xc0714c4  jal         func_1C5310
    ctx->pc = 0x1C5240u;
    SET_GPR_U32(ctx, 31, 0x1C5248u);
    ctx->pc = 0x1C5310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5310u, 0x1C5240u, 0x1C5248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5248u;
label_1c5248:
    // 0x1c5248: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x1c5248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x1c524c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1c524cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5250: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x1c5250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1c5254: 0xc0714d0  jal         func_1C5340
    ctx->pc = 0x1C5254u;
    SET_GPR_U32(ctx, 31, 0x1C525Cu);
    ctx->pc = 0x1C5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5340u, 0x1C5254u, 0x1C525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C525Cu;
label_1c525c:
    // 0x1c525c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c525cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5260: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x1c5260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c5264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c5264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c5268: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C5268u;
    {
        const bool branch_taken_0x1c5268 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c5268) {
            ctx->pc = 0x1C527Cu;
            goto label_1c527c;
        }
    }
    ctx->pc = 0x1C5270u;
    // 0x1c5270: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1c5270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5274: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C5274u;
    {
        const bool branch_taken_0x1c5274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5274) {
            ctx->pc = 0x1C52E8u;
            goto label_1c52e8;
        }
    }
    ctx->pc = 0x1C527Cu;
label_1c527c:
    // 0x1c527c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c527cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c5280: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c5280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c5284: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x1c5284u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x1c5288: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c5288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c528c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c528cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c5290: 0x2442bf00  addiu       $v0, $v0, -0x4100
    ctx->pc = 0x1c5290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x1c5294: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1c5294u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c5298: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1c5298u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c529c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c52a0: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x1c52a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1c52a4: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x1c52a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x1c52a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c52a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c52ac:
    // 0x1c52ac: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1c52acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c52b4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c52b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1c52b8: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x1c52b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x1c52bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c52c0: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C52C0u;
    {
        const bool branch_taken_0x1c52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x1c52c0) {
            ctx->pc = 0x1C52D4u;
            goto label_1c52d4;
        }
    }
    ctx->pc = 0x1C52C8u;
    // 0x1c52c8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c52c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1c52cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C52CCu;
    {
        const bool branch_taken_0x1c52cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c52cc) {
            ctx->pc = 0x1C52E4u;
            goto label_1c52e4;
        }
    }
    ctx->pc = 0x1C52D4u;
label_1c52d4:
    // 0x1c52d4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1c52d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x1c52d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c52d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1c52dc: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C52DCu;
    {
        const bool branch_taken_0x1c52dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c52dc) {
            ctx->pc = 0x1C52ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52ac;
        }
    }
    ctx->pc = 0x1C52E4u;
label_1c52e4:
    // 0x1c52e4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1c52e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1c52e8:
    // 0x1c52e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c52e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c52ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c52ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c52f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c52f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c52f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c52f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c52f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c52f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c52fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c52fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5304: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1c5304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c5308: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5310u;
}
