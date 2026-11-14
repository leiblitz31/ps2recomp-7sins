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

// Function: sub_00298220
// Address: 0x298220 - 0x2982c0
void sub_00298220_0x298220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298220_0x298220");
#endif

    switch (ctx->pc) {
        case 0x29827cu: goto label_29827c;
        case 0x29829cu: goto label_29829c;
        default: break;
    }

    ctx->pc = 0x298220u;

    // 0x298220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29822c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298230: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x298230u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x298234: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x298234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298238u;
    {
        const bool branch_taken_0x298238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298238) {
            ctx->pc = 0x29824Cu;
            goto label_29824c;
        }
    }
    ctx->pc = 0x298240u;
    // 0x298240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x298240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298244: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x298244u;
    {
        const bool branch_taken_0x298244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298244) {
            ctx->pc = 0x29826Cu;
            goto label_29826c;
        }
    }
    ctx->pc = 0x29824Cu;
label_29824c:
    // 0x29824c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29824cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298250: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x298250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x298254: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298254u;
    {
        const bool branch_taken_0x298254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298254) {
            ctx->pc = 0x298268u;
            goto label_298268;
        }
    }
    ctx->pc = 0x29825Cu;
    // 0x29825c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x29825cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298260: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298260u;
    {
        const bool branch_taken_0x298260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298260) {
            ctx->pc = 0x29826Cu;
            goto label_29826c;
        }
    }
    ctx->pc = 0x298268u;
label_298268:
    // 0x298268: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x298268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29826c:
    // 0x29826c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298270: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x298270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x298274: 0xc121d18  jal         func_487460
    ctx->pc = 0x298274u;
    SET_GPR_U32(ctx, 31, 0x29827Cu);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x298274u, 0x29827Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29827Cu;
label_29827c:
    // 0x29827c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298280: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x298280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298284: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298288: 0x24a50044  addiu       $a1, $a1, 0x44
    ctx->pc = 0x298288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 68));
    // 0x29828c: 0x90660048  lbu         $a2, 0x48($v1)
    ctx->pc = 0x29828cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x298290: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x298290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298294: 0xc0a6ee8  jal         func_29BBA0
    ctx->pc = 0x298294u;
    SET_GPR_U32(ctx, 31, 0x29829Cu);
    ctx->pc = 0x29BBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BBA0u, 0x298294u, 0x29829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29829Cu;
label_29829c:
    // 0x29829c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x29829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2982a0: 0xa0620070  sb          $v0, 0x70($v1)
    ctx->pc = 0x2982a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 112), (uint8_t)GPR_U32(ctx, 2));
    // 0x2982a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2982a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2982a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2982a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2982ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2982acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2982b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2982B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2982B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2982B8u;
    // 0x2982b8: 0x0  nop
    ctx->pc = 0x2982b8u;
    // NOP
    // 0x2982bc: 0x0  nop
    ctx->pc = 0x2982bcu;
    // NOP
    ctx->pc = 0x2982c0u;
}
