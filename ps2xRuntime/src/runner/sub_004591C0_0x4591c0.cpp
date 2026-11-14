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

// Function: sub_004591C0
// Address: 0x4591c0 - 0x459220
void sub_004591C0_0x4591c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004591C0_0x4591c0");
#endif

    switch (ctx->pc) {
        case 0x4591c0u: goto label_4591c0;
        case 0x4591c4u: goto label_4591c4;
        case 0x4591c8u: goto label_4591c8;
        case 0x4591ccu: goto label_4591cc;
        case 0x4591d0u: goto label_4591d0;
        case 0x4591d4u: goto label_4591d4;
        case 0x4591d8u: goto label_4591d8;
        case 0x4591dcu: goto label_4591dc;
        case 0x4591e0u: goto label_4591e0;
        case 0x4591e4u: goto label_4591e4;
        case 0x4591e8u: goto label_4591e8;
        case 0x4591ecu: goto label_4591ec;
        case 0x4591f0u: goto label_4591f0;
        case 0x4591f4u: goto label_4591f4;
        case 0x4591f8u: goto label_4591f8;
        case 0x4591fcu: goto label_4591fc;
        case 0x459200u: goto label_459200;
        case 0x459204u: goto label_459204;
        case 0x459208u: goto label_459208;
        case 0x45920cu: goto label_45920c;
        case 0x459210u: goto label_459210;
        case 0x459214u: goto label_459214;
        case 0x459218u: goto label_459218;
        case 0x45921cu: goto label_45921c;
        default: break;
    }

    ctx->pc = 0x4591c0u;

label_4591c0:
    // 0x4591c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4591c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4591c4:
    // 0x4591c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4591c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4591c8:
    // 0x4591c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4591c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_4591cc:
    // 0x4591cc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4591ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4591d0:
    // 0x4591d0: 0xdc4243d0  ld          $v0, 0x43D0($v0)
    ctx->pc = 0x4591d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 17360)));
label_4591d4:
    // 0x4591d4: 0x64430001  daddiu      $v1, $v0, 0x1
    ctx->pc = 0x4591d4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_4591d8:
    // 0x4591d8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4591d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4591dc:
    // 0x4591dc: 0xfc4343d0  sd          $v1, 0x43D0($v0)
    ctx->pc = 0x4591dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 17360), GPR_U64(ctx, 3));
label_4591e0:
    // 0x4591e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4591e4:
    // 0x4591e4: 0x8c4243d8  lw          $v0, 0x43D8($v0)
    ctx->pc = 0x4591e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17368)));
label_4591e8:
    // 0x4591e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4591ec:
    if (ctx->pc == 0x4591ECu) {
        ctx->pc = 0x4591F0u;
        goto label_4591f0;
    }
    ctx->pc = 0x4591E8u;
    {
        const bool branch_taken_0x4591e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4591e8) {
            ctx->pc = 0x459204u;
            goto label_459204;
        }
    }
    ctx->pc = 0x4591F0u;
label_4591f0:
    // 0x4591f0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4591f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4591f4:
    // 0x4591f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x4591f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_4591f8:
    // 0x4591f8: 0x8c4243d8  lw          $v0, 0x43D8($v0)
    ctx->pc = 0x4591f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17368)));
label_4591fc:
    // 0x4591fc: 0x40f809  jalr        $v0
label_459200:
    if (ctx->pc == 0x459200u) {
        ctx->pc = 0x459204u;
        goto label_459204;
    }
    ctx->pc = 0x4591FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x459204u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4591FCu, 0x459204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x459204u;
label_459204:
    // 0x459204: 0xf  sync
    ctx->pc = 0x459204u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_459208:
    // 0x459208: 0x42000038  ei
    ctx->pc = 0x459208u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_45920c:
    // 0x45920c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459210:
    // 0x459210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x459210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_459214:
    // 0x459214: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x459214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_459218:
    // 0x459218: 0x3e00008  jr          $ra
label_45921c:
    if (ctx->pc == 0x45921Cu) {
        ctx->pc = 0x459220u;
        goto label_fallthrough_0x459218;
    }
    ctx->pc = 0x459218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x459218:
    ctx->pc = 0x459220u;
}
