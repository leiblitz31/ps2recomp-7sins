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

// Function: sub_002D1920
// Address: 0x2d1920 - 0x2d1a50
void sub_002D1920_0x2d1920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D1920_0x2d1920");
#endif

    switch (ctx->pc) {
        case 0x2d1954u: goto label_2d1954;
        case 0x2d1968u: goto label_2d1968;
        case 0x2d1994u: goto label_2d1994;
        case 0x2d19a4u: goto label_2d19a4;
        case 0x2d19b4u: goto label_2d19b4;
        case 0x2d19c4u: goto label_2d19c4;
        case 0x2d19dcu: goto label_2d19dc;
        case 0x2d19f8u: goto label_2d19f8;
        case 0x2d1a1cu: goto label_2d1a1c;
        case 0x2d1a2cu: goto label_2d1a2c;
        default: break;
    }

    ctx->pc = 0x2d1920u;

    // 0x2d1920: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2d1920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2d1924: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d1924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d1928: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d1928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d192c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d192cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d1930: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d1930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d1934: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d1934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d1938: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2d1938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2d193c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2d193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2d1940: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2d1940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x2d1944: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2d1944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d1948: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2d1948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d194c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D194Cu;
    SET_GPR_U32(ctx, 31, 0x2D1954u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D194Cu, 0x2D1954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1954u;
label_2d1954:
    // 0x2d1954: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d1954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1958: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d1958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d195c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1960: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2D1960u;
    SET_GPR_U32(ctx, 31, 0x2D1968u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2D1960u, 0x2D1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1968u;
label_2d1968:
    // 0x2d1968: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x2d1968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d196c: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x2d196cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d1970: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2d1970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d1974: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2d1974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d1978: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d1978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d197c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2d197cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d1980: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d1980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d1984: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d1984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d1988: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2d1988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d198c: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x2D198Cu;
    SET_GPR_U32(ctx, 31, 0x2D1994u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2D198Cu, 0x2D1994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1994u;
label_2d1994:
    // 0x2d1994: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d1994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1998: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2d1998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2d199c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D199Cu;
    SET_GPR_U32(ctx, 31, 0x2D19A4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D199Cu, 0x2D19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19A4u;
label_2d19a4:
    // 0x2d19a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d19a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19a8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d19a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d19ac: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2D19ACu;
    SET_GPR_U32(ctx, 31, 0x2D19B4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2D19ACu, 0x2D19B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19B4u;
label_2d19b4:
    // 0x2d19b4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2d19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d19b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2d19b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19bc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2D19BCu;
    SET_GPR_U32(ctx, 31, 0x2D19C4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2D19BCu, 0x2D19C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19C4u;
label_2d19c4:
    // 0x2d19c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d19c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19c8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D19C8u;
    {
        const bool branch_taken_0x2d19c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d19c8) {
            ctx->pc = 0x2D19E0u;
            goto label_2d19e0;
        }
    }
    ctx->pc = 0x2D19D0u;
    // 0x2d19d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d19d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19d4: 0xc0b4694  jal         func_2D1A50
    ctx->pc = 0x2D19D4u;
    SET_GPR_U32(ctx, 31, 0x2D19DCu);
    ctx->pc = 0x2D1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1A50u, 0x2D19D4u, 0x2D19DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19DCu;
label_2d19dc:
    // 0x2d19dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d19dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d19e0:
    // 0x2d19e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2d19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d19e4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2d19e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2d19e8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x2d19e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d19ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2d19ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2d19f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2D19F0u;
    SET_GPR_U32(ctx, 31, 0x2D19F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2D19F0u, 0x2D19F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D19F8u;
label_2d19f8:
    // 0x2d19f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d19f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d19fc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2d19fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d1a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d1a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d1a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a08: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2d1a08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d1a0c: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x2d1a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d1a10: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2d1a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d1a14: 0xc0b743c  jal         func_2DD0F0
    ctx->pc = 0x2D1A14u;
    SET_GPR_U32(ctx, 31, 0x2D1A1Cu);
    ctx->pc = 0x2DD0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD0F0u, 0x2D1A14u, 0x2D1A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A1Cu;
label_2d1a1c:
    // 0x2d1a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d1a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1a20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d1a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1a24: 0xc096fe0  jal         func_25BF80
    ctx->pc = 0x2D1A24u;
    SET_GPR_U32(ctx, 31, 0x2D1A2Cu);
    ctx->pc = 0x25BF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BF80u, 0x2D1A24u, 0x2D1A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1A2Cu;
label_2d1a2c:
    // 0x2d1a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d1a30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d1a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1a34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d1a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1a38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d1a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d1a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d1a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1a44: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2d1a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d1a48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1A50u;
}
