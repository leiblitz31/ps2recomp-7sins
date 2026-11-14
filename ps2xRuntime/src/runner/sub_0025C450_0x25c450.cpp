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

// Function: sub_0025C450
// Address: 0x25c450 - 0x25c4d0
void sub_0025C450_0x25c450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C450_0x25c450");
#endif

    switch (ctx->pc) {
        case 0x25c478u: goto label_25c478;
        default: break;
    }

    ctx->pc = 0x25c450u;

    // 0x25c450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25c450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25c454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c458: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25c45c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25c45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25c460: 0xa3a60030  sb          $a2, 0x30($sp)
    ctx->pc = 0x25c460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 6));
    // 0x25c464: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c468: 0x24440021  addiu       $a0, $v0, 0x21
    ctx->pc = 0x25c468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x25c46c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25c46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c470: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x25C470u;
    SET_GPR_U32(ctx, 31, 0x25C478u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x25C470u, 0x25C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C478u;
label_25c478:
    // 0x25c478: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x25c478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25c47c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x25C47Cu;
    {
        const bool branch_taken_0x25c47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c47c) {
            ctx->pc = 0x25C4A0u;
            goto label_25c4a0;
        }
    }
    ctx->pc = 0x25C484u;
    // 0x25c484: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c488: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25c488u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c48c: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x25c48cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x25c490: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c494: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25c494u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x25c498: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x25C498u;
    {
        const bool branch_taken_0x25c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c498) {
            ctx->pc = 0x25C4B4u;
            goto label_25c4b4;
        }
    }
    ctx->pc = 0x25C4A0u;
label_25c4a0:
    // 0x25c4a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c4a4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x25c4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c4a8: 0x306400fd  andi        $a0, $v1, 0xFD
    ctx->pc = 0x25c4a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x25c4ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c4b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x25c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_25c4b4:
    // 0x25c4b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c4b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25c4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25c4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25C4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C4C4u;
    // 0x25c4c4: 0x0  nop
    ctx->pc = 0x25c4c4u;
    // NOP
    // 0x25c4c8: 0x0  nop
    ctx->pc = 0x25c4c8u;
    // NOP
    // 0x25c4cc: 0x0  nop
    ctx->pc = 0x25c4ccu;
    // NOP
    ctx->pc = 0x25c4d0u;
}
