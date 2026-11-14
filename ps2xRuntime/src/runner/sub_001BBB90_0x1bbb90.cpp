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

// Function: sub_001BBB90
// Address: 0x1bbb90 - 0x1bbc20
void sub_001BBB90_0x1bbb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBB90_0x1bbb90");
#endif

    ctx->pc = 0x1bbb90u;

    // 0x1bbb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbb94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1bbb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1bbb98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1bbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1bbb9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbba0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bbba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bbba4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bbbac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbb0: 0x80430004  lb          $v1, 0x4($v0)
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bbbb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbb8: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x1bbbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbbbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbc0: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1bbbc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1bbbc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbc8: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1bbbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bbbcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbd0: 0x80430008  lb          $v1, 0x8($v0)
    ctx->pc = 0x1bbbd0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bbbd4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbd8: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1bbbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbe0: 0x80430009  lb          $v1, 0x9($v0)
    ctx->pc = 0x1bbbe0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x1bbbe4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbe8: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x1bbbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbbec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbbf0: 0x8043000a  lb          $v1, 0xA($v0)
    ctx->pc = 0x1bbbf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1bbbf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbbf8: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x1bbbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbbfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbc00: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x1bbc00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x1bbc04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc08: 0xa043000b  sb          $v1, 0xB($v0)
    ctx->pc = 0x1bbc08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 3));
    // 0x1bbc0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1bbc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbc10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1bbc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bbc14: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC1Cu;
    // 0x1bbc1c: 0x0  nop
    ctx->pc = 0x1bbc1cu;
    // NOP
    ctx->pc = 0x1bbc20u;
}
