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

// Function: sub_0017F4C0
// Address: 0x17f4c0 - 0x17f6b0
void sub_0017F4C0_0x17f4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F4C0_0x17f4c0");
#endif

    switch (ctx->pc) {
        case 0x17f690u: goto label_17f690;
        default: break;
    }

    ctx->pc = 0x17f4c0u;

    // 0x17f4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f4c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17f4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17f4cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17f4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17f4d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f4d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f4d8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f4dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f4e0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f4e4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f4e8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f4ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f4f0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x17f4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x17f4f4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x17f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x17f4f8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f4fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f500: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f504: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f508: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f50c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f510: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x17f514: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x17f514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17f518: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f51c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f520: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f524: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f528: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f52c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f530: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x17f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x17f534: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x17f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x17f538: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f53c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f540: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f544: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f548: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f54c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x17f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f554: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x17f554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x17f558: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f55c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f560: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x17f560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x17f564: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x17f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x17f568: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f56c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f570: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f574: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f578: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f57c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f580: 0x2463002c  addiu       $v1, $v1, 0x2C
    ctx->pc = 0x17f580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x17f584: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x17f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x17f588: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f58c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f590: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f594: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f598: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f59c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f5a0: 0x24630034  addiu       $v1, $v1, 0x34
    ctx->pc = 0x17f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x17f5a4: 0x24420034  addiu       $v0, $v0, 0x34
    ctx->pc = 0x17f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x17f5a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f5ac: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f5b0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f5b4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f5b8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f5bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f5c0: 0x2463003c  addiu       $v1, $v1, 0x3C
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x17f5c4: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x17f5c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f5cc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f5d0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f5d4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f5d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f5e0: 0x24630044  addiu       $v1, $v1, 0x44
    ctx->pc = 0x17f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 68));
    // 0x17f5e4: 0x24420044  addiu       $v0, $v0, 0x44
    ctx->pc = 0x17f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x17f5e8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f5ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f5f0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f5f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f5f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f5f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f600: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x17f600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x17f604: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x17f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x17f608: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f60c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f610: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f614: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f618: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x17f618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f61c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f620: 0x24630054  addiu       $v1, $v1, 0x54
    ctx->pc = 0x17f620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x17f624: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x17f624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x17f628: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17f62c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x17f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f630: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x17f630u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x17f634: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x17f634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x17f638: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f63c: 0xc440005c  lwc1        $f0, 0x5C($v0)
    ctx->pc = 0x17f63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f644: 0xe440005c  swc1        $f0, 0x5C($v0)
    ctx->pc = 0x17f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x17f648: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f64c: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x17f64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f650: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f654: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x17f654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x17f658: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f65c: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x17f65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f664: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x17f664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x17f668: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f66c: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x17f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17f670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f674: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x17f674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x17f678: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x17f678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f67c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f680: 0x2464006c  addiu       $a0, $v1, 0x6C
    ctx->pc = 0x17f680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x17f684: 0x2445006c  addiu       $a1, $v0, 0x6C
    ctx->pc = 0x17f684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x17f688: 0xc05fdac  jal         func_17F6B0
    ctx->pc = 0x17F688u;
    SET_GPR_U32(ctx, 31, 0x17F690u);
    ctx->pc = 0x17F6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F6B0u, 0x17F688u, 0x17F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F690u;
label_17f690:
    // 0x17f690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f698: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17f698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f69c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F6A4u;
    // 0x17f6a4: 0x0  nop
    ctx->pc = 0x17f6a4u;
    // NOP
    // 0x17f6a8: 0x0  nop
    ctx->pc = 0x17f6a8u;
    // NOP
    // 0x17f6ac: 0x0  nop
    ctx->pc = 0x17f6acu;
    // NOP
    ctx->pc = 0x17f6b0u;
}
