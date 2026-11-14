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

// Function: sub_001FED90
// Address: 0x1fed90 - 0x1fee20
void sub_001FED90_0x1fed90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FED90_0x1fed90");
#endif

    ctx->pc = 0x1fed90u;

    // 0x1fed90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fed90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fed94: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x1fed94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fed98: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x1fed98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fed9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fed9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1feda0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1feda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1feda4: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FEDA4u;
    {
        const bool branch_taken_0x1feda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1feda4) {
            ctx->pc = 0x1FEE0Cu;
            goto label_1fee0c;
        }
    }
    ctx->pc = 0x1FEDACu;
    // 0x1fedac: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1fedacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fedb0: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x1fedb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1fedb4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fedb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fedb8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FEDB8u;
    {
        const bool branch_taken_0x1fedb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fedb8) {
            ctx->pc = 0x1FEE0Cu;
            goto label_1fee0c;
        }
    }
    ctx->pc = 0x1FEDC0u;
    // 0x1fedc0: 0x8f85bb64  lw          $a1, -0x449C($gp)
    ctx->pc = 0x1fedc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fedc4: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1fedc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fedc8: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x1fedc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1fedcc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fedccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fedd0: 0x8ca300a4  lw          $v1, 0xA4($a1)
    ctx->pc = 0x1fedd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x1fedd4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1fedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fedd8: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1fedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1feddc: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x1feddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x1fede0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1fede0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1fede4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1fede4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fede8: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1fede8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fedec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1fedecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fedf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fedf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fedf4: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1fedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1fedf8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1fedf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fedfc: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1fedfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fee00: 0xac640108  sw          $a0, 0x108($v1)
    ctx->pc = 0x1fee00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 264), GPR_U32(ctx, 4));
    // 0x1fee04: 0x8f83bb64  lw          $v1, -0x449C($gp)
    ctx->pc = 0x1fee04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949732)));
    // 0x1fee08: 0xac640104  sw          $a0, 0x104($v1)
    ctx->pc = 0x1fee08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 4));
label_1fee0c:
    // 0x1fee0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fee0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fee10: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEE18u;
    // 0x1fee18: 0x0  nop
    ctx->pc = 0x1fee18u;
    // NOP
    // 0x1fee1c: 0x0  nop
    ctx->pc = 0x1fee1cu;
    // NOP
    ctx->pc = 0x1fee20u;
}
