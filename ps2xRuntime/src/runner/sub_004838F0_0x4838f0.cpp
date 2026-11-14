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

// Function: sub_004838F0
// Address: 0x4838f0 - 0x483950
void sub_004838F0_0x4838f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004838F0_0x4838f0");
#endif

    ctx->pc = 0x4838f0u;

    // 0x4838f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4838f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4838f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4838f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4838f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4838f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4838fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x4838fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x483900: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483904: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x483904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483908: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x483908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48390c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48390cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x483910: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x483910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483914: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x483914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483918: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x483918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x48391c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x48391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x483920: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x483920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x483924: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x483924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x483928: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x483928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x48392c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x48392cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x483930: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x483930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x483934: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x483934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483938: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x483938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48393c: 0x3e00008  jr          $ra
    ctx->pc = 0x48393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48393Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483944u;
    // 0x483944: 0x0  nop
    ctx->pc = 0x483944u;
    // NOP
    // 0x483948: 0x0  nop
    ctx->pc = 0x483948u;
    // NOP
    // 0x48394c: 0x0  nop
    ctx->pc = 0x48394cu;
    // NOP
    ctx->pc = 0x483950u;
}
