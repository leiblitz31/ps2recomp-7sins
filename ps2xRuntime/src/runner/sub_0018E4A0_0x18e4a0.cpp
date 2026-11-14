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

// Function: sub_0018E4A0
// Address: 0x18e4a0 - 0x18e580
void sub_0018E4A0_0x18e4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E4A0_0x18e4a0");
#endif

    switch (ctx->pc) {
        case 0x18e510u: goto label_18e510;
        case 0x18e548u: goto label_18e548;
        default: break;
    }

    ctx->pc = 0x18e4a0u;

    // 0x18e4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e4a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x18e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x18e4a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x18e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x18e4ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18e4b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x18e4bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x18e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e4c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4c8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x18e4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x18e4cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4d0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x18e4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e4d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x18e4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x18e4dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4e0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x18e4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18e4e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4e8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x18e4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x18e4ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e4f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x18e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18e4f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e4f8: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x18e4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x18e4fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18e4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e500: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e504: 0x24660014  addiu       $a2, $v1, 0x14
    ctx->pc = 0x18e504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x18e508: 0x24450014  addiu       $a1, $v0, 0x14
    ctx->pc = 0x18e508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x18e50c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18e50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18e510:
    // 0x18e510: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x18e510u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e514: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x18e514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x18e518: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x18e518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x18e51c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18e51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18e520: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x18e520u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e524: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x18e524u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e528: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x18e528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x18e52c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18E52Cu;
    {
        const bool branch_taken_0x18e52c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18e52c) {
            ctx->pc = 0x18E510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e510;
        }
    }
    ctx->pc = 0x18E534u;
    // 0x18e534: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x18e534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e538: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e53c: 0x24660034  addiu       $a2, $v1, 0x34
    ctx->pc = 0x18e53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x18e540: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x18e540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x18e544: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x18e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_18e548:
    // 0x18e548: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x18e548u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18e54c: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x18e54cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x18e550: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x18e550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x18e554: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x18e554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x18e558: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x18e558u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x18e55c: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x18e55cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x18e560: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x18e560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x18e564: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18E564u;
    {
        const bool branch_taken_0x18e564 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x18e564) {
            ctx->pc = 0x18E548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e548;
        }
    }
    ctx->pc = 0x18E56Cu;
    // 0x18e56c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18e56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e570: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18e574: 0x3e00008  jr          $ra
    ctx->pc = 0x18E574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E57Cu;
    // 0x18e57c: 0x0  nop
    ctx->pc = 0x18e57cu;
    // NOP
    ctx->pc = 0x18e580u;
}
