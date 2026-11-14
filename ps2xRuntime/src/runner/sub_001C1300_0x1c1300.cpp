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

// Function: sub_001C1300
// Address: 0x1c1300 - 0x1c1360
void sub_001C1300_0x1c1300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1300_0x1c1300");
#endif

    ctx->pc = 0x1c1300u;

    // 0x1c1300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c1308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c130c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c130cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1310: 0xc44100ac  lwc1        $f1, 0xAC($v0)
    ctx->pc = 0x1c1310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c1314: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1c1314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1c1318: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c1318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c131c: 0x0  nop
    ctx->pc = 0x1c131cu;
    // NOP
    // 0x1c1320: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c1320u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1324: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1324u;
    {
        const bool branch_taken_0x1c1324 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c1324) {
            ctx->pc = 0x1C133Cu;
            goto label_1c133c;
        }
    }
    ctx->pc = 0x1C132Cu;
    // 0x1c132c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1330: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1c1330u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c1334: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1334u;
    {
        const bool branch_taken_0x1c1334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1334) {
            ctx->pc = 0x1C1340u;
            goto label_1c1340;
        }
    }
    ctx->pc = 0x1C133Cu;
label_1c133c:
    // 0x1c133c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c133cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1340:
    // 0x1c1340: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c1340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c1344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c1348: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c134c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C134Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C134Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1354u;
    // 0x1c1354: 0x0  nop
    ctx->pc = 0x1c1354u;
    // NOP
    // 0x1c1358: 0x0  nop
    ctx->pc = 0x1c1358u;
    // NOP
    // 0x1c135c: 0x0  nop
    ctx->pc = 0x1c135cu;
    // NOP
    ctx->pc = 0x1c1360u;
}
